#pragma once
#include"nota.h"
Nota::Nota(){}
Nota::~Nota(){}
void Nota::add_tag(std::string tag){
    tags.push_back(tag);
}
void Nota::show_tags(){
    std::cout<<"Tags: "<<std::endl;
    for(auto t:tags)
        std::cout<<t<<std::endl;
}
std::list<std::string> Nota::get_tags() const{return tags;}