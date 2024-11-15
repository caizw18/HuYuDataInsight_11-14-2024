#include <stdio.h>

//传入函数的是拷贝，而非本身

int main()
{
    void increment(int a){
        a++;
    }

    int i = 10;

    increment(i);

    printf("%d\n", i);

    //作为返回值传出来

    int increment2(int b){
        b++;
        return b;
    }

    int  j = 10;

    j = increment2(j);

    printf("%d\n", j);
    return 0;
}