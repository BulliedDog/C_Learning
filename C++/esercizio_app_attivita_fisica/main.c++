#include<iostream>
#include<string>
#include<list>
#include"attivita.h"
#include"app.h"
int main(){
    App app;
    Attivita a1(20,"corsa",3);
    Attivita a2(45,"nuoto",2.3);
    Attivita a3(190,"caccotty",78);
    app.add_attivita(&a1);
    app.add_attivita(&a2);
    app.add_attivita(&a3);
    app.add_ore_in_piedi(57);
    app.add_ore_in_piedi(33.3);
    app.print();
    app.remove_attivita(&a3);
    app.print();
    return 0;
}