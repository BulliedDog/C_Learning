#pragma once
#include<iostream>
#include"observer.h"
#include"character.h"
#include<memory>
class Window:public Observer{
    private:
        int posx,posy;
        Character* subject;
    public:
        Window(Character* subject,int posx=0,int posy=0):posx{subject->get_posx()},posy{subject->get_posy()},subject{subject}{
            this->attach();
        }
        ~Window(){
            this->detatch();
        }
        void attach() override{
            subject->subscribe(this);
        }

        void detatch() override{
            subject->unsubscribe(this);
        }
        void update() override{
            this->posx=subject->get_posx();
            this->posy=subject->get_posy();
        }
        void print(){
            std::cout<<"Window-> x: "<<posx<<", y: "<<posy<<std::endl;
        }
};