#include <iostream>
#include <string>
#include "component/Component.cpp"
#include "entity/Entity.cpp"
#include "simulation/Simulation.cpp"
#include <typeinfo>

#include "systems/System_DeltaPosByVel.hpp"
#include "system/CompGroup.hpp"

int main(/*int argc, char* argv[]*/){
	
	std::unique_ptr<Simulation> simulation(new Simulation(
		{std::shared_ptr<System_DeltaPosByVel>(new System_DeltaPosByVel())}
	));

	return 0;
}