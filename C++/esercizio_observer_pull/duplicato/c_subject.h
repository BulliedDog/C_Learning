#pragma once
#include<iostream>
#include<list>
#include"subject.h"
#include"observer.h"
class C_subject:public Subject{
    private:
        std::string name;
        std::list<Observer*> observers;
    public:
        C_subject(std::string name="Alberto"):name{name}{}
        C_subject(const C_subject& other)=default;
        ~C_subject()=default;
        void subscribe(Observer* o) override{
            this->observers.push_back(o);
        }
        void unsubscribe(Observer* o) override{
            this->observers.remove(o);
        }
        void notify(){
            for(auto& o:observers)
                o->update();
        }
        std::string get_name() const{return this->name;}
        void set_name(std::string name){
            this->name=name;
            this->notify(); //importante quando si tratta di avvertire gli observers ad ogni modifica!
        }
};