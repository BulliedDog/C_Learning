#include<iostream>
#include<list>
#include<memory>
//metto le classi tutte insieme per compattezza e semplicità
//CLASSI ESERCIZIO//
class Weapon {
    public:
        virtual ~Weapon() = 0;
};
Weapon::~Weapon() {}

class AssaultRifle : public Weapon {

};

class SniperRfile : public Weapon {

};

class PhysicalFeature {
    public:
        virtual ~PhysicalFeature() = 0;
};
PhysicalFeature::~PhysicalFeature() {}

class Stamina : public PhysicalFeature {

};

class HoldBreath : public PhysicalFeature {

};

class Character {
    public:
        virtual ~Character() = 0;
        void setPhysical(PhysicalFeature * aPF) {
            pf = aPF; 
        }
        void setWeapon(Weapon* aW) {
            w = aW;
        }
    protected:
        PhysicalFeature * pf;
        Weapon* w;
};
Character::~Character() {}

class AssaultTrooper : public Character {
    public:
        AssaultTrooper (int s) :
        strength (s) {};
        void doRun() {};
    private:
        int strength;
};

class Sniper : public Character {
    public:
        Sniper (int p) :
        precision(p) {};
        void doSnipe() {};
    private:
        int precision;
};
//L'ESERCIZIO RICHIEDE DI CREARE LE CLASSI ABSTRACT FACTORY AFFINCHE' AD OGNI ASSAULT TROOPER POSSA ESSERE ASSOCIATO UN ASSAULT RIFLE
//E UNA STAMINA MENTRE AD UN ASSAULT RIFLE VENGA ASSOCIATO SOLO UNO SNIPER RIFLE E UN HOLDBREATH

//ABSTRACT FACTORY//
class Abstract_factory{
    public:
        virtual ~Abstract_factory()=default;
        virtual Character* create_character(int x)=0;
        virtual Weapon* create_weapon()=0;
        virtual PhysicalFeature* create_physical_feature()=0;
};
class Assault_trooper_factory:public Abstract_factory{
    public:
        ~Assault_trooper_factory(){}
        Character* create_character(int s) override{
            AssaultTrooper* character=new AssaultTrooper(s);
            character->setWeapon(this->create_weapon());
            character->setPhysical(this->create_physical_feature());
            return character;
        }
        Weapon* create_weapon() override{
            return new AssaultRifle;
        }
        PhysicalFeature* create_physical_feature() override{
            return new Stamina;
        }
};
class Sniper_factory:public Abstract_factory{
    public:
        ~Sniper_factory()=default;
        Character* create_character(int p) override{
            Sniper* character=new Sniper(p);
            character->setPhysical(this->create_physical_feature());
            character->setWeapon(this->create_weapon());
            return character;
        }
        Weapon* create_weapon() override{
            return new SniperRfile;
        }
        PhysicalFeature* create_physical_feature() override{
            return new HoldBreath;
        }
};
int main(){
    Sniper_factory sf;
    Assault_trooper_factory af;
    std::list<Character*> troopers;
    troopers.push_back(sf.create_character(100));
    troopers.push_back(af.create_character(120));
    return 0;
}