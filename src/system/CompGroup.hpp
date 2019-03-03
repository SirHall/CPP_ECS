#ifndef CompGroup_hpp
#define CompGroup_hpp

#include <vector>
#include <memory>
#include "../component/Component.hpp"
#include "../entity/Entity.hpp"

class CompGroup{
    private:
        //matchingCompGroups - Stores a vector of component groups
        std::vector<std::vector<std::shared_ptr<Component>>> matchingCompGroups;
        std::vector<std::size_t> compHashes;
    public:
        CompGroup(std::vector<std::size_t> patternHashes);
        ~CompGroup();
        std::vector<std::shared_ptr<Component>> GetGroupAt(unsigned int i);
        unsigned int Size();
        bool DoesEntityMatch(std::shared_ptr<Entity> entity);
        std::vector<std::size_t> GetCompHashes();
};

#endif
