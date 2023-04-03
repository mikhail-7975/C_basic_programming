#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

int norm(Point p) {
    return sqrt(pow(p.x, 2) + pow(p.y, 2));
}

int main() {
    Point p = {3, 4};
    printf("p.x = %d\n", p.x);
    printf("p.y = %d\n", p.y);
    printf("||p|| = %d\n", norm(p));
}