#pragma once
#include"subject.h"
#include"observer.h"
#include<list>
class Character:public Subject{
    private:
        int x,y;
        std::list<Observer*> observers;
    public:
        Character(int x,int y):x{x},y{y}{}
        Character(Character& other):x{other.x},y{other.y}{}
        ~Character(){}
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
        int get_x() const{return x;}
        int get_y() const{return y;}
        void set_x(int x){this->x=x;this->notify();}
        void set_y(int y){this->y=y;this->notify();}
};