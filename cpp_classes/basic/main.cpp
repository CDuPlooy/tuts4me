#include <iostream>
#include "./car.hpp"

int main(){
	// Allocate a new car
	Car *Volvo = new Car();
	Volvo->setColour("Red");

	std::cout << "Starting my " << Volvo->getColour() << " car." << std::endl;
	Volvo->drive();
	

	delete Volvo;
	// Savages don't clean up after themselves.
	// Always remove allocated objects once you are done with them.
	
	return 0; 
	/*
	 *
	 * WE ARE NOT SAVAGES, WE
	 * RETURN VALUES TO THE OPERATING
	 * SYSTEM.
	 *
	 * ints please.
	 */
}
