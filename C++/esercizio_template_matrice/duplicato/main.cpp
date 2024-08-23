#include<iostream>
#include"matrix.h"
int main(){
    Matrix<int> matrix(3,3,0);
    matrix.print();
    matrix.set_value(0,0,12);
    matrix.set_value(2,2,5);
    matrix.get_value(0,0);
    matrix.print();
    return 0;
}