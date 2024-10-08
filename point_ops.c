#include "point_ops.h"
#include <math.h> // for sqrt()

// Swap two Point structures using pointers
void swapPoints(struct Point* p1, struct Point* p2) {
    struct Point temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// Calculate the distance between two points
float distanceBetween(struct Point* p1, struct Point* p2) {
    int dx = p1->x - p2->x;
    int dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy); // Euclidean distance formula
}
