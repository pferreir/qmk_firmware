#include "lily58.h"

#ifdef SSD1306OLED
void led_set_kb(uint8_t usb_led) {
    // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here
    //led_set_user(usb_led);
}
#endif

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    {  11,  10,   9,   8,   7,   6 },
    {  12,  13,  14,  15,  16,  17 },
    {  23,  22,  21,  20,  19,  18 },
    {  24,  25,  26,  27,  28,  29 },
    {  NO_LED,      34,  33,  32,  31,  30 },
    {  46,  45,  44,  43,  42,  41 },
    {  47,  48,  49,  50,  51,  52 },
    {  58,  57,  56,  55,  54,  53 },
    {  59,  60,  61,  62,  63,  64 },
    {  NO_LED,      69,  68,  67,  66,  65 }
}, {
    {  89, 55 }, {  54, 52 }, {  19, 42 }, {  19, 13 }, {  54,  9 }, {  89, 12 }, {  89,  4 },
    {  72,  3 }, {  54,  1 }, {  37,  2 }, {  19,  6 }, {   1,  7 }, {   1, 21 }, {  19, 20 },
    {  37, 17 }, {  54, 16 }, {  72, 17 }, {  89, 19 }, {  89, 33 }, {  72, 31 }, {  54, 30 },
    {  37, 31 }, {  19, 35 }, {   1, 36 }, {   1, 50 }, {  19, 49 }, {  37, 46 }, {  54, 44 },
    {  72, 46 }, {  89, 47 }, { 107, 40 }, { 104, 62 }, {  81, 61 }, {  63, 60 }, {  45, 60 },
    { 135, 55 }, { 170, 52 }, { 205, 42 }, { 205, 13 }, { 170,  9 }, { 135, 12 }, { 135,  4 },
    { 152,  3 }, { 170,  1 }, { 187,  2 }, { 205,  6 }, { 223,  7 }, { 223, 21 }, { 205, 20 },
    { 187, 17 }, { 170, 16 }, { 152, 17 }, { 135, 19 }, { 135, 33 }, { 152, 31 }, { 170, 30 },
    { 187, 31 }, { 205, 35 }, { 223, 36 }, { 223, 50 }, { 205, 49 }, { 187, 46 }, { 170, 44 },
    { 152, 46 }, { 135, 47 }, { 117, 40 }, { 120, 62 }, { 143, 61 }, { 161, 60 }, { 179, 60 }
}, {
    2, 2, 2, 2, 2, 2, 4,
    4, 4, 4, 4, 1, 1, 4,
    4, 4, 4, 4, 4, 4, 4,
    4, 4, 1, 1, 4, 4, 4,
    4, 4, 4, 1, 1, 1, 1,
    2, 2, 2, 2, 2, 2, 4,
    4, 4, 4, 4, 1, 1, 4,
    4, 4, 4, 4, 4, 4, 4,
    4, 4, 1, 1, 4, 4, 4,
    4, 4, 4, 1, 1, 1, 1
} };
#endif

__attribute__((weak))
void matrix_init_user(void) {}

void matrix_init_kb(void) {
#ifdef RGB_MATRIX_ENABLE
    if (!isLeftHand) {
    g_led_config = (led_config_t) { {
        {  46,  45,  44,  43,  42,  41 },
        {  47,  48,  49,  50,  51,  52 },
        {  58,  57,  56,  55,  54,  53 },
        {  59,  60,  61,  62,  63,  64 },
        {  NO_LED,      69,  68,  67,  66,  65 },
        {  11,  10,   9,   8,   7,   6 },
        {  12,  13,  14,  15,  16,  17 },
        {  23,  22,  21,  20,  19,  18 },
        {  24,  25,  26,  27,  28,  29 },
        {  NO_LED,      34,  33,  32,  31,  30 }
    }, {
        { 135, 55 }, { 170, 52 }, { 205, 42 }, { 205, 13 }, { 170,  9 }, { 135, 12 }, { 135,  4 },
        { 152,  3 }, { 170,  1 }, { 187,  2 }, { 205,  6 }, { 223,  7 }, { 223, 21 }, { 205, 20 },
        { 187, 17 }, { 170, 16 }, { 152, 17 }, { 135, 19 }, { 135, 33 }, { 152, 31 }, { 170, 30 },
        { 187, 31 }, { 205, 35 }, { 223, 36 }, { 223, 50 }, { 205, 49 }, { 187, 46 }, { 170, 44 },
        { 152, 46 }, { 135, 47 }, { 117, 40 }, { 120, 62 }, { 143, 61 }, { 161, 60 }, { 179, 60 },
        {  89, 55 }, {  54, 52 }, {  19, 42 }, {  19, 13 }, {  54,  9 }, {  89, 12 }, {  89,  4 },
        {  72,  3 }, {  54,  1 }, {  37,  2 }, {  19,  6 }, {   1,  7 }, {   1, 21 }, {  19, 20 },
        {  37, 17 }, {  54, 16 }, {  72, 17 }, {  89, 19 }, {  89, 33 }, {  72, 31 }, {  54, 30 },
        {  37, 31 }, {  19, 35 }, {   1, 36 }, {   1, 50 }, {  19, 49 }, {  37, 46 }, {  54, 44 },
        {  72, 46 }, {  89, 47 }, { 107, 40 }, { 104, 62 }, {  81, 61 }, {  63, 60 }, {  45, 60 }
    }, {
        2, 2, 2, 2, 2, 2, 4,
        4, 4, 4, 4, 1, 1, 4,
        4, 4, 4, 4, 4, 4, 4,
        4, 4, 1, 1, 4, 4, 4,
        4, 4, 4, 1, 1, 1, 1,
        2, 2, 2, 2, 2, 2, 4,
        4, 4, 4, 4, 1, 1, 4,
        4, 4, 4, 4, 4, 4, 4,
        4, 4, 1, 1, 4, 4, 4,
        4, 4, 4, 1, 1, 1, 1
    } };
    }
#endif
    matrix_init_user();
}
