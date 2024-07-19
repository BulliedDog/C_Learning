#include"Costumer.cpp"
#include"Costumer.h"
#include"Reservation.cpp"
#include"Reservation.h"
#include"Reservation_system.h"
#include"Restaurant.cpp"
#include"Restaurant.h"
#include"Table.cpp"
#include"Table.h"
#include<iostream>
int main(){
    Reservation_system system;
    system.add_restaurant("Da Pippo","Via roma");
    system.add_restaurant("Da Rodolfo","Via boh");
    system.add_table("Da Pippo",1,20); //nome ristorante, numero tavolo, disponibilità tavolo
    Costumer pippo("Pippo","3333333"); //nome, numero telefono
        if(system.check_table("Da Pippo",1,1,1,1,1,1)==true) //nome ristorante, ospiti, giorno, mese, giorno, ora, minuto
        std::cout<<"Tavolo disponibile!"<<std::endl;
        system.add_reservation("Da Pippo",pippo,1,1,1,1,1,1,1); //nome ristorante, costumer, giorno, mese, giorno, ora, minuto, ospiti
    if(system.check_table("Da Pippo",1,1,1,1,1,1)==false)
        std::cout<<"Tavolo non disponibile o prenotato!"<<std::endl;
    system.print_restaurants();
}