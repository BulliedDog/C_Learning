#include<iostream>
#include<vector>
#include"Character2D.h"
#include"Character3D.h"
#include"Weapon.h"
#include"Adapter.h"
#include"Character2D.cpp"
#include"Character3D.cpp"
#include"Weapon.cpp"
#include"Adapter.cpp"
int main(){
    Weapon gun("gun",1);
    Weapon shotgun("shotgun",2);
    std::vector<Character3D*> characters;
    characters.push_back(new Character3D(0,0,0));
    characters.push_back(new Adapter(0,0));
    characters[0]->add_weapon(&gun);
    characters[0]->add_weapon(&shotgun);
    characters[1]->add_weapon(&gun);
    characters[0]->move(1,2,3);
    characters[1]->move(8,4,0);
    characters[0]->selectWeapon("shotgun");
    characters[1]->selectWeapon("gun");
    characters[1]->selectWeapon("shotgun");
    return 0;
}