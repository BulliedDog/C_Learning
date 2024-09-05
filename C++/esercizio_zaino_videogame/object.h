#pragma once
#include<iostream>
class Object{
    protected:
        int weight;
    public:
        Object(int weight=1):weight{weight}{}
        Object(const Object& other)=default;
        virtual ~Object()=default;
};