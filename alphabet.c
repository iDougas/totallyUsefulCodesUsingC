#include <stdio.h>

int main()
{
    // If you don't understand anything what these numbers mean, use the ASCII table (https://www.asciitable.com/) and look for them by decimals
    int a = 65, z = 90;
    while(a <= z)
    {
        printf("%c%c ", a, a + 32);
        a++;
    }
    return 0;
}
