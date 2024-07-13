#pragma once
#include"Square.h"
#include<iostream>
#include<string>
Square::Square(std::string name, unsigned int angles, double surface):Shape(name,angles,surface){
    
}
Square::~Square(){

}
void Square::what_am_i(){
    std::cout<<"I am a generic "<<this->get_name()<<"!:[angles: "<<this->get_angles()<<"][surface: "<<this->get_surface()<<"]"<<std::endl;
}
void Square::resize(int percentage){
    double surface=this->get_surface();
    double new_surface=surface+surface/100*percentage;
    this->set_surface(new_surface);
}