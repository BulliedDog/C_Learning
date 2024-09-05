#include<iostream>
#include"character.h"
#include"subject.h"
#include"observer.h"
#include"mirror.h"
int main(){
    Character character("Alberto");
    Mirror m1(&character);
    Mirror m2(&character);
    Mirror m3(&character);
    Mirror m4(&character);
    Mirror m5(&character);
    character.set_name("James");
    return 0;
}