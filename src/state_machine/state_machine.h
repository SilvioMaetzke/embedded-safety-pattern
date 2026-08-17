#pragma once

#include <functional>

enum class SystemState
{
    Init,
    Ready,
    Running,
    Error
};

class StateMachine
{
public:
    StateMachine();

    void update();
    SystemState getState() const;

private:
    SystemState state_;

    bool checkReadyConditions() const;
    bool checkRunConditions() const;
    bool detectError() const;

    void transitionTo(SystemState new_state);
};
