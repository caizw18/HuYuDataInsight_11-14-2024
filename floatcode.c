#include <stdio.h>
#include <float.h>

int main()
{
    printf("%lu\n",sizeof(float));
    printf("%E\n",FLT_MIN);
    printf("%E\n",FLT_MAX);
    printf("%d\n",FLT_DIG);
    
    return 0;
}