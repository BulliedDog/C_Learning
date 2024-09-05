#pragma once
#include<memory>
#include"Costumer.h"
#include"Table.h"
class Reservation{
    private:
        Costumer costumer;
        int table;
        int giorno;
        int mese;
        int anno;
        int ora;
        int minuto;
        int ospiti;
    public:
        Reservation(Costumer costumer,int table,int giorno,int mese,int anno, int ora, int minuto,int ospiti);
        ~Reservation();
         int get_giorno() const;
        void set_giorno(int giorno);
        int get_mese() const;
        void set_mese(int mese);
        int get_anno() const;
        void set_anno(int anno);
        int get_ora() const;
        void set_ora(int ora);
        int get_minuto() const;
        void set_minuto(int minuto);
        int get_ospiti() const;
        void set_ospiti(int ospiti);
        const Costumer& get_costumer(){return costumer;}
        const int get_table(){return table;};
};