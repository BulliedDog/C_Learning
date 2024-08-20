#pragma once
#include<iostream>
#include"concrete_subject.h"
class Concrete_observer:public Observer{
    private:
        std::string name;
        Concrete_subject* subject;
    public:
        Concrete_observer(Concrete_subject* subject):subject{subject},name{subject->get_name()}{}
        ~Concrete_observer(){}
        virtual void attach() override{
            subject->subscribe(this);
        }
        virtual void detatch() override{
            subject->unsubscribe(this);
        }
        virtual void update() override{
            this->name=subject->get_name();
        }
        void print() const override{
            std::cout<<"My name is "<<this->name<<"!"<<std::endl;
        }
};