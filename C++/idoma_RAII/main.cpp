#include<iostream>
#include<fstream> //file stream
#include<exception>
#include<memory>
/**
 * @brief Classe per la 
 */
class File{
    private:
        std::fstream file;
        std::string filename;
    public:
        /**
         * @brief Costruttore per la classe file
         * @param name nome del file
         * @return ritorna un oggetto
         * @exception Eccezione nel caso in cui il file non venga aperto
         */
        File(std::string name):filename{name}{
            file.open(filename, std::ios::in | std::ios::out | std::ios::app); ///< apertura del file sia in scrittura che lettura
            if(!file.is_open())
                throw std::runtime_error("Errore apertura file"+filename);
            else
                std::cout<<"File "+filename+" aperto con successo!"<<std::endl;
        }
        /**
         * @brief Distruttore File, si occupa di chiudere il file seguendo l'ideoma RAII essendo
         * l'oggetto istanziato in memoria statica nel main.cpp*/
        ~File(){
            file.close();
            /*if(file.is_open()) //pericoloso lanciare eccezioni in un distruttore, altrimenti va in std::terminate()
                throw std::runtime_error("Errore nella chiusura del file "+filename);*/
            std::cout<<"File "<<filename<<" liberato dalla memoria con successo!"<<std::endl;
        }
        void write(std::string string){
            if(!file.is_open()){
                file.open(filename, std::ios::in | std::ios::out | std::ios::app);
            }
            file<<string<<std::endl;
            std::cout<<"Scrittura avvenuta correttamente"<<std::endl;
            file.close(); //salva il file nella chiusura
        }
        void read(){
            if(!file.is_open()){
                file.open(filename, std::ios::in | std::ios::out | std::ios::app);
            }
            std::cout<<"Lettura file "<<filename<<std::endl;
            std::cout<<"************************************"<<std::endl;
            std::string line;
            while(std::getline(file,line))
                std::cout<<line<<std::endl;
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
    }
    catch(std::exception& e){
        std::cerr<<e.what()<<std::endl;
    }
}