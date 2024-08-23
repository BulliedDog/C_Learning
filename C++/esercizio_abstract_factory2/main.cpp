#include<iostream>
#include"abstract_factory.h"
#include"antique_chair.h"
#include"chair.h"
#include"couch.h"
#include"modern_chair.h"
#include"modern_factory.h"
#include"antique_factory.h"
int main(){
    Antique_factory af;
    Modern_factory mf;
    std::unique_ptr<Chair> chair=af.create_chair();
    std::unique_ptr<Couch> couch=af.create_couch();
    chair->sit_on();
    couch->lay_on();
    chair=mf.create_chair();
    couch=mf.create_couch();
    chair->sit_on();
    couch->lay_on();
    return 0;
}