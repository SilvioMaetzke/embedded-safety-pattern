#include "state_machine.h"

StateMachine::StateMachine()
    : state_(SystemState::Init)
{
}

void StateMachine::update()
{
    switch (state_)
    {
        case SystemState::Init:
            if (checkReadyConditions())
                transitionTo(SystemState::Ready);
            break;

        case SystemState::Ready:
            if (checkRunConditions())
                transitionTo(SystemState::Running);
            break;

        case SystemState::Running:
            if (detectError())
                transitionTo(SystemState::Error);
            break;

        case SystemState::Error:
            // Remain in error state until reset
            break;
    }
}

SystemState StateMachine::getState() const
{
    return state_;
}

bool StateMachine::checkReadyConditions() const
{
    return true;
}

bool StateMachine::checkRunConditions() const
{
    return true;
}

bool StateMachine::detectError() const
{
    return false;
}

void StateMachine::transitionTo(SystemState new_state)
{
    state_ = new_state;
}
