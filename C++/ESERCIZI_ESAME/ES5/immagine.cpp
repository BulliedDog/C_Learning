#pragma once
#include"immagine.h"
Immagine::Immagine(std::string path,int dim):path(path),dim(dim){}
Immagine::~Immagine(){}
void Immagine::tipo(){
    std::cout<<"Tipo: immagine"<<std::endl;
}
void Immagine::show(){
    tipo();
    std::cout<<"Percorso: "<<path<<", Dimensione: "<<dim<<"MB"<<std::endl;
    show_tags();
}