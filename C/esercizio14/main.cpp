#include <iostream>
#include <vector>
#include "matrix.h"
int main()
{
    Matrix<int> x (2,2,0,"x");
    Matrix<int> y(x,"y"); //COSTRUTTORE DI COPIA   
    x.set(1,1,1);
    x.print();
    y.print();
    y.set_all(4);
    y.print();
    Matrix<float> z (2,2);
    return 0;
}
