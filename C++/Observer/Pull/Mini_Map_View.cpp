#pragma once
#include"Mini_Map_View.h"
#include"Game_Character.h"
Mini_Map_View::Mini_Map_View(Game_Character* gc,int x=0,int y=0):subject{gc},x{x},y{y}{

}
Mini_Map_View::~Mini_Map_View(){
    this->detach();
}
void Mini_Map_View::update(){
    this->x=this->subject->get_posx();
    this->y=this->subject->get_posy();
}
void Mini_Map_View::attach(){
    this->subject->subscribe(this);
}
void Mini_Map_View::detach(){
    this->subject->unsubscribe(this);
}
void Mini_Map_View::draw(){
    std::cout<<"Mini_Map -> x: "<<this->x<<" y: "<<this->y<<std::endl;
}
int Mini_Map_View::get_x(){
    return this->x;
}
int Mini_Map_View::get_y(){
    return this->y;
}