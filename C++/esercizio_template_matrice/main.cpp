#include<iostream>
#include"matrix.h"
#include<memory>
int main(){
    Matrix<int> A(3,3,0);
    std::unique_ptr<Matrix<float>> B=std::make_unique<Matrix<float>>(3,3,1);
    A.set(0,0,5);
    B->set(2,2,7.34);
    A.print();
    B->print();
}