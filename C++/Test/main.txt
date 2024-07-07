#include <iostream>
#include "pippo.h"
//definitions//
Pippo::Pippo(std::string nome, std::string cognome, int età):nome{nome}, cognome{cognome}, età{età}{
    //sono un costruttore overloadato semplice con valori di default che non fa un cazzo se non cambiare il contenuto degli attributesss//
};
//essendo che i valori di default vengono assegnati a tutti i parametri, il costruttore di default non viene sovrascritto//
Pippo::~Pippo(){};
//code//
int main()
{
    Pippo x;
    Pippo * y = new Pippo("ciao");
    Pippo z("Sberto","AlbertinoPaneEVino",199);
    std::cout<<"Hello World"<<std::endl;
    x.infinite_pippo();
    y->infinite_pippo();    
    z.infinite_pippo();
    x.~Pippo();
    delete y; //delete perche' puntatore
    z.~Pippo();
    return 0;
}
