#include "config.h"
#include "block.h"
#include "util.h"

Block blocks[] = {    /*int*/  /*sign*/
    {"sb-rec",          0,      10},
    {"sb-cpu",          2,      2},
    {"sb-memory",       2,      3},
    {"sb-date",         60,     6},
};

const unsigned short blockCount = LEN(blocks);
