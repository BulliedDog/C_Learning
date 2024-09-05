#pragma once
#include"object.h"
class Sword:public Object{
    private:
        int damage;
    public:
        Sword(int damage=100,std::string name="Sword"):damage{damage},Object(name){}
        Sword(const Sword& other)=default;
        ~Sword()=default;
        void use(){}
};