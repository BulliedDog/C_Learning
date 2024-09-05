#pragma once
#include<iostream>
class Stamina{
    private:
        int stamina{100};
    public:
        Stamina(int stamina=100):stamina{stamina}{}
        Stamina(const Stamina& other)=default;
        ~Stamina()=default;
        int get_stamina() const{return this->stamina;}
        void set_stamina(int stamina){this->stamina=stamina;}
};