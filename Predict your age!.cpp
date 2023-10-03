#include <math.h>

int predictAge(int age1, int age2, int age3, int age4, int age5, int age6, int age7, int age8) {
    // Calculate the sum of squares of all ages
    int sumOfSquares = age1 * age1 + age2 * age2 + age3 * age3 + age4 * age4 + age5 * age5 + age6 * age6 + age7 * age7 + age8 * age8;
    
    // Take the square root of the sumOfSquares and divide by 2 to get the predicted age
    int predictedAge = sqrt(sumOfSquares) / 2;
    
    return predictedAge;
}