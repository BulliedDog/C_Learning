#pragma once
#include"Text_To_Shape_Adapter.h"
#include<iostream>
#include<string>
/// @brief questo è il costruttore per riferimento di text, uso il costruttore di text per inserire i dati privati in Text_To_Shape_Adapter
/// @param text Questo è l'oggetto testo passato per riferimento nel caso si voglia adattare un Text che è già nello stack
Text_To_Shape_Adapter::Text_To_Shape_Adapter(Text& text):Text{text.get_text(),text.get_size(),text.get_font_type()}{

}
Text_To_Shape_Adapter::Text_To_Shape_Adapter(std::string text,unsigned int size,std::string font_type):Text{text,size,font_type}{

}
Text_To_Shape_Adapter::~Text_To_Shape_Adapter(){
    
}
/// @brief Questo è il metodo virtual Shape::resize() che emula Text::change_size(), ovviamente size viene modifica nell'oggetto
/// Text_To_Shape_Adapter
void Text_To_Shape_Adapter::resize(int percentage){
    change_size(percentage);
    //code code code
}
void Text_To_Shape_Adapter::what_am_i(){
    std::cout<<"I am a Class Adapted Text!: ";
    Text::print();
}