#include"Permission.h"
Permission::Permission(bool read_only):read_only{read_only}{

}
Permission::~Permission(){

}
void Permission::add_user(std::string nome){
    this->utenti.push_back(nome);
}
void Permission::remove_user(std::string nome){
    for(auto& utente:utenti){
        if(utente==nome)
            utenti.remove(utente);
    }
}
void Permission::flip_read_only(){
    if(this->read_only==true)
        this->read_only=false;
    else
        this->read_only=true;
}
bool Permission::get_read_only() const{return this->read_only;}
void Permission::set_read_only(bool read_only){this->read_only=read_only;}