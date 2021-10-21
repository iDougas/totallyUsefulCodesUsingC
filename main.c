#include <stdio.h>

int main()
{
    int a = 65, z = 90;
    while(a <= z)
    {
        printf("%c%c ", a, a + 32);
        a++;
    }
    return 0;
}
