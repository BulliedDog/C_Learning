#pragma once
#include<vector>
#include"Restaurant.h"
#include<iostream>
class Reservation_system{
    private:
        std::vector<std::unique_ptr<Restaurant>> ristoranti;
    public:
        void add_restaurant(std::string nome,std::string indirizzo){
            this->ristoranti.push_back(std::make_unique<Restaurant>(nome,indirizzo));
        }
        void remove_restaurant(std::string nome){
            for(auto it=ristoranti.begin();it!=ristoranti.end();it++){
                if((*it)->get_nome()==nome)
                    ristoranti.erase(it);
            }
        }
        void add_reservation(std::string nome_ristorante,Costumer costumer,int numero_tavolo,int giorno,int mese,int anno,int ora,int minuto,int ospiti){
            for(auto& ristorante:ristoranti){
                if(ristorante->get_nome()==nome_ristorante){
                    for(auto tavolo:ristorante->get_tavoli()){
                        if(tavolo.first==numero_tavolo){
                            ristorante->get_prenotazioni().push_back(std::make_unique<Reservation>(costumer,tavolo.second->get_numero(),giorno,mese,anno,ora,minuto,ospiti));
                        }
                    }
                }
            }
        }
        void remove_reservation(std::string nome_ristorante,std::string nome_costumer){
            for(auto& ristorante:ristoranti){
                if(ristorante->get_nome()==nome_ristorante){
                    for(auto& prenotazione:ristorante->get_prenotazioni())
                        if(prenotazione->get_costumer().get_nome()==nome_costumer)
                            ristorante->get_prenotazioni().remove(prenotazione);
                }
            }
        }
        bool check_table(std::string nome_ristorante,int ospiti,int anno,int mese,int giorno,int ora,int minuto){
            for(auto& ristorante:ristoranti){
                if(ristorante->get_nome()==nome_ristorante){
                    for(auto& tavolo:ristorante->get_tavoli()){
                        if(tavolo.second->get_capacità()>=ospiti){
                            for(auto& prenotazione:ristorante->get_prenotazioni()){
                                if(prenotazione->get_table()==tavolo.second->get_numero()&&prenotazione->get_anno()==anno&&prenotazione->get_mese()==mese&&prenotazione->get_giorno()==giorno&&prenotazione->get_ora()==ora&&prenotazione->get_minuto()==minuto)
                                    return false;
                            }
                            return true;
                        }
                    }
                }
            }
            return false;;
        }
        void add_table(std::string nome_ristorante,int numero,int capacità){
            for(auto& ristorante:ristoranti){
                if(ristorante->get_nome()==nome_ristorante){
                    ristorante->add_table(numero,capacità);
                }
            }
        }
        void remove_table(std::string nome_ristorante,int numero){
            for(auto& ristorante:ristoranti){
                if(ristorante->get_nome()==nome_ristorante){
                    ristorante->remove_table(numero);
                }
            }
        }
        void print_restaurants(){
            for(auto it=ristoranti.begin();it!=ristoranti.end();it++){
                std::cout<<(*it)->get_nome()<<std::endl;
            }
        }
};