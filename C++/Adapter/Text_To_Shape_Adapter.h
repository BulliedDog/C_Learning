#pragma once
#include<iostream>
#include<string>
#include<memory>
#include"Shape.h"
#include"Shape.cpp"
#include"Text.h"
#include"Text.cpp"
/**
 * @brief Classe Adapter/Object adapter
 * @interface Shape viene eridata pubblicamente, essendo il target, per effettuare l'override del metodo resize
 * @interface Text viene ereditata privatamente, essendo l'adaptee, per effettuare il metodo Text::change_size()
 * nell'override di Shape::resize()
 */
class Text_To_Shape_Adapter:public Shape::Shape,private Text::Text{
    //non ha membri private se non quelli ereditati da Text
    public:
        explicit Text_To_Shape_Adapter(Text& text);
        explicit Text_To_Shape_Adapter(std::string text="Text Class Adapter",unsigned int size=10,std::string font_type="Calibri");
        ~Text_To_Shape_Adapter();
        void resize(int percentage) override;
        void what_am_i() override;
};