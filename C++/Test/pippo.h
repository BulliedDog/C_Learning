#include <string.h>
class Pippo
{
private:
    std::string nome {"pippo"};
    std::string cognome {"pippo"};
    int età {18};
public:
    Pippo(std::string nome="pippo", std::string cognome="pippo", int età=18);
    ~Pippo();
    void infinite_pippo(){
        int n_pippi;
        std::cout<<"Inserisci il numero di pippi(default=1): ";
        std::cin>>n_pippi;
        for (size_t i = 0; i < n_pippi; i++)
        {
            std::cout<<"nome: "<<nome<<" cognome: "<<cognome<<" eta': "<<età<<std::endl;
        }
    }
};