#include<iostream>
template<typename T>
class Character{
    private:
        T name {"cj"};
        int age {18};
    public:
        Character(){}
        Character(T name="Unknown", int age=18):name(name),age(age){}
        ~Character(){} //no pointers so no dynamic memory, all static memory gets cleaned
        T get_name(){return name;}
        int get_age(){return age;}
        void set_name(std::string name){this->name=name;}
        void set_age(int age){this->age=age;}
};