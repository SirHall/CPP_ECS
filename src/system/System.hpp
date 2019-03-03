#ifndef System_hpp
#define System_hpp

#include <vector>
#include <memory>

class System{
    private:
        std::vector<std::size_t> compHashes;
        // std::vector<std::shared_ptr<>>
    public:
        System();
        ~System();
        std::vector<std::size_t> GetCompHashes();
};

#endif