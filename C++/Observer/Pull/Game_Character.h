#pragma once
#include<iostream>
#include<list>
#include"Subject.h"
#include"Observer.h"
class Game_Character:public Subject{
    private:
        int posx,posy;
        std::list<Observer*> observers;
    public:
        Game_Character(int x=0,int y=0);
        Game_Character(Game_Character& other);
        ~Game_Character();
        void subscribe(Observer* o) override;
        void unsubscribe(Observer* o) override;
        void notify() override;
        void move(int x, int y);
}