#include <stdio.h>

int main()
{
    float a = 0.f;
    float b = 5.f;
    float increment = 0.1f;
    while(a < b) {
        a += increment;
        printf("%.20f\n", a);
    }
}
