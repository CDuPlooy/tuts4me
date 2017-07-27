#ifndef CAR_GUARD
#define CAR_GUARD // Sometimes my jokes are funny.

// Memorise the following:
/*
 *  Using using in a class header
 *  pollutes the global namespace
 *  and should be avoided. 
 *
 */

class Car{
	private: 
	// Private variables can only be accessed by methods of the class.
	std::string colour;

	public:	
	// Public variables can be accessed by anything.
	Car(){
		setColour("boring-ol-grey");	
	}

	void setColour(std::string colour){
		// This is called a mutator function
		// because it mutates/changes a value.
		this->colour = colour;	
	}

	std::string getColour(){
		// This is called an accessor function
		// because it retrieves/accesses a value.
		return this->colour;
	}

	void drive(){
		// This is just a function.
		// It just does some magic.
		std::cout << "Vroom Vroom!" << std::endl;
	}
};	

#endif

