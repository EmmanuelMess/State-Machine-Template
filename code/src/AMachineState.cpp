#include "AMachineState.hpp"

#include <iostream>

AMachineState::AMachineState(MachineContext& context) : MachineState(context) {

}

void AMachineState::execute() {
	std::cout << "A machine\n";
}