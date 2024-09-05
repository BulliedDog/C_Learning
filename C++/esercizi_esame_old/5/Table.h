#pragma once
class Table{
    private:
        int numero;
        int capacità;
        bool libero;
    public:
        Table(int numero,int capacità,bool libero=true);
        ~Table();
        int get_numero() const;
        void set_numero(int numero);
        int get_capacità() const;
        void set_capacità(int capacità);
        bool get_libero() const;
        void set_libero(bool libero);
};