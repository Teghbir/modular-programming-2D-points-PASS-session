#ifndef POINT_OPS_H
#define POINT_OPS_H

// Define a Point structure
struct Point {
    int x;
    int y;
};

// Function prototypes
void swapPoints(struct Point* p1, struct Point* p2);
float distanceBetween(struct Point* p1, struct Point* p2);

#endif // POINT_OPS_H
