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
    system.add_table("Da Pippo",1,20);
    if(system.check_table("Da Pippo",1,1,1,1,1,1)==true)
        std::cout<<"Tavolo disponibile!"<<std::endl;
    Costumer pippo("Pippo","3333333");
    system.add_reservation("Da Pippo",pippo,1,1,1,1,1,1,1);
    if(system.check_table("Da Pippo",1,1,1,1,1,1)==false)
        std::cout<<"Tavolo non disponibile o prenotato!"<<std::endl;
    system.print_restaurants();
}