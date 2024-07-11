#pragma once
#include"Square.h"
#include<iostream>
#include<string>
Square::Square(std::string name, unsigned int angles, unsigned int surface):Shape(name,angles,surface){
    
}
void Square::what_am_i(){
    std::cout<<"I am a Square!"<<std::endl;
}