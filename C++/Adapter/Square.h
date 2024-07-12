#pragma once
#include<iostream>
#include"Shape.h"
class Square : public Shape{
    private:
        
    public:
        explicit Square(std::string name="Square", unsigned int angles=4, unsigned int surface=4);
        explicit Square(Square& other);
        ~Square();
        //void resize() va bene perché è uno shape quindi eredita il metodo senza doverlo sovrascrivere
        void what_am_i() override;
};