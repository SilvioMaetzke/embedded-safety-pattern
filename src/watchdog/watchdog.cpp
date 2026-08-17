#include "watchdog.h"

Watchdog::Watchdog(uint32_t timeout_ms)
    : timeout_ms_(timeout_ms),
      last_service_timestamp_ms_(0)
{
}

void Watchdog::init()
{
    last_service_timestamp_ms_ = getCurrentTimeMs();
}

void Watchdog::service()
{
    last_service_timestamp_ms_ = getCurrentTimeMs();
}

bool Watchdog::hasTimedOut() const
{
    uint32_t now = getCurrentTimeMs();
    return (now - last_service_timestamp_ms_) > timeout_ms_;
}

// Placeholder for hardware timer or OS tick
uint32_t Watchdog::getCurrentTimeMs() const
{
    return 0;
}
