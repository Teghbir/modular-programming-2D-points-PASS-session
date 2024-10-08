#include <stdio.h>
#include "point_ops.h"

int main() {
    struct Point p1 = {3, 4};
    struct Point p2 = {7, 1};

    printf("Point 1: (%d, %d)\n", p1.x, p1.y);
    printf("Point 2: (%d, %d)\n", p2.x, p2.y);

    // Calculate the distance between the two points
    float distance = distanceBetween(&p1, &p2);
    printf("Distance between Point 1 and Point 2: %.2f\n", distance);

    // Swap the points
    swapPoints(&p1, &p2);
    printf("After swapping:\n");
    printf("Point 1: (%d, %d)\n", p1.x, p1.y);
    printf("Point 2: (%d, %d)\n", p2.x, p2.y);

    return 0;
}