#include<iostream>
#include<memory>
#include<vector>
#include"plane.h"
#include"plane.cpp"
int main(){
    Plane x;
    std::vector<std::unique_ptr<Plane>> vector;
    //popolo il vector usando il costruttore del std::unique_ptr<T> ptr(formal_parameter_list)
    std::unique_ptr<Plane> ptr(new Plane("Dodo","Cesna"));
    vector.push_back(std::move(ptr)); //devo usare move per passare il possesso, essendo il puntatore unico non può essere copiato, servirebbe uno shared pointer quindi
    //oppure lo popolo con la funzione std::make_unique() e conviene pure rendendo un unico puntatore nel vector ad ogni posizione
    vector.push_back(std::make_unique<Plane>("F24","Fighter Jet"));
    vector.push_back(std::make_unique<Plane>("Skeleton","Shitty Airlines"));
    vector.push_back(std::make_unique<Plane>("Fire Plane","Lit Engines Ltd."));
    /*for(std::vector<std::unique_ptr<Plane>>::iterator it=vector.begin();it!=vector.end();it++){}*/ //iterator senza auto
    /*for(auto it=vector.begin();it!=vector.end();it++){}*/ //iterator con auto
    for(auto& ptr:vector){
        ptr->what();
    }
    return 0;
}