#ifndef System_hpp
#define System_hpp

#include <vector>
#include <memory>
#include "CompGroup.hpp"

class System{
    private:
        std::unique_ptr<CompGroup> componentGroup;
        // std::vector<std::shared_ptr<>>
    public:
        System();
        ~System();
        std::vector<std::size_t> GetCompHashes();
        void Tick(std::vector<std::vector<Component>> comps, unsigned int i);
};

#endif