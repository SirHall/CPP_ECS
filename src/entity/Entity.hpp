#ifndef Entity_hpp
#define Entity_hpp

#include <vector>
#include <memory>
#include "../component/Component.hpp"
using namespace std;

class Entity{
    private:
        vector<shared_ptr<Component>> components;
    public:
        Entity();
        ~Entity();

        void AddComponent(std::shared_ptr<Component> component);
        bool MatchesComponentPattern(
            std::vector<::size_t> hashPattern);
};

#endif