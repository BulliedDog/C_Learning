#include<iostream>
#include"data.h"
class File
{
    private:
        Data creazione;
        Data modifica;
        Data ultimo;
    public:
        File(Data creazione):creazione{creazione}, modifica{creazione}, ultimo{creazione}{};
        ~File(){};
        bool operator <= (const Data & right){
            if(creazione.get(1) < right.anno) return true;
            if(creazione.get(1) > right.anno) return false;
            if(creazione.get(2) < right.mese) return true;
            if(creazione.get(2) > right.mese) return false;
            if(creazione.get(3) < right.giorno) return true;
            if(creazione.get(3) > right.giorno) return false;
            if(creazione.get(4) < right.ora) return true;
            if(creazione.get(4) > right.ora) return false;
            if(creazione.get(5) < right.minuto) return true;
            if(creazione.get(5) > right.minuto) return false;
            if(creazione.get(6) <= right.secondo) return true;
            else return false;
        }
};