#include<iostream>
#include<>
#include"Observer.h"
class Map_View:public Observer{
    private:
        int x,y;
    public:
        explicit Map_View(int x=0,int y=0);
        explicit Map_View(Map_View& other);
        ~Map_View();
}