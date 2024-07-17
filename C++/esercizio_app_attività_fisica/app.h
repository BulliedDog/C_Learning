#pragma once
#include<iostream>
#include<list>
#include"attivita.h"
class App{
    private:
        float totale_ore_in_piedi;
        int totale_calorie;
        std::list<Attivita*> attivita;
    public:
        App(float totale_ore_in_piedi=0,int totale_calorie=0):totale_ore_in_piedi{totale_ore_in_piedi},totale_calorie{totale_calorie}{
            
        }
        App(App& app)=delete;
        ~App(){
            
        }
        void add_attivita(Attivita* a){
            this->totale_calorie+=a->get_calorie();
            this->attivita.push_back(a);
        }
        void remove_attivita(Attivita* a){
            this->totale_calorie-=a->get_calorie();
            this->attivita.remove(a);
        }
        void add_ore_in_piedi(float ore_in_piedi){
            this->totale_ore_in_piedi+=ore_in_piedi;
        }
        void stampa_attivita(){
            for(auto att:attivita){
                std::cout<<att->get_nome()<<", ";
            }
            std::cout<<std::endl;
        }
        void print(){
            std::cout<<"Stato attuale:"<<std::endl;
            std::cout<<"Ore in piedi: "<<this->totale_ore_in_piedi<<std::endl;
            std::cout<<"Calorie: "<<this->totale_calorie<<std::endl;
            //this->stampa_attivita();
        }
};