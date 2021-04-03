#include "Adafruit_AVRProg.h"

const image_t PROGMEM image_328 = {
    // Sketch name, only used for serial printing
    {"blinkLED.hex"},
    // Chip name, only used for serial printing
    {"attiny85"},
    // Signature bytes for 328P
    0x930B,
    // Programming fuses, written before writing to flash. Fuses set to
    // zero are untouched.
    {0x03, 0xE2, 0xD5, 0xFF}, // {lock, low, high, extended}
    // Normal fuses, written after writing to flash (but before
    // verifying). Fuses set to zero are untouched.
    {0x0, 0x0, 0x0, 0x0}, // {lock, low, high, extended}
    // Fuse verify mask. Any bits set to zero in these values are
    // ignored while verifying the fuses after writing them. All (and
    // only) bits that are unused for this atmega chip should be zero
    // here.
    {0x03, 0xFF, 0xFF, 0xFF}, // {lock, low, high, extended}
    // size of chip flash in bytes
    8192,
    // size in bytes of flash page
    64,
    // The actual image to flash. This can be copy-pasted as-is from a
    // .hex file. If you do, replace all lines below starting with a
    // colon, but make sure to keep the start and end markers {R"( and
    // )"} in place.
    {R"(
:100000000EC015C014C013C012C011C010C00FC064
:100010000EC00DC00CC00BC00AC009C008C011241E
:100020001FBECFE5D2E0DEBFCDBF02D01CC0E8CFFF
:10003000EFEFF3E0E491EF3F71F081B78E1720F41A
:1000400081B78F5F81BFF9CF81B7E81720F481B7FF
:10005000815081BFF9CFB99A82E18ABD83E083BF25
:0A0060008CE789BDFFCFF894FFCFB5
:00000001FF
    )"}};

/*
 * Table of defined images
 */
const image_t *images[] = {
    &image_328,
};

uint8_t NUMIMAGES = sizeof(images) / sizeof(images[0]);
