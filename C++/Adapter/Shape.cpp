#pragma once
#include"Shape.h"
#include<iostream>
#include<string>
Shape::Shape(std::string name,unsigned int angles,unsigned int surface):name{name},angles{angles},surface{surface}{

}
Shape::Shape(const Shape& other):name{other.name},angles{other.angles},surface{other.surface}{
    
}
Shape::~Shape(){ //serve perché virtuale, a prescindere altrimenti gcc dà problemi

}
void Shape::resize(int percentage){ //serve perché virtuale, a prescindere altrimenti gcc dà problemi
    this->surface+=(this->surface/100*percentage);
    //code code code
}
unsigned int Shape::get_surface() const{
    return this->surface;
}
void Shape::set_surface(unsigned int surface){
    this->surface=surface;
}
void Shape::what_am_i(){ //serve perché virtuale, a prescindere altrimenti gcc dà problemi
    std::cout<<"I am a generic Shape!"<<std::endl;
}
