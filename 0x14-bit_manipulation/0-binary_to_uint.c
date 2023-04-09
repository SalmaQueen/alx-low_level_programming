#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

unsigned int binary_to_uint(const char *b)
{
    unsigned int output = 0;
    int len = strlen(b);
    int i=0;

    if(b==NULL)
    {
	    return 0;
    }

    for (; i < len; i++) {
        if (b[i] == '1') {
            output += pow(2, len - i - 1);
        } else if (b[i] != '0') {
            return 0;
        }
    }
    return output;
}

