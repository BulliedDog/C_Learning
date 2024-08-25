#pragma once
#include<iostream>
#include<list>
#include<memory>
#include"subject.h"
#include"observer.h"
class Commander:public Subject{
    private:
        std::string order;
        std::list<std::unique_ptr<Observer>> observers;
    public:
        Commander(std::string order):order{order}{}
        Commander(const Commander& other)=default;
        ~Commander()=default;
        void subscribe(std::unique_ptr<Observer>& o) override{
            observers.push_back(std::move(o));
        }
        void unsubscribe(std::unique_ptr<Observer>& o) override{
            observers.remove(o);
        }
        void notify() override{
            for(auto it=observers.begin();it!=observers.end();it++)
                (*it)->update();
        }
        std::string get_order() const{return this->order;}
};