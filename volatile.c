#include <stdio.h>
#include <stdint.h>

#define SRAM_ADDR1 0x20000004U

int main(void)
{
    uint32_t value = 0;
    volatile uint32_t *p = (volatile uint32_t*)SRAM_ADDR1;

    while (1)
    {
        value = *p;  // Read value from memory
        if (value) break;
    }

    while (1); // Infinite loop to halt execution
    return 0;
}