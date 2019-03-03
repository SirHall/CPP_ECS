#ifndef System_hpp
#define System_hpp

#include <vector>
#include <map>
#include <memory>
#include "CompGroup.hpp"

#define GetCompAs(compCollection, index, type) \ 
    (dynamic_pointer_cast<type> \
        (compCollection[index][typeid(type).hash_code()]))

class System{
    protected:
        std::unique_ptr<CompGroup> componentGroup;

        // std::vector<std::shared_ptr<>>
    public:
        System();
        ~System();
        std::vector<std::size_t> GetCompHashes();
        void Tick(
            std::vector<std::map<std::size_t, 
                std::shared_ptr<Component>>> comps, 
            unsigned int i,
            double deltaTime);
};

#endif