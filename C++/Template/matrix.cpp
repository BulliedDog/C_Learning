#include <iostream>
#include <vector>

template<typename T>
class Matrix {
public:
    // Costruttore che prende dimensioni e valore di default
    Matrix(size_t rows, size_t cols, T defaultValue = T()) : rows_(rows), cols_(cols), data_(rows, std::vector<T>(cols, defaultValue)) {}

    // Costruttore per copia
    Matrix(const Matrix<T>& other) : rows_(other.rows_), cols_(other.cols_), data_(other.data_) {}

    // Operatore di assegnazione
    Matrix<T>& operator=(const Matrix<T>& other) {
        if (this != &other) {
            rows_ = other.rows_;
            cols_ = other.cols_;
            data_ = other.data_;
        }
        return *this;
    }

    // Metodo per impostare un valore a coordinate specifiche
    void set(size_t row, size_t col, const T& value) {
        if (row < rows_ && col < cols_) {
            data_[row][col] = value;
        } else {
            throw std::out_of_range("Indice fuori dai limiti");
        }
    }

    // Metodo per leggere un valore a coordinate specifiche
    T get(size_t row, size_t col) const {
        if (row < rows_ && col < cols_) {
            return data_[row][col];
        } else {
            throw std::out_of_range("Indice fuori dai limiti");
        }
    }

    // Metodo per ottenere il numero di righe
    size_t rows() const {
        return rows_;
    }

    // Metodo per ottenere il numero di colonne
    size_t cols() const {
        return cols_;
    }

private:
    size_t rows_, cols_;
    std::vector<std::vector<T>> data_;
};

int main() {
    // Creazione di una matrice 3x3 con valore di default 0
    Matrix<int> mat(3, 3, 0);

    // Impostare alcuni valori
    mat.set(0, 0, 1);
    mat.set(1, 1, 2);
    mat.set(2, 2, 3);

    // Leggere e stampare alcuni valori
    std::cout << "Valore a (0,0): " << mat.get(0, 0) << std::endl;
    std::cout << "Valore a (1,1): " << mat.get(1, 1) << std::endl;
    std::cout << "Valore a (2,2): " << mat.get(2, 2) << std::endl;

    // Copia della matrice
    Matrix<int> matCopy = mat;

    // Stampa del valore copiato
    std::cout << "Valore copiato a (1,1): " << matCopy.get(1, 1) << std::endl;

    return 0;
}