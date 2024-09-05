#pragma once
#include<list>
#include"nota.h"
#include"testo.h"
#include"audio.h"
#include"immagine.h"
class Notepad{
    private:
        std::list<Nota*> notes;
    public:
        Notepad();
        ~Notepad();
        void add_testo(std::string testo);
        void add_audio(std::string path,float durata);
        void add_immagine(std::string path,int dim);
        void show_all();
        void show_if_tag(std::string tag);
        std::list<Nota*> get_notes();
};