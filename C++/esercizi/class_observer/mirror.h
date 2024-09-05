#pragma once
#include"character.h"
#include"observer.h"
#include<iostream>
class Mirror:public Observer{
    private:
        std::string name;
        Character* subject;
    public:
        Mirror(Character* subject):name{subject->get_name()},subject(subject){
            subject->subscribe(this);
        }
        Mirror(const Mirror& other)=default;
        ~Mirror(){
            subject->unsubscribe(this);
        };
        void update() override{
            this->name=subject->get_name();
        }
};