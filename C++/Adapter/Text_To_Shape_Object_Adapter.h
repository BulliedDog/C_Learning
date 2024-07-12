#pragma once
#include<iostream>
#include<string>
#include<memory>
#include"Shape.h"
#include"Text.h"
/**
 *  @brief Questa classe serve ad adattare l'adaptee Text alla classe target ovvero Shape utilizzando un puntatore ad oggetto di tipo
 *  Text così da evitare l'ereditarietà multipla. In questo caso il codice ha maggiore libertà essendo che anche un'oggetto derivato 
 *  da Text può comportarsi come un Text se segue il principio di sostituzione di Liskov.
 */
class Text_To_Shape_Object_Adapter:public Shape{ //eredita soltanto shape così da preservare il polimorfismo overridando Shape::resize()
    private:
        std::unique_ptr<Text> text;
    public:
        Text_To_Shape_Object_Adapter(std::unique_ptr<Text> text);
        Text_To_Shape_Object_Adapter(std::string text="Text",unsigned int size,std::string font_type="Calibri");
        ~Text_To_Shape_Object_Adapter();
        void resize(int percentage) override;
};