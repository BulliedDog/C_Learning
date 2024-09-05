#pragma once
#include<iostream>
#include"abstract_factory.h"
#include"alien.h"
class Alien_factory{
    public:
        ~Alien_factory()=default;
        std::unique_ptr<Character> create_character(std::string name="Alien",int hp=100){
            return std::make_unique<Alien>(name,hp);
        }
};