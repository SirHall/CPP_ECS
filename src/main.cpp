#include "main.hpp"
#include <iostream>
#include <string>
#include "Component.hpp"
#include "Entity.hpp"
#include "Simulation.hpp"
#include <typeinfo>

#include "System_DeltaPosByVel.hpp"
#include "CompGroup.hpp"

int main(int argc, char* argv[]){
	
	std::unique_ptr<Simulation> simulation(new Simulation(
		{std::shared_ptr<System_DeltaPosByVel>(new System_DeltaPosByVel())}
	));

	return 0;
}