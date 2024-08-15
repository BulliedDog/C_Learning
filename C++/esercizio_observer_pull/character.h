#pragma once
#include<list>
#include"observer.h"
#include"subject.h"
class Character:public Subject{
    private:
        int posx,posy;
        std::list<Observer*> observers;
    public:
        Character(int posx=0,int posy=0):posx{posx},posy{posy}{}
        Character(Character& other):posx{other.posx},posy{other.posy}{}
        ~Character(){}
        void subscribe(Observer* o) override{
            observers.push_back(o);
        }
        void unsubscribe(Observer* o) override{
            observers.remove(o);
        }
        void notify() override{
            for(auto it=observers.begin();it!=observers.end();it++)
                (*it)->update();
        }
        int get_posx() const{
            return this->posx;
        }
        int get_posy() const{
            return this->posy;
        }
        void set_posx(int posx){
            this->posx=posx;
            this->notify();
        }
        void set_posy(int posy){
            this->posy=posy;
            this->notify();
        }
        void print(){
            std::cout<<"Character-> x: "<<posx<<", y: "<<posy<<std::endl;
        }
};