#include "lily58.h"

#ifdef SSD1306OLED
void led_set_kb(uint8_t usb_led) {
    // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here
    //led_set_user(usb_led);
}
#endif

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    {  28,  27,   26,   25,   24,   23 },
    {  17,  18,  19,  20,  21,  22 },
    {  16,  15,  14,  13,  12,  11 },
    {  5,  6,  7,  8,  9,  10 },
    {  NO_LED, 4,  3,  2,  1,  0 },
    {  57,  56,  55,  54,  53,  52 },
    {  46,  47,  48,  49,  50,  51 },
    {  45,  44,  43,  42,  41,  40 },
    {  34,  35,  36,  37,  38,  39 },
    {  NO_LED, 33,  32,  31,  30,  29 }
}, {
    {   62, 58 }, {  45, 58 }, {  29, 60 }, {   3, 58 }, {   5, 40 },
    {   21, 46 }, {  37, 45 }, {  54, 44 }, {  70, 45 }, {  86, 48 }, {  102, 49 },
    {  102, 36 }, {  86, 35 }, {  70, 31 }, {  54, 30 }, {  37, 31 }, {   21, 33 },
    {   21, 19 }, {  37, 18 }, {  54, 17 }, {  70, 18 }, {  86, 21 }, {  102, 22 },
    {  102,  9 }, {  86,  8 }, {  70,  4 }, {  54,  3 }, {  37,  4 }, {   21,  6 },

    { 159, 58 }, { 176, 58 }, { 192, 60 }, { 218, 58 }, { 217, 40 },
    { 200, 46 }, { 184, 45 }, { 168, 44 }, { 151, 45 }, { 135, 48 }, { 119, 49 },
    { 119, 36 }, { 135, 35 }, { 151, 31 }, { 168, 30 }, { 184, 31 }, { 200, 33 },
    { 200, 19 }, { 184, 18 }, { 168, 17 }, { 151, 18 }, { 135, 21 }, { 119, 22 },
    { 119,  9 }, { 135,  8 }, { 151,  4 }, { 168,  3 }, { 184,  4 }, { 200,  6 }
}, {
    1, 1, 1, 1, 4,
    4, 4, 4, 4, 4, 1,
    1, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 1,
    1, 4, 4, 4, 4, 4,

    1, 1, 1, 1, 4,
    4, 4, 4, 4, 4, 1,
    1, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 1,
    1, 4, 4, 4, 4, 4,
} };
#endif

__attribute__((weak))
void matrix_init_user(void) {}

void matrix_init_kb(void) {
#ifdef RGB_MATRIX_ENABLE
    if (!isLeftHand) {
    g_led_config = (led_config_t) { {
        {  57,  56,  55,  54,  53,  52 },
        {  46,  47,  48,  49,  50,  51 },
        {  45,  44,  43,  42,  41,  40 },
        {  34,  35,  36,  37,  38,  39 },
        {  NO_LED, 33,  32,  31,  30,  29 },
        {  28,  27,   26,   25,   24,   23 },
        {  17,  18,  19,  20,  21,  22 },
        {  16,  15,  14,  13,  12,  11 },
        {  5,  6,  7,  8,  9,  10 },
        {  NO_LED, 4,  3,  2,  1,  0 }
    }, {
        { 159, 58 }, { 176, 58 }, { 192, 60 }, { 218, 58 }, { 217, 40 },
        { 200, 46 }, { 184, 45 }, { 168, 44 }, { 151, 45 }, { 135, 48 }, { 119, 49 },
        { 119, 36 }, { 135, 35 }, { 151, 31 }, { 168, 30 }, { 184, 31 }, { 200, 33 },
        { 200, 19 }, { 184, 18 }, { 168, 17 }, { 151, 18 }, { 135, 21 }, { 119, 22 },
        { 119,  9 }, { 135,  8 }, { 151,  4 }, { 168,  3 }, { 184,  4 }, { 200,  6 },
        {   62, 58 }, {  45, 58 }, {  29, 60 }, {   3, 58 }, {   5, 40 },
        {   21, 46 }, {  37, 45 }, {  54, 44 }, {  70, 45 }, {  86, 48 }, {  102, 49 },
        {  102, 36 }, {  86, 35 }, {  70, 31 }, {  54, 30 }, {  37, 31 }, {   21, 33 },
        {   21, 19 }, {  37, 18 }, {  54, 17 }, {  70, 18 }, {  86, 21 }, {  102, 22 },
        {  102,  9 }, {  86,  8 }, {  70,  4 }, {  54,  3 }, {  37,  4 }, {   21,  6 }
    }, {
        1, 1, 1, 1, 4,
        4, 4, 4, 4, 4, 1,
        1, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 1,
        1, 4, 4, 4, 4, 4,

        1, 1, 1, 1, 4,
        4, 4, 4, 4, 4, 1,
        1, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 1,
        1, 4, 4, 4, 4, 4,
    } };
    }
#endif
    matrix_init_user();
}
