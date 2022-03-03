#include "b1.h"
#include "c.h"
//#include "b2.c"

int b1_var = 0;

__attribute__((weak))  void aWeakFunction(void)
{
    b1_var=12;
    //while(1);
}

void b1_function(void)
{
    int a = 2;
    c_function();
    //b2_function();
    aWeakFunction();
}

