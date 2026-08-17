#pragma once

#include <cstdint>
#include <vector>

enum class FaultSeverity
{
    Info,
    Warning,
    Critical
};

struct Fault
{
    uint32_t id;
    FaultSeverity severity;
};

class FaultManager
{
public:
    void registerFault(uint32_t id, FaultSeverity severity);
    bool hasCriticalFault() const;
    const std::vector<Fault>& getFaults() const;

private:
    std::vector<Fault> faults_;
};
