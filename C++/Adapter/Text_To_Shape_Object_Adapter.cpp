#pragma once
#include"Text_To_Shape_Object_Adapter.h"
#include<iostream>
#include<string>
#include<vector>
Text_To_Shape_Object_Adapter::Text_To_Shape_Object_Adapter(Text& text):text{std::make_unique<Text>(text)}{

}
Text_To_Shape_Object_Adapter::Text_To_Shape_Object_Adapter(std::string text,double size,std::string font_type)
:text{std::make_unique<Text>(text,size,font_type)}{

}
Text_To_Shape_Object_Adapter::~Text_To_Shape_Object_Adapter(){

}
void Text_To_Shape_Object_Adapter::resize(int percentage){
    this->text->Text::change_size(percentage);
}
void Text_To_Shape_Object_Adapter::what_am_i(){
    std::cout<<"I am an Object Adapted Text!: ";
    this->text->print();
}