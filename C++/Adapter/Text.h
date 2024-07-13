#pragma once
#include<iostream>
#include<string>
/**
 * @brief Classe Adaptee!
 */
class Text{
    private:
        std::string text;
        unsigned int size;
        std::string font_type;
    public:
        explicit Text(std::string text="Text",unsigned int size=10,std::string font_type="Calibri");
        Text(Text& other);
        virtual ~Text();
        virtual void print();
        ///@brief Questo è il metodo che deve essere adattato al target Shape, in Shape si chiama resize()
        void change_size(int percentage);
        //G&S//
        std::string get_text();
        void set_text(std::string text);
        unsigned int get_size();
        void set_size(unsigned int size);
        std::string get_font_type();
        void set_font_type(std::string font_type);
};