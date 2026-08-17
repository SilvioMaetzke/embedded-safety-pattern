#include "state_machine.h"
#include <cassert>

int main()
{
    StateMachine sm;
    sm.update();
    assert(sm.getState() == SystemState::Ready);
    return 0;
}
