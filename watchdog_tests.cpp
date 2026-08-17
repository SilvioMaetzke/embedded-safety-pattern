#include "watchdog.h"
#include <cassert>

int main()
{
    Watchdog wd(100);
    wd.init();
    wd.service();
    assert(!wd.hasTimedOut());
    return 0;
}
