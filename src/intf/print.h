#pragma once
#include <stdint.h>
#include <stddef.h>

enum {
    PRINT_COLOR_BLACK = 0,
    PRINT_COLOR_WHITE = 1,
    PRINT_COLOR_LIGHT_BLUE = 2,
    PRINT_COLOR_BLUE = 3,
    PRINT_COLOR_LIGHT_GREEN = 4,
    PRINT_COLOR_GREEN = 5,
    PRINT_COLOR_LIGHT_CYAN = 6,
    PRINT_COLOR_CYAN = 7,
    PRINT_COLOR_LIGHT_RED = 8,
    PRINT_COLOR_RED = 9,
    PRINT_COLOR_LIGHT_GRAY = 10,
    PRINT_COLOR_DARK_GRAY = 11,
    PRINT_COLOR_MAGENTA = 12,
    PRINT_COLOR_BROWN = 13,
    PRINT_COLOR_PINK = 14,
    PRINT_COLOR_YELLOW = 15,
};

void print_clear();
void print_char(char character);
void print_str(char* string);
void print_set_color(uint8_t foreground, uint8_t background);