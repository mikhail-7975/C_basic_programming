#include <stdio.h>

int main()
{
    float a = 0.f;
    float b = 5.f;
    float increment = 0.1f;
    
    while(a < b) { // ок
        a += increment;
        printf("%.20f\n", a);
    }
    
    while(a != b) { // бесконечный цикл
        a += increment;
        printf("%.20f\n", a);
    }
}
