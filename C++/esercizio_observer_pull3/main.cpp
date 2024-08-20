#include<iostream>
#include<memory>
#include<list>
#include"concrete_subject.h"
#include"concrete_observer.h"
int main(){
    Concrete_subject subject("Alberto");
    subject.subscribe(new Concrete_observer(&subject));
    Concrete_observer observer(&subject);
    observer.attach();
    subject.print();
    subject.print_observers();
    subject.set_name("ALBERTOOOOOOOO!");
    subject.print();
    subject.print_observers();
    return 0;
}