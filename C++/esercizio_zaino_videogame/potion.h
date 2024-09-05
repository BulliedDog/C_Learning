#pragma once
#include"object.h"
class Potion:public Object{
    public:
        Potion(int weight):Object(weight){}
        Potion(const Potion& other)=default;
        ~Potion()=default;
};