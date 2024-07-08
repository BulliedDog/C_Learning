#include<iostream>
#include<list>
#include<map>
#include<vector>
#include"character.h"
int main(){
    std::list<std::map<int, Character<std::string>*>> lista;
    std::map<int, Character<std::string>*> map1;
    map1[0]=new Character<std::string>("Romeo", 27);
    map1[1]=new Character<std::string>("Martina", 19);
    map1[2]=new Character<std::string>("Lorenzo", 17);
    lista.insert(lista.end(), map1);
    std::map<int, Character<std::string>*> map2={{0,new Character<std::string>("Giulia",22)},{1,new Character<std::string>("Cavallo",44)},{2,new Character<std::string>("Giuliano",57)}};
    lista.insert(lista.end(), map2);
    //devo ciclare sia nelle lista sia in ciascuna map
    //C++03
    int count=0;
    std::cout<<"Stampa lista C++03"<<std::endl;
    for(std::list<std::map<int, Character<std::string>*>>::const_iterator it=lista.begin();it!=lista.end();it++){
        count++;
        std::cout<<"mappa "<<count<<":"<<std::endl;
        for(std::map<int, Character<std::string>*>::const_iterator it2=(*it).begin();it2!=(*it).end();it2++)
            std::cout<<"["<<it2->first<<"]"<<"["<<it2->second->get_name()<<","<<it2->second->get_age()<<"]"<<std::endl;
    }
    //C++11
    count=0;
    std::cout<<"Stampa lista C++11"<<std::endl;
    for(auto it=lista.begin();it!=lista.end();it++){
        count++;
        std::cout<<"mappa "<<count<<std::endl;
        for(auto it2=(*it).begin();it2!=(*it).end();it2++)
            std::cout<<"["<<it2->first<<"]"<<"["<<it2->second->get_name()<<","<<it2->second->get_age()<<"]"<<std::endl;
    }
    
    return 0;
}