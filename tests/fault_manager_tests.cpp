#include "fault_manager.h"
#include <cassert>

int main()
{
    FaultManager fm;
    fm.registerFault(1, FaultSeverity::Critical);
    assert(fm.hasCriticalFault());
    return 0;
}

