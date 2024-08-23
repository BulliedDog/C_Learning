#pragma once
#include<vector>
#include<iostream>
template<typename T>
class Matrix{
    private:
        int rows,cols;
        std::vector<std::vector<T>> matrix;
    public:
        Matrix(int rows,int cols,T default_value):rows{rows},cols{cols},matrix(rows,std::vector<T>(cols,default_value)){

        }
        Matrix(Matrix& other):rows{other.get_rows()},cols{other.get_cols()},matrix{other.get_matrix()}{

        }
        ~Matrix()=default;
        Matrix& operator= (Matrix& right){
            this->rows=right.get_rows();
            this->cols=right.get_cols();
            this->matrix=right.get_matrix();
        }
        void print(){
            std::cout<<"Matrix:"<<std::endl;
            for(int x=0;x<this->rows;x++){
                for(int y=0;y<this->cols;y++)
                    std::cout<<"["<<this->matrix[x][y]<<"]";
                std::cout<<std::endl;
            }
        }
        int get_rows()const{return rows;}
        int get_cols()const{return cols;}
        auto get_matrix()const{return matrix;}
        void set_value(int row,int col,T value){
            if(row>=rows||col>=cols)
                throw std::runtime_error("Coordinates out of bounds!");
            this->matrix[row][col]=value;
            std::cout<<"new value!("<<row<<","<<col<<")="<<value<<std::endl;
        }
        T get_value(int row,int col)const{
            std::cout<<"Getting value ("<<row<<","<<col<<")="<<matrix[row][col]<<std::endl;
            return this->matrix[row][col];
        }
};