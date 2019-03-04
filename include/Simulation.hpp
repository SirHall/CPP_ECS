#ifndef Simulation_hpp
#define Simulation_hpp

#include <memory>
#include <vector>
#include "Entity.hpp"
#include "System.hpp"

class Simulation{
    private:
        std::vector<std::shared_ptr<Entity>> liveEntities;
        std::vector<std::shared_ptr<Entity>> entityPool;
        std::vector<std::shared_ptr<System>> systems;
        void PopulatePool(int count);
    public:
        Simulation(std::vector<std::shared_ptr<System>> simSystems);
        ~Simulation();
        void Instantiate(std::vector<Component> components);
        void Destroy(std::shared_ptr<Entity>);
        void Tick(double deltaTime);
};

#endif