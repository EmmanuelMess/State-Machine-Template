#include <iostream>

#include "MachineContext.hpp"
#include "AMachineState.hpp"
#include "BMachineState.hpp"

int main() {
	MachineContext machine;

	machine.getState().execute();

	for(int i = 0; i < 10; i++) {

		machine.setState<AMachineState>();

		machine.getState().execute();

		machine.setState<BMachineState>();

		machine.getState().execute();
	}

	return 0;
}
