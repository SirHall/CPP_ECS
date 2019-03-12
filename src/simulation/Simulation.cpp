#include "Simulation.hpp"

Simulation::Simulation(std::vector<std::shared_ptr<System>> simSystems){
    for(unsigned int i = 0; i < simSystems.size(); i++)
        systems.push_back(simSystems.at(i));
    PopulatePool(100);
}

Simulation::~Simulation(){
    liveEntities.clear();
    entityPool.clear();
    systems.clear();
}

void Simulation::Instantiate(std::vector<Component> components){
    if(entityPool.size() == 0)
        PopulatePool(1);
    std::shared_ptr<Entity> entity = entityPool[entityPool.size() - 1];
    entityPool.pop_back();

    for(unsigned int i = 0; i < components.size(); i++)
        entity->AddComponent(std::shared_ptr<Component>(&components[i]));    
    liveEntities.push_back(entity);
}

void Simulation::Destroy(std::shared_ptr<Entity> entity){

}

void Simulation::PopulatePool(int count){
    for(int i = 0; i < count; i++)
        entityPool.push_back(std::shared_ptr<Entity>(new Entity()));
}

void Simulation::Tick(double deltaTime){
    for(std::shared_ptr<System> system : systems){
        // system->Tick(, , deltaTime); // <--Continue here
    }
}