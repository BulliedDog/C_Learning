#pragma once
#include<iostream>
#include"product.h"
Product::Product(float p,std::string n):price(p),name(n){}
Product::~Product(){}
float Product::get_price()const{return price;}
void Product::set_price(float p){this->price=p;}
std::string Product::get_name()const{return name;}
void Product::set_name(std::string name){this->name=name;}