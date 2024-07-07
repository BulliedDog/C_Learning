#pragma once
#include<iostream>
#include"shape.h"
class Square : public Shape{
    private:
        
    public:
        using Shape::foo;   //uso using per evitare il name hiding e quindi effettuare l'overload del metodo foo
        void foo(std::string foo){std::cout<<"I am a "<<foo<<std::endl;}   //overload metodo foo
        Square(int area){
            set_angles(4);
            set_area(area);
        }
        ~Square(){std::cout<<"Sono il distruttore di square!"<<std::endl;}
        void what_am_i() /*override*/{
            std::cout<<"I am a Square!"<<std::endl;
        }
};