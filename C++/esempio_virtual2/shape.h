#include <iostream>
#pragma once
class Shape{
    private:
        int angles;
        int area;
    public:
        //CONSTRUCT DELETE OVERLOAD//
        Shape():angles{3},area{3}{}
        Shape(int angles, int area):angles{angles},area{area}{}
        virtual ~Shape(){std::cout<<"Sono il distruttore di Shape!"<<std::endl;}  //distruttore virtuale per far sì che non ci siano memory leak continuando il polimorfismo
        Shape& operator=(const Shape& other){
            this->angles=other.angles;
            this->area=other.area;
            return *this;
        }
        //GETTER AND SETTER//
        int get_angles() const{return angles;}
        int get_area() const{return area;}
        void set_angles(int angles){this->angles=angles;}
        void set_area(int area){this->area=area;}
        //OTHER METHODS//
        virtual void what_am_i(){
            std::cout<<"I am a Shape"<<std::endl;
        }
        void foo(){std::cout<<"I am a foo!"<<std::endl;}
};