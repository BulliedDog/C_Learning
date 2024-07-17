#pragma once
#include<iostream>
#include"Game_Character.h"
#include"Observer.h"
Game_Character::Game_Character(int x=0,int y=0):posx{x},posy{y}{

}
Game_Character::Game_Character(Game_Character& other):posx{other.posx},posy{other.posy}{

}
Game_Character::~Game_Character(){

}
void Game_Character::subscribe(Observer* o){
    this->observers.push_back(o);
}
void Game_Character::unsubscribe(Observer* o){
    this->observers.remove(o);
}
void Game_Character::notify(){
    for(auto observer:observers)
        observer->update();
}
void Game_Character::move(int x, int y){
    this->posx=x;
    this->posy=y;
    this->notify();
}
int Game_Character::get_posx(){return posx;}
int Game_Character::get_posy(){return posy;}