#pragma once
#include"observer.h"
#include<iostream>
#include"c_subject.h"
class C_observer:public Observer{
    private:
        std::string name;
        C_subject* subject;
    public:
        C_observer(C_subject* subject):subject{subject},name{subject->get_name()}{
            subject->subscribe(this);
        }
        C_observer(const C_observer& other)=default; //non necessita deep copy
        ~C_observer(){
            subject->unsubscribe(this);
        }
        void update() override{
            this->name=subject->get_name();
        }
};