#pragma once
#include"Character3D.h"
#include<map>
Character3D::Character3D(int x,int y, int z,Weapon* weap):x(x),y(y),z(z),weapon(weap){
    
}
void Character3D::move(int x,int y,int z){
    this->x=x;
    this->y=y;
    this->z=z;
    std::cout<<"Personaggio 3D mosso in ("<<x<<","<<y<<","<<z<<")"<<std::endl;
}
void Character3D::selectWeapon(std::string name){
    if(weapons.find(name)==weapons.end())
        throw std::runtime_error("Arma non presente in 3D");
    weapon=(*weapons.find(name)).second;
    std::cout<<"Arma "<<weapon->get_name()<<" selezionata in 3D"<<std::endl;
}
Weapon* Character3D::get_weapon() const{
    return weapon;
}
void Character3D::add_weapon(Weapon* weapon){
    weapons[weapon->get_name()]=weapon;
}
