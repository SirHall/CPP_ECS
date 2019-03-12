#include "Entity.hpp"
#include <typeinfo>
#include <iostream>

Entity::Entity(){
    components = std::unique_ptr<::vector<std::shared_ptr<Component>>>();
}

Entity::~Entity(){

}

void Entity::AddComponent(Component* component){
    std::cout << "Pushing back\n";
    components->push_back(std::shared_ptr<Component> (component));
}

bool Entity::MatchesComponentPattern(
    std::vector<std::size_t> hashPattern){
    
    for(uint i = 0; i < hashPattern.size(); i++){
        bool found = false;
        for(uint j = 0; j < components->size(); j++){
            std::cout 
                << "p: " << hashPattern.at(i)
                << " c: " << typeid(*(components->at(j))).hash_code() <<'\n';
            if(
                hashPattern.at(i) == 
                typeid(*(components->at(j))).hash_code()){
                    found = true;
                    break;
                }
        }
        if(!found)
            return false;
    }
    return true;
}

// template <class T>
// bool Entity::GetEntityComponent(std::weak_ptr<T> *out){
//     std::size_t hash = typeid(T).hash_code();
//     for(unsigned int i = 0; i < components->size(); i++){
//         if(typeid(components->at(i)).hash_code() == hash){
//             *out = dynamic_pointer_cast<T*>(components->at(i));
//             return true;
//         }
//     }
//     return false;
// }