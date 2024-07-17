#pragma once
#include<iostream>
#include<string>
class Attivita{
    private:
        int calorie;
        std::string nome;
        float durata; //in ore
    public:
        Attivita(int calorie,std::string nome,float durata):calorie{calorie},nome{nome},durata{durata}{

        }
        int get_calorie(){return calorie;}
        std::string get_nome(){return nome;}
        float get_durata(){return durata;}

};