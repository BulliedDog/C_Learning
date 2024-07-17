#pragma once
#include"Observer.h"
class Subject{
    public:
        virtual ~Subject(){}
        virtual void subscribe(Observer* o)=0; //aggiunge alla lista observers, chiamato da attach()
        virtual void unsubscribe(Observer* o)=0; //disgiunge dalla lista observers, chiamato da detach()
        virtual void notify()=0; //chiama il metodo update() per tutti gli observer nella lista
};