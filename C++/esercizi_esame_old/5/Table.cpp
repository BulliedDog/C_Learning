#pragma once
#include"Table.h"
Table::Table(int numero,int capacità,bool libero):numero{numero},capacità{capacità},libero{libero}{

}
Table::~Table(){

}
int Table::get_numero() const{
    return this->numero;
}
void Table::set_numero(int numero){
    this->numero=numero;
}
int Table::get_capacità() const{
    return this->capacità;
}
void Table::set_capacità(int capacità){
    this->capacità=capacità;
}
bool Table::get_libero() const{
    return this->libero;
}
void Table::set_libero(bool libero){
    this->libero=libero;
}