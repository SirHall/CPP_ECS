#include "Simulation.hpp"

Simulation::Simulation(std::vector<std::shared_ptr<System>> simSystems){
    for(unsigned int i = 0; i < simSystems.size(); i++)
        systems.push_back(simSystems.at(i));
    
}

Simulation::~Simulation(){

}

void Simulation::Instantiate(std::vector<Component> components){

}

void Simulation::Destroy(std::shared_ptr<Entity> entity){

}

