#pragma once
#include"legacy_elevator.h"
LegacyElevator::LegacyElevator(int level,bool door_open):level{level},door_open{door_open}{

}
int LegacyElevator::get_current_level() const{
    return this->level;
}
void LegacyElevator::move_by(int level){
    this->level+=level;
}
void LegacyElevator::open_doors(){
    this->door_open=true;
}
void LegacyElevator::close_doors(){
    this->door_open=false;
}
void LegacyElevator::print(){
    std::cout<<"Elevator->Level: "<<level<<" Doors: ";
    if(door_open)
        std::cout<<"open";
    else
        std::cout<<"closed";
    std::cout<<std::endl;
}
