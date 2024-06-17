#ifndef CODE_AMACHINESTATE_HPP
#define CODE_AMACHINESTATE_HPP

#include "MachineState.hpp"
#include "MachineStateId.hpp"

class AMachineState : public MachineState {
public:
	static constexpr MachineStateId ID = MachineStateId::A;

	AMachineState(MachineContext& context);

	void execute() override;
};

#endif //CODE_AMACHINESTATE_HPP
