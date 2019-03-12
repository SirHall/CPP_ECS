#include "main.hpp"
#include <iostream>
#include <string>
#include "Component.hpp"
#include "Entity.hpp"
#include "Simulation.hpp"
#include <typeinfo>

#include "System_DeltaPosByVel.hpp"
#include "CompGroup.hpp"

class FieldVar{
	public:
		FieldVar(){std::cout << "FieldVar()\n";}
		~FieldVar(){std::cout << "~FieldVar()\n";}
		int aField = 0;
};

class Test{
	private:
		std::unique_ptr<FieldVar> var;

	public:
		Test(){
			std::cout << "Test()\n";
			var = std::unique_ptr<FieldVar> (new FieldVar());
		}
		~Test(){
			std::cout << "~Test()\n";
		}
		void Foo(int rel){
			std::cout << "Foo(" << rel << ")\n";
			var->aField += rel;
		}
};



int main(int argc, char* argv[]){

	std::cout << "Instantiating test\n";
	Test* test = new Test();

	test->Foo(10);

	std::cout << "Deleting test\n";
	delete test;

	std::cout << "\n";

	std::shared_ptr<Entity> entity (new Entity);

	entity->AddComponent(new Component_Position());

	std::cout << "Added component\n";

	// std::weak_ptr<Component_Position> pos;

 	// entity->GetEntityComponent<Component_Position>(&pos);

	// std::cout << entity->GetEntityComponent<Component_Position>(&pos) << '\n';



	return 0;
}
