#pragma once
#include"testo.h"
Testo::Testo(std::string t):testo(t){}
Testo::~Testo(){}
void Testo::tipo(){
    std::cout<<"Tipo: testo"<<std::endl;
}
void Testo::show(){
    tipo();
    std::cout<<"Testo: "<<testo<<std::endl;
    show_tags();
}