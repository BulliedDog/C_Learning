#pragma once
#include"audio.h"
Audio::Audio(std::string path,float durata):path(path),durata(durata){}
Audio::~Audio(){}
void Audio::tipo(){
    std::cout<<"Tipo: audio"<<std::endl;
}
void Audio::show(){
    tipo();
    std::cout<<"Percorso: "<<path<<", Durata: "<<durata<<"s"<<std::endl;
    show_tags();
}