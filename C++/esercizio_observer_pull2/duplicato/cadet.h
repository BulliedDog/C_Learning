#pragma once
#include<iostream>
#include"observer.h"
#include"commander.h"
class Cadet:public Observer{
    private:
        std::string order;
        std::unique_ptr<Commander> subject;
    public:
        Cadet(Commander& subject):subject{std::make_unique<Commander>(subject)}{
            std::unique_ptr<Observer> o=std::make_unique<Observer>(this);
            this->subject->subscribe(o);
        }
        Cadet(const Cadet& other)=default;
        ~Cadet(){
            std::unique_ptr<Observer> o=std::make_unique<Observer>(this);
            this->subject->unsubscribe(o);
        };
        void update() override{
            this->order=subject->get_order();
        }
};