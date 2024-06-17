#ifndef CODE_BMACHINESTATE_HPP
#define CODE_BMACHINESTATE_HPP

#include "MachineState.hpp"
#include "MachineStateId.hpp"

class BMachineState : public MachineState {
public:
	static constexpr MachineStateId ID = MachineStateId::B;

	BMachineState(MachineContext& context);


	void execute() override;
};

#endif //CODE_BMACHINESTATE_HPP
