#pragma once
#include<memory>
#include<iostream>
class Character{
    private:
        std::string name;
        int hp,stamina;
    public:
        Character(std::string name,int hp=100,int stamina=100):name{name},hp{hp},stamina{stamina}{}
        void die(){
            this->hp=0;
        }
        void heal(int hp){
            this->hp+=hp;
        }
        virtual void kill(std::unique_ptr<Character>& enemy){
            enemy->die();
        }
        void print(){
            if(hp!=0)
                std::cout<<name<<" has "<<hp<<"HP and "<<stamina<<" stamina!"<<std::endl;
            else
                std::cout<<name<<" is dead!"<<std::endl;
        }
        std::string get_name() const{return name;}
        int get_hp() const{return hp;}
        int get_stamina() const{return stamina;}
        void set_hp(int hp){hp=hp;}
        void set_stamina(int stamina){stamina=stamina;}
        void set_name(std::string name){name=name;}
};