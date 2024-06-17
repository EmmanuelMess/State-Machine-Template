#ifndef CODE_MACHINESTATE_HPP
#define CODE_MACHINESTATE_HPP

class MachineContext;

class MachineState {
public:
	MachineState(MachineContext& context);

	virtual ~MachineState() = default;

	virtual void execute() = 0;

protected:
	MachineContext& context;
};

#endif //CODE_MACHINESTATE_HPP
