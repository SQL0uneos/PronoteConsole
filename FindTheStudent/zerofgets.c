#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "zerofgets.h"

void zerofgets(char* str, int size)
{
    fflush(stdin);
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = 0;
}
