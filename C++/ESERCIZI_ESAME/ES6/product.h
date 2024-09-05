#pragma once
#include"iostream"
class Product{
    private:
        float price;
        std::string name;
    public:
        Product(float p,std::string n);
        ~Product();
        float get_price()const;
        void set_price(float p);
        std::string get_name()const;
        void set_name(std::string name);
};