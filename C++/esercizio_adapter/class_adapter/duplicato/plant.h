#pragma once
#include<iostream>
class Plant{
    private:
        std::string plant_name;
    public:
        Plant(std::string name="Apple Tree"):plant_name{name}{}
        Plant(const Plant& other)=default;
        ~Plant()=default;
        virtual void dry(){
            std::cout<<"Plant "<<this->plant_name<<" is dried!"<<std::endl;
        }
};