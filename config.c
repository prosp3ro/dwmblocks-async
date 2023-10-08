#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"sb-disk",      1800, 3 },
    {"sb-memory",    10,   4 },
    {"sb-network",   5,    4 },
    {"sb-volume",    0,    10},
    {"sb-bluetooth", 5,    3 },
    {"sb-battery",   120,    9 },
    {"sb-clock",     1,    10},
};

const unsigned short blockCount = LEN(blocks);
