#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
    {"bar-disk",    1800, 3 },
    {"sb-memory",   10,   4 },
    {"bar-volume",  0,    10},
    {"bar-battery", 5,    9 },
    {"bar-clock",   1,    10},
};

const unsigned short blockCount = LEN(blocks);
