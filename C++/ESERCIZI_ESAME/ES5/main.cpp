#include"notepad.h"
#include"nota.h"
#include"testo.h"
#include"audio.h"
#include"immagine.h"
#include"notepad.cpp"
#include"nota.cpp"
#include"testo.cpp"
#include"audio.cpp"
#include"immagine.cpp"
int main(){
    Notepad notepad;
    notepad.add_testo("Il pirata approdo' sull'isola dietro la nebbia per trovare il tesoro di Barbascura");
    notepad.add_audio("C:/Audio/pirata.mp3",12);
    notepad.add_immagine("C:/Images/perla_nera.jpg",250);
    (*notepad.get_notes().begin())->add_tag("storia");
    (*(++notepad.get_notes().begin()))->add_tag("pirati");
    (*(++notepad.get_notes().begin()))->add_tag("media");
    (*(++(++notepad.get_notes().begin())))->add_tag("media");
    std::cout<<"Mostro tutte le note"<<std::endl<<std::endl;
    notepad.show_all();
    std::cout<<"Mostro in base al tag storia"<<std::endl<<std::endl;
    notepad.show_if_tag("storia");
    std::cout<<"Mostro in base al tag media"<<std::endl<<std::endl;
    notepad.show_if_tag("media");
    return 0;
}