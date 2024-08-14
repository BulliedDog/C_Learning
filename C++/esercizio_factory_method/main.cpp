#include<iostream>
#include"character.h"
#include"character_factory.h"
#include"man.h"
#include"woman.h"
int main(){
    Character_factory factory;
    std::unique_ptr<Character> man=factory.create_character(Character_type::man,"Giorgio");
    std::unique_ptr<Character> woman=factory.create_character(Character_type::woman,"Fiona");
    man->who();
    woman->who();
    return 0;
}