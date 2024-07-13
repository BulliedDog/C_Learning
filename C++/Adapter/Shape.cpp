#pragma once
#include"Shape.h"
#include<iostream>
#include<string>
Shape::Shape(std::string name,unsigned int angles,double surface):name{name},angles{angles},surface{surface}{

}
Shape::Shape(const Shape& other):name{other.name},angles{other.angles},surface{other.surface}{
    
}
Shape::~Shape(){ //serve perché virtuale, a prescindere altrimenti gcc dà problemi

}
void Shape::resize(int percentage){ //serve perché virtuale, a prescindere altrimenti gcc dà problemi
    this->surface=this->surface+(this->surface*percentage/100);
    //code code code
}
double Shape::get_surface() const{
    return this->surface;
}
void Shape::set_surface(double surface){
    this->surface=surface;
}
void Shape::what_am_i(){ //serve perché virtuale, a prescindere altrimenti gcc dà problemi
    std::cout<<"I am a generic "<<this->name<<"!:[angles: "<<this->angles<<"][surface: "<<this->surface<<"]"<<std::endl;
}
std::string Shape::get_name() const{
    return this->name;
}
void Shape::set_name(std::string name){
    this->name=name;
}
unsigned int Shape::get_angles() const{
    return this->angles;
}
void Shape::set_angles(unsigned int angles){
    this->angles=angles;
}