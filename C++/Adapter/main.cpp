#include<iostream>
#include<memory>
#include<vector>
#include"Shape.h"
#include"Shape.cpp"
#include"Text.h"
#include"Text.cpp"
#include"Text_To_Shape_Adapter.h"
#include"Text_To_Shape_Adapter.cpp"
int main(){
    std::vector<std::unique_ptr<Shape>> vector;
    vector.insert(vector.end(), std::make_unique<Shape>(/*creo uno shape di default*/));
    std::unique_ptr<Text_To_Shape_Adapter> adapted_text_ptr();
    return 0;
}