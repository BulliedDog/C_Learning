#pragma once
#include<iostream>
#include"elevator_interface.h"
class Elevator:public Elevator_interface{
    private:
        int level;
        bool door_open;
    public:
        explicit Elevator(int level=0,bool door_open=false):level{level},door_open{door_open}{}
        explicit Elevator(const Elevator& other):Elevator(other.level,other.door_open){}
        ~Elevator(){}
        Elevator& operator=(const Elevator& right){
            this->level=right.level;
            this->door_open=right.door_open;
            return *this;
        }
        void move_to(int level) override{
            this->level=level;
        }
        void open_doors() override{
            this->door_open=true;
        }
        void close_doors() override{
            this->door_open=false;
        }
        virtual void print(){
            std::cout<<"Elevator->Level: "<<level<<" Doors: ";
            if(door_open)
                std::cout<<"open";
            else
                std::cout<<"closed";
            std::cout<<std::endl;
        }
        int get_level() const{
            return level;
        }
        bool get_door() const{
            return door_open;
        }
};