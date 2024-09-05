#pragma once
#include<iostream>
#include"subject.h"
#include"observer.h"
#include<list>
class Character:public Subject{
    private:
        std::string name;
        std::list<Observer*> observers;
    public:
        Character(std::string name):name{name}{}
        Character(const Character& other)=default;
        ~Character()=default;
        void subscribe(Observer* o) override{
            this->observers.push_back(o);
        }
        void unsubscribe(Observer* o) override{
            this->observers.remove(o);
        }
        void notify() override{
            for(auto it=observers.begin();it!=observers.end();it++)
                (*it)->update();
        }
        std::string get_name() const{return this->name;}
        void set_name(std::string name){this->name=name;this->notify();}
};