#include "a.h"
#include "b1.h"
#include "b2.h"
//#include "c.h"

int a_var = 0;

void a_function(void)
{
    int a = 2;
    b1_function();
    b2_function();
    c_function();
}

int main(void)
{
    a_function();

    return -1;
}