#ifndef CODE_INITIALMACHINESTATE_HPP
#define CODE_INITIALMACHINESTATE_HPP

#include "MachineState.hpp"
#include "MachineStateId.hpp"

class InitialMachineState : public MachineState {
public:
	static constexpr MachineStateId ID = MachineStateId::INITIAL;

	InitialMachineState(MachineContext& context);

	void execute() override;
};

#endif //CODE_INITIALMACHINESTATE_HPP
