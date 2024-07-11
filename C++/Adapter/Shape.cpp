#pragma once
#include"Shape.h"
#include<iostream>
#include<string>
Shape::Shape(std::string name,int angles,unsigned int surface):name{name},angles{angles},surface{surface}{

}
Shape::Shape(const Shape& other):name{other.name},angles{other.angles},surface{other.surface}{
    
}
Shape::~Shape(){

}
void Shape::resize(int percentage){
    this->surface+=(this->surface/100*percentage);
    //code code code
}
unsigned int Shape::get_surface() const{
    return this->surface;
}
void Shape::set_surface(unsigned int surface){
    this->surface=surface;
}
