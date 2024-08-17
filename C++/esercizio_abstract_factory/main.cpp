#include<iostream>
#include<list>
#include<vector>
#include<memory>
#include"character_factory.h"
#include"character.h"
#include"pirate.h"
#include"officer.h"
void print(std::vector<std::unique_ptr<Character>>& characters){
    for(auto it=characters.begin();it!=characters.end();it++){
        if((*it)!=nullptr)
            (*it)->print();
    }
}
int main(){
    Character_factory factory;
    std::vector<std::unique_ptr<Character>> characters;
    characters.push_back(factory.create_character(pirate,"Blackbeard"));
    characters.push_back(factory.create_character(officer,"Officer Jwels",120));
    characters.push_back(factory.create_character(officer,"Officer Owl",10));
    characters[2]->die();
    print(characters);
    characters[0]->kill(characters[1]);
    print(characters);
    return 0;
}