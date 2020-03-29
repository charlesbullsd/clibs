#include <stdio.h>

#include "interface.h"

void print(char* to_print) 
{
    printf("%s", to_print);
}

int add(int i, int j) 
{
    return i + j;
}

const struct library Library = {
    .print = print,
    .add = add
};
