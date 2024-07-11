#pragma once
#include<iostream>
#include<string>
#include"Shape.h"
#include"Shape.cpp"
#include"Text.h"
#include"Text.cpp"
/**
 * @brief Classe Adapter
 * @interface Shape viene eridata pubblicamente, essendo il target, per effettuare l'override del metodo resize
 * @interface Text viene ereditata privatamente, essendo l'adaptee, per effettuare il metodo Text::change_size()
 * nell'override di Shape::resize()
 */
class Text_To_Shape_Adapter:public Shape::Shape,private Text::Text{
    private:

    public:
        explicit Text_To_Shape_Adapter(Text& text);
        explicit Text_To_Shape_Adapter(std::string text="Text",unsigned int size,std::string font_type="Calibri");
        virtual ~Text_To_Shape_Adapter();
        void resize(int percentage) override;
        void what_am_i() override;
};