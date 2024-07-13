#pragma once
#include"Square.h"
#include<iostream>
#include<string>
Square::Square(std::string name, unsigned int angles, unsigned int surface):Shape(name,angles,surface){
    
}
Square::~Square(){

}
void Square::what_am_i(){
    std::cout<<"I am a Square!"<<std::endl;
}
void Square::resize(int percentage){
    this->set_surface(this->get_surface()+this->get_surface()/100*percentage);
}