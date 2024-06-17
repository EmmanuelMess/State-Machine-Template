#include "BMachineState.hpp"

#include <iostream>

BMachineState::BMachineState(MachineContext& context) : MachineState(context) {

}

void BMachineState::execute() {
	std::cout << "B machine\n";
}