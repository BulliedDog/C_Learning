#pragma once
#include"Text_To_Shape_Object_Adapter.h"
#include<iostream>
#include<string>
#include<vector>
Text_To_Shape_Object_Adapter::Text_To_Shape_Object_Adapter(std::unique_ptr<Text> text):text{std::move(text)}{

}
Text_To_Shape_Object_Adapter::Text_To_Shape_Object_Adapter(std::string text,unsigned int size,std::string font_type)
:text{std::make_unique<Text>(text,size,font_type)}{

}
Text_To_Shape_Object_Adapter::~Text_To_Shape_Object_Adapter(){

}
void Text_To_Shape_Object_Adapter::resize(int percentage){
    this->text->change_size(percentage);
}