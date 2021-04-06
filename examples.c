#include "stdio.h"

int main(int argc, char const *argv[]) {

 double recWidth, recHeight, recPerimeter, recArea;

 printf("Program to calculate rectangle area and perimeter\n");
 printf("Please, enter the rectangle width: ");
 scanf("%lf", &recWidth);
 printf("Please, enter the rectangle height: ");
 scanf("%lf", &recHeight);

 recPerimeter = (recWidth + recHeight) * 2.0;
 recArea = recWidth * recHeight;

 printf("If the width of the rectangle is %.2lf, and the height is %.2lf, then the AREA is %.2lf, and the PERIMETER is %.2lf\n", recWidth, recHeight, recArea, recPerimeter);

 return 0;
}


// #include <stdio.h>
// 
// int main() {
// 
// 
//     enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
// 
//     enum Company google = GOOGLE;
//     enum Company xerox = XEROX;
//     enum Company ebay = EBAY;
// 
//     printf("%i\n", xerox);
//     printf("%i\n", google);
//     printf("%i\n", ebay);
// 
//     return 0;
// }
