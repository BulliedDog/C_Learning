#include<iostream>

class Data
{
    private:
        std::size_t anno,mese,giorno,ora,minuto,secondo;
    public:
        Data() = delete; //COSTRUTTORE DI DEFAULT DISABILITATO
        Data(std::size_t anno=1990, std::size_t mese=1, std::size_t giorno=1, std::size_t ora=0, std::size_t minuto=0, std::size_t secondo=0) : anno{anno}, mese{mese}, giorno{giorno}, ora{ora}, minuto{minuto}, secondo{secondo}{}
        ~Data(){};
        std::size_t get(int x){
            switch (x)
            {
            case 1:
                return anno;
                break;
            case 2:
                return mese;
                break;
            case 3:
                return giorno;
                break;
            case 4:
                return ora;
                break;
            case 5:
                return minuto;
                break;
            case 6:
                return secondo;
                break;
            }
        }
};

