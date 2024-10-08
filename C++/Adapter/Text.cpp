#pragma once
#include"Text.h"
#include<iostream>
#include<string>
Text::Text(std::string text,double size,std::string font_type):text{text},size{size},font_type{font_type}{
    
}
Text::Text(Text& other):text{other.text},size{other.size},font_type{other.font_type}{

}
Text::~Text(){ //serve definire il distruttore a prescindere perché virtuale

}
/// @brief metodo special_request() dell'uml. La funzione è la stessa di virtual Shape::resize() ma avendo nomi diversi
/// non può essere chiamata dai std::unique_ptr<Shape> a classe base poichè il metodo dell'adaptee è Text::change_size()
void Text::change_size(int percentage){
    this->size=this->size+(this->size/100*percentage);
    //code code code, special for Text
}
//G&S//
std::string Text::get_text(){
    return this->text;
}
void Text::set_text(std::string text){
    this->text=text;
}
double Text::get_size(){
    return this->size;
}
void Text::set_size(double size){
    this->size=size;
}
std::string Text::get_font_type(){
    return this->font_type;
}
void Text::set_font_type(std::string font_type){
    this->font_type=font_type;
}
void Text::print(){
    std::cout<<"["<<this->text<<"]["<<this->size<<"]["<<this->font_type<<"]"<<std::endl;
}