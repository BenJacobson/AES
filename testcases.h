#ifndef AES_TESTCASES_H
#define AES_TESTCASES_H

#include "aes.h"

const byte key128_a[] = {
        0x2b, 0x7e, 0x15, 0x16,
        0x28, 0xae, 0xd2, 0xa6,
        0xab, 0xf7, 0x15, 0x88,
        0x09, 0xcf, 0x4f, 0x3c,
};

const byte key192_a[] = {
        0x8e, 0x73, 0xb0, 0xf7,
        0xda, 0x0e, 0x64, 0x52,
        0xc8, 0x10, 0xf3, 0x2b,
        0x80, 0x90, 0x79, 0xe5,
        0x62, 0xf8, 0xea, 0xd2,
        0x52, 0x2c, 0x6b, 0x7b,
};

const byte key256_a[] = {
        0x60, 0x3d, 0xeb, 0x10,
        0x15, 0xca, 0x71, 0xbe,
        0x2b, 0x73, 0xae, 0xf0,
        0x85, 0x7d, 0x77, 0x81,
        0x1f, 0x35, 0x2c, 0x07,
        0x3b, 0x61, 0x08, 0xd7,
        0x2d, 0x98, 0x10, 0xa3,
        0x09, 0x14, 0xdf, 0xf4,
};

const byte key128_c[] = {
        0x00, 0x01, 0x02, 0x03,
        0x04, 0x05, 0x06, 0x07,
        0x08, 0x09, 0x0a, 0x0b,
        0x0c, 0x0d, 0x0e, 0x0f,
};

const byte key192_c[] = {
        0x00, 0x01, 0x02, 0x03,
        0x04, 0x05, 0x06, 0x07,
        0x08, 0x09, 0x0a, 0x0b,
        0x0c, 0x0d, 0x0e, 0x0f,
        0x10, 0x11, 0x12, 0x13,
        0x14, 0x15, 0x16, 0x17,
};

const byte key256_c[] = {
        0x00, 0x01, 0x02, 0x03,
        0x04, 0x05, 0x06, 0x07,
        0x08, 0x09, 0x0a, 0x0b,
        0x0c, 0x0d, 0x0e, 0x0f,
        0x10, 0x11, 0x12, 0x13,
        0x14, 0x15, 0x16, 0x17,
        0x18, 0x19, 0x1a, 0x1b,
        0x1c, 0x1d, 0x1e, 0x1f,
};

byte_vector2d block_b = {
        {0x32, 0x88, 0x31, 0xe0},
        {0x43, 0x5a, 0x31, 0x37},
        {0xf6, 0x30, 0x98, 0x07},
        {0xa8, 0x8d, 0xa2, 0x34}
};

byte_vector2d block_plaintext = {
        {0x00, 0x44, 0x88, 0xcc},
        {0x11, 0x55, 0x99, 0xdd},
        {0x22, 0x66, 0xaa, 0xee},
        {0x33, 0x77, 0xbb, 0xff},
};

byte_vector2d block_ciphertext128 = {
        {0x69, 0x6a, 0xd8, 0x70},
        {0xc4, 0x7b, 0xcd, 0xb4},
        {0xe0, 0x04, 0xb7, 0xc5},
        {0xd8, 0x30, 0x80, 0x5a},
};

byte_vector2d block_ciphertext192 = {
        {0xdd, 0x86, 0x6e, 0xec},
        {0xa9, 0x4c, 0xaf, 0x0d},
        {0x7c, 0xdf, 0x70, 0x71},
        {0xa4, 0xe0, 0xa0, 0x91},
};

byte_vector2d block_ciphertext256 = {
        {0x8e, 0x51, 0xea, 0x4b},
        {0xa2, 0x67, 0xfc, 0x49},
        {0xb7, 0x45, 0x49, 0x60},
        {0xca, 0xbf, 0x90, 0x89},
};

#endif //AES_TESTCASES_H
