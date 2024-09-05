#pragma once
#include"Costumer.h"
Costumer::Costumer(std::string nome,std::string numero):nome{nome},numero{numero}{

}
Costumer::~Costumer(){

}
std::string Costumer::get_nome() const{
    return this->numero;
}
void Costumer::set_nome(std::string& nome){
    this->nome=nome;
}
std::string Costumer::get_numero() const{
    return this->numero;
}
void Costumer::set_numero(std::string& numero){
    this->numero=numero;
}