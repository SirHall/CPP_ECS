#include "Entity.hpp"
#include <typeinfo>
#include <iostream>

Entity::Entity(){
    components = std::vector<std::shared_ptr<Component>>();
}

Entity::~Entity(){
    components.~vector();
}

void Entity::AddComponent(std::shared_ptr<Component> component){
    components.push_back(component);
}

bool Entity::MatchesComponentPattern(
    std::vector<std::size_t> hashPattern){
    
    for(uint i = 0; i < hashPattern.size(); i++){
        bool found = false;
        for(uint j = 0; j < components.size(); j++){
            std::cout 
                << "p: " << hashPattern.at(i)
                << " c: " << typeid(*(components.at(j))).hash_code() <<'\n';
            if(
                hashPattern.at(i) == 
                typeid(*(components.at(j))).hash_code()){
                    found = true;
                    break;
                }
        }
        if(!found)
            return false;
    }
    return true;
}