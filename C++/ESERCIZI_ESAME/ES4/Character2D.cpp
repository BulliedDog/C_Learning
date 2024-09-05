#pragma once
#include"Character2D.h"
Character2D::Character2D(int x,int y,Weapon* weapon):x(x),y(y),weapon(weapon){

}
void Character2D::move(int x,int y){
    this->x=x;
    this->y=y;
    std::cout<<"Personaggio 2D mosso in ("<<x<<","<<y<<")"<<std::endl;
}
void Character2D::selectWeapon(int pos){
    if(weapons.find(pos)==weapons.end())
        throw std::runtime_error("Arma non presente in 2D");
    weapon=(*weapons.find(pos)).second;
    std::cout<<"Arma "<<weapon->get_name()<<" selezionata in 2D"<<std::endl;
}
void Character2D::add_weapon(Weapon* weapon){
    weapons[weapon->get_number()]=weapon;
}
