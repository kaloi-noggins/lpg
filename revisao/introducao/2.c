#include <stdio.h>
#include <math.h>
struct point
{
    int x;
    int y;
};

int main()
{
    struct point p1, p2;

    printf("Entre com os pontos x1,y1 e x2,y2: ");
    scanf("%d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y);

    printf();

        return 0;
}