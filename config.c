#include "config.h"

#include "block.h"
#include "util.h"

// https://github.com/UtkarshVerma/dwmblocks-async?tab=readme-ov-file#signalling-changes
Block blocks[] = {
    { "sb-keyboard",   400,      0 },
    { "sb-disk",       300,      0 },
    { "sb-memory",     8,        0 },
    { "sb-network",    6,        0 },
    { "sb-volume",     4,        0 },
    { "sb-bat",        70,       0 },
    { "sb-clock",      60,       0 },
};

const unsigned short blockCount = LEN(blocks);
