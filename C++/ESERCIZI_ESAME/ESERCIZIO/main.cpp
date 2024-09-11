#include<iostream>
#include"matrix.h"
int main(){
    Matrix matrix(3,3,0);
    try{
        matrix.set_value(0,-3,6);
    }
    catch(std::runtime_error& e){
        std::cerr<<e.what()<<std::endl;
    }
    try{
        matrix.set_value(0,3,6);
    }
    catch(std::runtime_error& e){
        std::cerr<<e.what()<<std::endl;
    }
    return 0;
}