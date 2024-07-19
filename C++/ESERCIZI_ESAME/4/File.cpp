#pragma once
#include"File.h"
#include"Permission.h"
#include<string>
File::File(){

}
File::File(std::string nome,int dimensione,bool read_only):nome{nome},dimensione{dimensione}{
    this->permission=Permission(read_only);
}
File::~File(){

}
void File::rename(std::string nome){
    set_name(nome);
}
std::string File::get_name() const{return this->nome;}
void File::set_name(std::string nome){this->nome=nome;}
int File::get_dimensione() const{return this->dimensione;}
void File::set_dimensione(int dimensione){this->dimensione=dimensione;}