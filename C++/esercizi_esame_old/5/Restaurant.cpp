#include"Restaurant.h"
Restaurant::Restaurant(std::string nome,std::string indirizzo):nome{nome},indirizzo{indirizzo}{

}
Restaurant::~Restaurant(){

}
void Restaurant::add_table(int numero,int capacità){
    this->tavoli[numero]=std::make_unique<Table>(numero,capacità);
}
void Restaurant::remove_table(int numero){
    tavoli.erase(this->tavoli.find(numero));
}
std::string Restaurant::get_nome() const {
    return this->nome;
}
void Restaurant::set_nome(const std::string& nome) {
    this->nome = nome;
}
std::string Restaurant::get_indirizzo() const {
    return this->indirizzo;
}
void Restaurant::set_indirizzo(const std::string& indirizzo) {
    this->indirizzo = indirizzo;
}
std::list<std::unique_ptr<Reservation>>& Restaurant::get_prenotazioni(){
    return prenotazioni;
}
const std::map<int, std::unique_ptr<Table>>& Restaurant::get_tavoli() const {
    return tavoli;
}