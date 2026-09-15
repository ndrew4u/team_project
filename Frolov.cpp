#include "Frolov.h"
#include <cmath>

// Константа: квадратный корень из 3
const double SQRT3 = sqrt(3.0);

double equilateralArea(double a) {
    return (SQRT3 / 4.0) * a * a;
}

double equilateralPerimeter(double a) {
    return 3.0 * a;
}

double equilateralHeight(double a) {
    return (a * SQRT3) / 2.0;
}
