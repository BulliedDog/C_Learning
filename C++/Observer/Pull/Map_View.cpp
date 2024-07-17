#pragma once
#include"Map_View.h"
#include"Game_Character.h"
Map_View::Map_View(Game_Character* gc,int x=0,int y=0):subject{gc},x{x},y{y}{

}
Map_View::~Map_View(){
    this->detach();
}
void Map_View::update(){
    this->x=this->subject->get_posx();
    this->y=this->subject->get_posy();
}
void Map_View::attach(){
    this->subject->subscribe(this);
}
void Map_View::detach(){
    this->subject->unsubscribe(this);
}
void Map_View::draw(){
    std::cout<<"Map -> x: "<<this->x<<" y: "<<this->y<<std::endl;
}
int Map_View::get_x(){
    return this->x;
}
int Map_View::get_y(){
    return this->y;
}