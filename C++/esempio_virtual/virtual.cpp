#include<iostream>
#include"fly.h"
#include"helicopter.h"
#include"fly.cpp"
#include"helicopter.cpp"
int main()
{
    int x=10;
    Fly fly(1.21321,2);
    Fly* ptr=&fly;
    ptr->turn_off();
    Helicopter hl;
    ptr=&hl;
    ptr->turn_off();
    return 0;
}
