#pragma once
#include<string>
#include"Table.h"
#include"Reservation.h"
#include<memory>
#include<list>
#include<map>
class Restaurant{
    private:
        std::string nome;
        std::string indirizzo;
        std::list<std::unique_ptr<Reservation>> prenotazioni; //sposto la lista delle prenotazioni nella classe restaurant, ogni ristorante ha le proprie prenotazioni insieme ai propri table
        std::map<int,std::shared_ptr<Table>> tavoli;
    public:
        Restaurant(std::string nome,std::string indirizzo);
        ~Restaurant();
        void add_table(int numero,int capacità);
        void remove_table(int numero);
        std::string get_nome() const;
        void set_nome(const std::string& nome);
        std::string get_indirizzo() const;
        void set_indirizzo(const std::string& indirizzo);
        std::list<std::unique_ptr<Reservation>>& get_prenotazioni();
        const std::map<int, std::shared_ptr<Table>>& get_tavoli() const;
};