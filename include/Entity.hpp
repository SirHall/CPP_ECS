#ifndef Entity_hpp
#define Entity_hpp

#include <vector>
#include <memory>
#include "Component.hpp"
using namespace std;

class Entity{
    private:
        unique_ptr<vector<shared_ptr<Component>>> components;
    public:
        Entity();
        ~Entity();

        void AddComponent(Component* component);
        bool MatchesComponentPattern(vector<size_t> hashPattern);
        
        template <class T> //Fairly sure templates must stay in the header
        bool GetEntityComponent(std::weak_ptr<T> *out){
            std::size_t hash = typeid(T).hash_code();
            for(unsigned int i = 0; i < components->size(); i++){
                if(typeid(components->at(i)).hash_code() == hash){
                    // *out = dynamic_pointer_cast<T*>(components->at(i));
                    return true;
                }
            }
            return false;
        }
};

#endif