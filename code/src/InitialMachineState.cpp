#include "InitialMachineState.hpp"

#include <iostream>

InitialMachineState::InitialMachineState(MachineContext& context) : MachineState(context) {

}

void InitialMachineState::execute() {
	std::cout << "Initial machine\n";
}