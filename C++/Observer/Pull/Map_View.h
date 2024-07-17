#pragma once
#include<iostream>
#include"Observer.h"
#include"Subject.h"
#include"Game_Character.h"
#include"Display.h"
class Map_View:public Observer,public Display{
    private:
        int x,y;
        Subject* subject;
    public:
        explicit Map_View(Game_Character* gc,int x=0,int y=0);
        explicit Map_View(Map_View& other)=delete;
        ~Map_View();
        void update() override;
        void attach() override;
        void detach() override;
        void draw() override;
        Subject* get_subject();
        int get_x();
        int get_y();
};