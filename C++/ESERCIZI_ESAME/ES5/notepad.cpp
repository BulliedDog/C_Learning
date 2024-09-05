#pragma once
#include"notepad.h"
Notepad::Notepad(){}
Notepad::~Notepad(){}
void Notepad::add_testo(std::string testo){
    notes.push_back(new Testo(testo));
}
void Notepad::add_audio(std::string path,float durata){
    notes.push_back(new Audio(path,durata));
}
void Notepad::add_immagine(std::string path,int dim){
    notes.push_back(new Immagine(path,dim));
}
void Notepad::show_all(){
    for(auto it=notes.begin();it!=notes.end();it++){
        (*it)->show();
        std::cout<<std::endl;
    }
}
void Notepad::show_if_tag(std::string tag){
    bool presente;
    for(auto it=notes.begin();it!=notes.end();it++){
        presente=false;
        for(auto t:(*it)->get_tags()){
            if(t==tag)
                presente=true;
        }
        if(presente){
            (*it)->show();
            std::cout<<std::endl;
        }
    }
}
std::list<Nota*> Notepad::get_notes(){return notes;}