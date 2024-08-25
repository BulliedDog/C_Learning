#include<iostream>
#include<memory>
#include<list>
#include<algorithm>
#include"officer.h"
#include"pistol.h"
#include"terrorist.h"
#include"ar.h"
#include"officer_factory.h"
#include"terrorist_factory.h"
int main(){
    Officer_factory o_factory;
    Terrorist_factory t_factory;
    std::list<std::unique_ptr<Character>> list;
    list.push_back(o_factory.create_character("Officer",100,o_factory.create_weapon("Pistol",50)));
    list.push_back(t_factory.create_character("Terrorist",100,t_factory.create_weapon("AK",90)));
    std::string name="Terrorist";
    auto it=std::find_if(list.begin(),list.end(),[&name](std::unique_ptr<Character>& character)->bool{
        if(character->get_name()==name)
            return true;
        else
            return false;
    });
    name="Officer";
    auto it2=std::find_if(list.begin(),list.end(),[&name](std::unique_ptr<Character>& character)->bool{
        if(character->get_name()==name)
            return true;
        else
            return false;
    });
    (*it)->shoot((*it2));
    return 0;
}