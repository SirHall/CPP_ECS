#include <iostream>
#include <string>
#include "component/Component.cpp"
#include "entity/Entity.cpp"
#include <typeinfo>

#include "system/CompGroup.hpp"

int main(/*int argc, char* argv[]*/){
	
	std::unique_ptr<Entity> entity(new Entity());
	
	std::shared_ptr<Component> comp (new Component());
	
	entity->AddComponent(comp);

	std::cout << entity->MatchesComponentPattern(
			{typeid(Component).hash_code()}
		) << '\n';

	return 0;
}