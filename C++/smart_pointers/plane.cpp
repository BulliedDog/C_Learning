#pragma once
#include<iostream>
#include"plane.h"
Plane::Plane(std::string name,std::string model,int wings,int propellers):name{name},model{model},wings{wings},propellers{propellers}{

}
Plane::Plane(Plane& other):name{other.name},model{other.model},wings{other.wings},propellers{other.propellers}{

}
Plane::~Plane(){

}
void Plane::what(){
    std::cout<<"*******************************************"<<std::endl;
    std::cout<<"Plane: "<<std::endl;
    std::cout<<"Name: "<<name<<std::endl;
    std::cout<<"Model: "<<model<<std::endl;
    std::cout<<"Wings: "<<wings<<std::endl;
    std::cout<<"Propelles: "<<propellers<<std::endl;
    std::cout<<"*******************************************"<<std::endl<<std::endl;

}
void Plane::set_name(std::string name){this->name=name;}
void Plane::set_model(std::string model){this->model=model;}
void Plane::set_wings(int wings){this->wings=wings;}
void Plane::set_propellers(int propellers){this->propellers=propellers;}
std::string Plane::get_name(){return this->name;}
std::string Plane::get_model(){return this->model;}
int Plane::get_wings(){return this->wings;}
int Plane::get_propellers(){return this->propellers;}