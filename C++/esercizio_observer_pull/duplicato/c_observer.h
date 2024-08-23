#pragma once
#include<iostream>
#include"c_subject.h"
#include"observer.h"
class C_observer:public Observer{
    private:
        std::string name;
        C_subject* subject;
    public:
        C_observer(C_subject* subject):name{subject->get_name()},subject{subject}{
            this->attach();
        }
        C_observer(const C_observer& other)=delete;
        ~C_observer(){
            this->detatch();
        }
        void attach() override{
            subject->subscribe(this);
        }
        void detatch() override{
            subject->unsubscribe(this);
        }
        void update() override{
            this->name=subject->get_name();
        }
        void print() const override{
            std::cout<<"Observer name->"<<this->name<<std::endl;
        }
};