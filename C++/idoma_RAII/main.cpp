#include<iostream>
#include<fstream> //file stream
#include<exception>
/**
 * @brief Classe per la 
 */
class File{
    private:
        std::fstream file;
        std::string filename;
        int* x;
    public:
        /**
         * @brief Costruttore per la classe file
         * @param name nome del file
         * @return ritorna un oggetto
         * @exception Eccezione nel caso in cui il file non venga aperto
         */
        File(std::string name):filename{name}{
            x=new int(30); ///< variabile a caso
            file.open(filename); ///< apertura del file
            if(!file.is_open())
                throw std::runtime_error("Errore apertura file"+filename);
            else
                std::cout<<"File "<<filename<<" aperto con successo!";
        }
        /**
         * @brief Distruttore File, si occupa di chiudere il file seguendo l'ideoma RAII essendo
         * l'oggetto istanziato in memoria statica nel main.cpp*/
        ~File(){
            delete x;
            file.close();
            if(file.is_open())
                throw std::runtime_error("Errore nella chiusura del file "+filename);
            std::cout<<"File "<<filename<<" chiuso con successo!";
        }
        void write(std::string string){
            file<<string<<std::endl;
            std::cout<<"Scrittura avvenuta correttamente"<<std::endl;
        }
        void read(){
            std::cout<<"Lettura file "<<filename<<std::endl;
            std::cout<<"************************************"<<std::endl;
            std::string output;
            file>>output;
            std::cout<<output<<std::endl;
            std::cout<<"************************************"<<std::endl;
        }
        File(const File& other) = delete;
        File& operator= (File& other) = delete;
};
int main(){
    try{
        File guano("guano.txt");
        guano.read();
        guano.write("Il king è proprio un bel guano");
        guano.read();
        guano.~File();
        guano.read();
    }
    catch(std::exception& e){
        std::cout<<e.what()<<std::endl;
    }
}