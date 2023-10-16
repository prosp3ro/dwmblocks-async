#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"sb-disk",    1800, 3 },
    {"sb-memory",  10,   4 },
    {"sb-network", 5,    4 },
    {"sb-volume",  5,    10},
    {"sb-bat",     120,  9 },
    {"sb-clock",   60,   10},
};

const unsigned short blockCount = LEN(blocks);
