#include<iostream>
#include"c_subject.h"
#include"c_observer.h"
#include"subject.h"
#include"observer.h"
int main(){
    C_subject subject;
    C_observer observer1(&subject);
    C_observer observer2(&subject);
    C_observer observer3(&subject);
    subject.print();
    subject.print_observers();
    subject.set_name("Alby");
    subject.print();
    subject.print_observers();
    return 0;
}