#pragma once
#include<vector>
#include<exception>
template<typename T>
class Matrix{
    private:
        int rows,cols;
        std::vector<std::vector<T>> matrix;
    public:
        Matrix(int rows,int cols,T def=0):rows(rows),cols(cols),matrix(rows,std::vector<T>(cols,def)){

        }
        Matrix(const Matrix& other):rows(other.get_rows()),cols(other.get_cols()),matrix(other.get_matrix()){

        }
        ~Matrix()=default;
        Matrix& operator = (const Matrix& right){
            this->rows=right.get_rows();
            this->cols=right.get_cols();
            this->matrix=right.get_matrix();
        }
        void set_value(int x,int y,T value){
            if(x<0||y<0||x>=rows||y>=cols)
                throw std::runtime_error("Parametri fuori range");
            this->matrix[x][y]=value;
        }
        T get_value(int x,int y,T value){
            if(x<0||y<0||x>=rows||y>=cols)
                throw std::runtime_error("Parametri fuori range");
            return this->matrix[x][y];
        }
        int get_cols() const{return cols;}
        void set_cols(const int cols){this->cols=cols;}
        int get_rows() const{return rows;}
        void set_rows(const int rows){this->rows=rows;}
        std::vector<std::vector<T>> get_matrix() const{return matrix;}
        void set_matrix(const std::vector<std::vector<T>> matrix){this->matrix=matrix;}
};