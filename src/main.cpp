#include <cstdint>

#include "zephyr.h"
#include "sys/printk.h"

auto main() -> std::int32_t {
    printk("Hello World! %s\n", CONFIG_BOARD);
    return 0;
}

