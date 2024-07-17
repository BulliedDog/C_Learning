#pragma once
class Observer{
    public:
        virtual ~Observer(){}
        virtual void update()=0; //aggiorna i valori, chiamato da notify()
        virtual void attach()=0; //attacca alla lista di observers in subject
        virtual void detach()=0; //stacca dalla lista di observers in subject
};