#pragma once
#include"Reservation.h"
Reservation::Reservation(Costumer costumer,int table,int giorno,int mese,int anno, int ora, int minuto,int ospiti)
    :costumer{costumer},table{table},giorno{giorno},mese{mese},anno{anno},ora{ora},minuto{minuto},ospiti{ospiti}{

}
Reservation::~Reservation(){

}
int Reservation::get_giorno() const {
    return giorno;
}
void Reservation::set_giorno(int giorno) {
    this->giorno = giorno;
}
int Reservation::get_mese() const {
    return mese;
}
void Reservation::set_mese(int mese) {
    this->mese = mese;
}
int Reservation::get_anno() const {
    return anno;
}
void Reservation::set_anno(int anno) {
    this->anno = anno;
}
int Reservation::get_ora() const {
    return ora;
}
void Reservation::set_ora(int ora) {
    this->ora = ora;
}
int Reservation::get_minuto() const {
    return minuto;
}
void Reservation::set_minuto(int minuto) {
    this->minuto = minuto;
}
int Reservation::get_ospiti() const {
    return ospiti;
}
void Reservation::set_ospiti(int ospiti) {
    this->ospiti = ospiti;
}