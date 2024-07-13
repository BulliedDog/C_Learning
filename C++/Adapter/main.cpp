#include<iostream>
#include<memory>
#include<vector>
#include"Shape.h"
#include"Square.h"
#include"Text.h"
#include"Text_To_Shape_Adapter.h"
#include"Text_To_Shape_Object_Adapter.h"
#include"Shape.cpp"
#include"Square.cpp"
#include"Text.cpp"
#include"Text_To_Shape_Adapter.cpp"
#include"Text_To_Shape_Object_Adapter.cpp"
int main(){
    std::vector<std::unique_ptr<Shape>> vector;
    vector.insert(vector.end(), std::make_unique<Shape>(/*creo uno shape di default*/));
    vector.push_back(std::make_unique<Square>(/*square di default*/));
    //creo un testo a caso e uso il costruttore di Text_to_Shape_Adapter(Text& text) passandolo per riferimento, tanto richiama il costruttore di Text specifico
    Text t("Prova Class Adapter", 20);
    std::unique_ptr<Text_To_Shape_Adapter> adapted_text_ptr(new Text_To_Shape_Adapter(t));
    vector.insert(vector.end(),std::move(adapted_text_ptr)); //devo usare std::move perché lo smart pointer è di tipo unique
    vector.push_back(std::make_unique<Text_To_Shape_Object_Adapter>("Prova Object Adapter",30));
    Text_To_Shape_Adapter t2; //costruisco oggetto class adapter di default
    std::unique_ptr<Text_To_Shape_Adapter> adapted_text2_ptr=std::make_unique<Text_To_Shape_Adapter>(t2);
    vector.insert(vector.end(),std::move(adapted_text2_ptr));
    Text ot("Altra prova object adapter");
    vector.push_back(std::make_unique<Text_To_Shape_Object_Adapter>(ot));
    std::unique_ptr<Text_To_Shape_Object_Adapter>object_adapted_text(new Text_To_Shape_Object_Adapter("Ulteriore esempio di testo object adapted",78,"Comic Sans"));
    vector.insert(vector.begin(),std::move(object_adapted_text));
    std::cout<<"Prima iterazione con iteratori puntatori"<<std::endl;
    for(std::vector<std::unique_ptr<Shape>>::iterator it=vector.begin();it!=vector.end();it++){
        (*it)->what_am_i();
    }
    std::cout<<std::endl<<"Seconda iterazione con iteratori puntatori ma con auto per la tipizzazione"<<std::endl;
    for(auto it=vector.begin();it!=vector.end();it++){
        (*it)->resize(20);
        (*it)->what_am_i();
    }
    std::cout<<std::endl<<"Terza iterazione con uso del range_for (c++11) sempre con auto ma a riferimento, questo restituisce un oggetto del vector e non un puntatore!"<<std::endl;
    for(auto& it:vector){
        it->resize(-20);
        it->what_am_i();
    }
    return 0;
}