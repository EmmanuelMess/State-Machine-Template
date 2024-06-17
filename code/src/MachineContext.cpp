#include "MachineContext.hpp"

#include "InitialMachineState.hpp"
#include "AMachineState.hpp"
#include "BMachineState.hpp"

MachineContext::MachineContext() {
	addState<InitialMachineState>();
	addState<AMachineState>();
	addState<BMachineState>();

	setState<InitialMachineState>();
}

const MachineState& MachineContext::getState() const {
	return *(states.at(currentState));
}

MachineState& MachineContext::getState() {
	return *(states[currentState]);
}