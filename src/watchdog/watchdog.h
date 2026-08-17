#pragma once

#include <cstdint>

class Watchdog
{
public:
    explicit Watchdog(uint32_t timeout_ms);

    void init();
    void service();
    bool hasTimedOut() const;

private:
    uint32_t timeout_ms_;
    uint32_t last_service_timestamp_ms_;

    uint32_t getCurrentTimeMs() const;
};
