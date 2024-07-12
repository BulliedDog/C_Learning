#include<iostream>
#include<memory>
#include<vector>
#include"Shape.h"
#include"Shape.cpp"
#include"Square.h"
#include"Square.cpp"
#include"Text.h"
#include"Text.cpp"
#include"Text_To_Shape_Adapter.h"
#include"Text_To_Shape_Adapter.cpp"
int main(){
    std::vector<std::unique_ptr<Shape>> vector;
    vector.insert(vector.end(), std::make_unique<Shape>(/*creo uno shape di default*/));
    vector.push_back(std::make_unique<Square>(/*default square*/));
    //creo un testo a caso e uso il costruttore di Text_to_Shape_Adapter(Text& text) passandolo per riferimento, tanto richiama il costruttore di Text specifico
    std::unique_ptr<Text_To_Shape_Adapter> adapted_text_ptr();

    return 0;
}