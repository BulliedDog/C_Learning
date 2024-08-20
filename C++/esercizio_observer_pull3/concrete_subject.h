#pragma once
#include<iostream>
#include"subject.h"
#include"observer.h"
#include<list>
class Concrete_subject:public Subject{
    private:
        std::string name;
        std::list<Observer*> observers;
    public:
        Concrete_subject(std::string name):name{name}{}
        ~Concrete_subject(){}
        virtual void subscribe(Observer* o) override{
            this->observers.push_back(o);
        }
        virtual void unsubscribe(Observer* o) override{
            this->observers.remove(o);
        }
        virtual void notify() override{
            for(auto obs:observers)
                obs->update();
        }
        std::string get_name() const{
            return this->name;
        }
        void set_name(std::string name){
            this->name=name;
            std::cout<<"Nome cambiato!"<<std::endl<<std::endl;
            this->notify();
        }
        void print() const{
            std::cout<<"My name is "<<this->name<<"!"<<std::endl;
        }
        void print_observers() const{
            for(const auto obs:observers){
                obs->print();
            }
        }
};