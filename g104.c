/* A construction worker needs to calculate the length of the hypotenuse for a right-angled triangle to ensure precise measurements. 



Develop a program that takes the lengths of the two other sides as input and calculates the length of the hypotenuse using the Pythagorean theorem.



Formula: Hypotenuse = √(x2 + y2) where x and y are the other two sides of a triangle.



Note: Use pow and sqrt functions from the math library.

Input format :
The input consists of two space-separated double values x and y, representing the lengths of the two other sides of the right-angled triangle.

Output format :
The output prints a double value, representing the hypotenuse length, rounded off to two decimal places.



Refer to the sample output for formatting specifications.*/

#include <stdio.h>
#include <math.h>

int main() {
    double side1, side2;
    scanf("%lf %lf", &side1, &side2);
    
    double hypotenuse = sqrt(pow(side1, 2) + pow(side2, 2));
    
    printf("%.2lf", hypotenuse);
    
    return 0;
}
