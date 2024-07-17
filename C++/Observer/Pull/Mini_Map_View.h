#pragma once
#include"Observer.h"
#include"Display.h"
#include"Subject.h"
#include"Game_Character.h"
class Mini_Map_View:public Observer,public Display{
    private:
        int x,y;
        Subject* subject;
    public:
        explicit Mini_Map_View(Game_Character* gc,int x=0,int y=0);
        explicit Mini_Map_View(Mini_Map_View& other)=delete;
        ~Mini_Map_View();
        void update() override;
        void attach() override;
        void detach() override;
        void draw() override;
        Subject* get_subject();
        int get_x();
        int get_y();
};