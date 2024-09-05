#include<iostream>
#include<list>
#include"subject.h"
#include"observer.h"
#include"c_observer.h"
#include"c_subject.h"
int main(){
    C_subject alberto("Alberto");
    C_observer obs1(&alberto);
    C_observer obs2(&alberto);
    C_observer obs3(&alberto);
    alberto.set_name("Boh");
    return 0;
}