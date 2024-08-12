#pragma once
#include<iostream>
#include<vector>
#include<exception>
template<typename T>
class Matrix{
    private:
        std::vector<std::vector<T>> matrix;
        int rows,cols;
    public:
        Matrix(int rows,int cols,T default_value):rows{rows},cols{cols},matrix(rows, std::vector<T>(cols,default_value)){}
        Matrix(Matrix& other):matrix{other.matrix},rows{other.rows},cols{other.cols}{}
        ~Matrix(){}
        Matrix<T>& operator=(Matrix<T>& other){
            if(this!=&other){
                this->rows=other.rows;
                this->cols=other.cols;
                this->matrix=other.matrix;
            }
            return *this;
        }
        void set(int row,int col,T value){
            if(row>=this->rows||col>=this->cols){
                throw std::runtime_error("Index out of range");
            }
            matrix[row][col]=value;
        }
        T get(int row,int col){
            if(row>=this->rows||col>=this->cols){
                throw std::runtime_error("Index out of range");
            }
            return matrix[row][col];
        }
        void print(){
            std::cout<<"Matrix:"<<std::endl;
            for(int x=0;x<rows;x++){
                for(int y=0;y<cols;y++){
                    std::cout<<"["<<matrix[x][y]<<"]";
                }
                std::cout<<std::endl;
            }
        }
};