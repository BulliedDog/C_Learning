#include<iostream>
#include<vector>
template<typename T=int> //TEMPLATE FOR TYPE OF VARIABLE CONTAINED IN THE BIDIMENTIONAL ARRAY//
class Matrix{
private:
    std::string nome;
    int rows;
    int cols;
    std::vector<std::vector<T>> matrix;
public:
    Matrix(int rows, int cols, T init=0, std::string nome="") : rows{rows}, cols{cols}, matrix(rows, std::vector<T>(cols, init)), nome{nome}{};
    Matrix(const Matrix<T> & copy, std::string nome="") : rows{copy.rows}, cols{copy.cols}, matrix{copy.matrix}, nome{nome}{};
    //NON E' NECESSARIO EFFETTUARE IL DEEP COPY SPECIALMENTE PER IL FATTO CHE IL VETTORE STESSO VIENE COPIATO E NON E' SOLO UN POINTER//
    Matrix<T> & operator = (const Matrix<T> & right){
        rows = right.rows;
        cols = right.cols;
        matrix = right.matrix;
        return * this;
    }
    ~Matrix(){};
    //GETTER & SETTER//
    T get(int row, int col){
        return matrix[row][col];
    }
    void set(int row, int col, T value){
        matrix[row][col]=value;
    }
    void print(){
        std::cout<<"matrice "<<nome<<std::endl;
        for (std::size_t x = 0; x < rows; x++){
            for (std::size_t y = 0; y < cols; y++){
                std::cout<<"["<<matrix[x][y]<<"]";
            }
            std::cout<<std::endl;
        }
    }
    void set_all(T value){
        for (std::size_t x = 0; x < rows; x++){
            for (std::size_t y = 0; y < cols; y++){
                matrix[x][y]=value;
            }
        }
    }
};
