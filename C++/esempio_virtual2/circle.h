#pragma once
#include<iostream>
#include"shape.h"
class Circle : public Shape{
    private:

    public:
        Circle(int area){
            set_angles(0);
            set_area(area);
        }
        ~Circle(){std::cout<<"Sono il distruttore di circle!"<<std::endl;}
        void what_am_i() /*override*/{
            std::cout<<"I am a Circle"<<std::endl;
        }
};