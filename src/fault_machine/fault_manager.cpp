#include "fault_manager.h"

void FaultManager::registerFault(uint32_t id, FaultSeverity severity)
{
    faults_.push_back({id, severity});
}

bool FaultManager::hasCriticalFault() const
{
    for (const auto& fault : faults_)
    {
        if (fault.severity == FaultSeverity::Critical)
            return true;
    }
    return false;
}

const std::vector<Fault>& FaultManager::getFaults() const
{
    return faults_;
}
