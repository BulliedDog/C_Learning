#pragma once
#include"Adapter.h"
Adapter::Adapter(int x,int y,Weapon* weapon):Character2D(x,y,weapon){

}
void Adapter::move(int x,int y,int z){
    Character2D::move(x,y);
}
void Adapter::selectWeapon(std::string name){
    Character3D::selectWeapon(name);
    Character2D::selectWeapon(Character3D::get_weapon()->get_number());
}