#pragma once
#include"subject.h"
#include<iostream>
#include<list>
#include<memory>
class C_subject:public Subject{
    private:
        std::string name;
        std::list<Observer*> observers;
    public:
        C_subject(std::string name):name{name}{}
        C_subject(const C_subject& other)=default;
        ~C_subject(){}
        void subscribe(Observer* o) override{
            this->observers.push_back(o);
        }
        void unsubscribe(Observer* o) override{
            this->observers.remove(o);
        }
        void notify(){
            for(std::list<Observer*>::const_iterator it=observers.begin();it!=observers.end();it++)
                (*it)->update();
        }
        void set_name(std::string name){this->name=name;this->notify();}
        std::string get_name() const{return this->name;}
};