#pragma once
#include<iostream>
class Character{
    private:
        std::string name;
    public:
        Character(std::string name="Alberto"):name{name}{

        }
        Character(const Character& other)=default;
        ~Character()=default;
        virtual void die(){
            std::cout<<"Character "<<this->name<<" is dead!"<<std::endl;
        }
};