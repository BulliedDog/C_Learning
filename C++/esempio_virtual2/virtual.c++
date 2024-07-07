#include<iostream>
#include"shape.h"
#include"square.h"
#include"circle.h"
#include<vector>
/*se shape non avesse il metodo what_am_i virtuale, non ci sarebbe alcun late binding che permette
al compilatore di runnare il metodo giusto ovvero quello della classe al quale il puntatore di
tipo base punta, altrimenti verrebbe effettuato il what_am_i della classe base per lo static
binding fatto in automatico dal compilatore che vede soltanto il metodo della classe base
poiché il puntatore è di tipo classe base. Rendendo quindi i metodi virtuali si crea una table
di puntatori effettivi agli oggetti istanziati che effettuano l'override del metodo della classe
base. Non è molto efficiente questo metodo. L'overloading non di metodi ereditati in classi derivate
non esiste e piuttosto si ottiene il name hiding dove il metodo della classe base non viene più
visto, ciò avviene perché si evita di effettuare un overloading con gerarchie lunghe. Per effettuare
l'overloading del metodo della classe base si utilizza "using Base::nome_funzione" nel public della
classe derivata, così facendo si rende visibile alla classe il metodo con stesso nome ma diversi
attributi.*/
int main(){
    std::vector<Shape *> vettore;
    /*oppure
    vettore.push_back(new Square(1));
    vettore.push_back(new Circle(1));
    */
    vettore.insert(vettore.end(), new Square(1));
    vettore.insert(vettore.end(), new Circle(1));
    vettore[0]->what_am_i();
    vettore[1]->what_am_i();
    //vettore[0]->foo("Prova sbagliata"); sbagliata perché non vi è late binding sul metodo overloadato
    vettore[0]->foo();
    Square* s=dynamic_cast<Square*>(vettore[0]);
    s->foo("Prova giusta"); //con il dynamic_cast invece tutto ok!
    /*adesso devo liberare la memoria poichè sto usando dei puntatori a classe base: dato che
    comunque puntano a oggetti di classi di tipo derivato, devo effettuare il delete virtuale
    altrimenti si avrebbero dei memory leaks poiché la memoria dei membri della classe derivata
    non sarebbe pulita!*/
    for(int x=0;x<vettore.size();x++)
        delete vettore[x];
        
}
