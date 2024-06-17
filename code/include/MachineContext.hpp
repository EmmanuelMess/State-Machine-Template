#ifndef CODE_MACHINECONTEXT_HPP
#define CODE_MACHINECONTEXT_HPP

#include <memory>
#include <type_traits>
#include <unordered_map>

#include "MachineState.hpp"
#include "MachineStateId.hpp"

class MachineContext {
public:
	MachineContext(); // TODO make constexpr

	template<class State>
	void setState() {
		static_assert(std::is_convertible<State*, MachineState*>::value, "State must inherit MachineState as public");
		currentState = State::ID;
	}

	const MachineState& getState() const;

	MachineState& getState();

private:
	std::unordered_map<MachineStateId, std::unique_ptr<MachineState>> states;
	MachineStateId currentState;

	template<class State>
	void addState() {
		static_assert(std::is_convertible<State*, MachineState*>::value, "State must inherit MachineState as public");
		states.emplace(State::ID, std::make_unique<State>(*this));
	}
};

#endif //CODE_MACHINECONTEXT_HPP
