#include "c.h"

int c_var = 0;

void c_function(void)
{
    int a = 2;
}

 /*__attribute__((weak))*/ void aWeakFunction(void)
{
    c_function();
    while(1);
}