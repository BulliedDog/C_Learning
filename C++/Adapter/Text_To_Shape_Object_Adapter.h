#pragma once
#include<iostream>
#include<string>
#include<memory>
#include"Shape.h"
#include"Shape.cpp"
#include"Text.h"
#include"Text.cpp"
/**
 *  @brief Questa classe serve ad adattare l'adaptee Text alla classe target ovvero Shape utilizzando un puntatore ad oggetto di tipo
 *  Text così da evitare l'ereditarietà multipla. In questo caso il codice ha maggiore libertà essendo che anche un'oggetto derivato 
 *  da Text può comportarsi come un Text se segue il principio di sostituzione di Liskov.
 */
class Text_To_Shape_Object_Adapter:public Shape{ //eredita soltanto shape così da preservare il polimorfismo overridando Shape::resize()
    private:
        std::unique_ptr<Text> text;
    public:
        Text_To_Shape_Object_Adapter(Text& text);
        Text_To_Shape_Object_Adapter(std::string text="Text Object Adapter",unsigned int size=10,std::string font_type="Calibri");
        ~Text_To_Shape_Object_Adapter();
        void resize(int percentage) override;
        void what_am_i() override;
};