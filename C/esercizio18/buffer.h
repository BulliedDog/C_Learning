//DOMANDA//
//È necessario scrivere un costruttore di copia ed un operatore di assegnazione per la seguente classe?
//Indicare perché e nel caso implementare i metodi necessari
//RISPOSTA//
//Il costruttore di copia è necessario per effettuare il deep copy e non la shallow copyW e l'operatore di assegnazione non deve soltanto copiare
//l'indirizzo ma anche il contenuto in memoria heap. 
#include<iostream>
class Buffer {
    private:
        char * buffer;
        int size;
    public:
        Buffer(int size=1){
            buffer = new char[size];
            size = size;
        }
        Buffer(const Buffer & original) : size(original.size){
            if(original.buffer!=nullptr)
                buffer = new char(*original.buffer);
            else
                buffer = nullptr;
        }
        ~Buffer(){
            if (buffer != nullptr)
                delete buffer;
            delete & size;
        }
        Buffer & operator = (const Buffer & right){
            if(this != & right){ //OVVIAMENTE SI ESCLUDE IL CASO A=A
                if(right.buffer != nullptr){
                    delete buffer; //CANCELLO IL CONTENUTO PRECEDENTE ALTRIMENTI SI HA MEMORY LEAK
                    size = right.size;
                    if(right.buffer != nullptr)
                        buffer = new char(*right.buffer);
                    else
                        buffer = nullptr;
                }
                return * this;
            }
        }
        ~Buffer(){
            delete [] buffer;
        }
        void setCharAt(int pos, char value) {
            if( pos>=0 && pos < size )
                buffer[pos] = value;
        }
        char getCharAt(int pos){
            if( pos>=0 && pos < size )
                return buffer[pos];
            else
                return '\0';
        }
        int getSize() const { return size; }
};