#pragma once
#include"observer.h"
#include"character.h"
class Window:public Observer{
    private:
        int x,y;
        Character* subject;
    public:
        Window(Character* subject):x{subject->get_x()},y{subject->get_y()},subject{subject}{}
        Window(Window& other):x{other.x},y{other.y},subject{other.subject}{}
        ~Window(){
            this->detatch();
        }
        void attach(){
            subject->subscribe(this);
        }
        void detatch(){
            subject->unsubscribe(this);
        }
        void update(){
            x=subject->get_x();
            y=subject->get_y();
        }
        int get_x() const{return x;}
        int get_y() const{return y;}
        void set_x(){this->x=x;}
        void set_u(){this->y=y;}
};