#include<iostream>
#include<list>
#include<memory>
#include"human_factory.h"
#include"alien_factory.h"
#include"alien.h"
#include"human.h"
#include"character.h"
#include"abstract_factory.h"
int main(){
    std::list<std::unique_ptr<Character>> characters;
    Human_factory hf;
    Alien_factory af;
    characters.push_back(hf.create_character("Alberto",200));
    characters.push_back(af.create_character());
    for(std::list<std::unique_ptr<Character>>::const_iterator it=characters.begin();it!=characters.end();it++){
        (*it)->print();
    }
    return 0;
}