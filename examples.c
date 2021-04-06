//#include <stdio.h>
//
//int main()
//
//{
//
//    double recWidth, recHeight, recPerimeter, recArea;
//    printf("The purpose of this program is to calculate the perimeter and area of the rectangle\n");
//    printf("..................................................................................\n");
//
//    printf("Enter the rectangle width: ");
//    scanf("%lf", &recWidth);
//
//    printf("Enter the rectangle height: ");
//    scanf("%lf", &recHeight);
//
//    recPerimeter = (recWidth + recHeight) * 2;
//    recArea = recWidth * recHeight;
//
//    printf("If the width is %.2lf, and the height is %.2lf, then the perimeter of the rectangle is: %2.lf\n", recWidth, recHeight, recPerimeter);
//    printf("If the width is %.2lf, and the height is %.2lf, then the area of the rectangle is: %2.lf", recWidth, recHeight, recArea);
//
//    return 0;
//}


//#include "stdio.h"
//
//int main(int argc, char const *argv[]) {
//
//  double recWidth, recHeight, recPerimeter, recArea;
//
//  printf("Program to calculate rectangle area and perimeter\n");
//  printf("Please, enter the rectangle width: ");
//  scanf("%lf", &recWidth);
//  printf("Please, enter the rectangle height: ");
//  scanf("%lf", &recHeight);
//
//  recPerimeter = (recWidth + recHeight) * 2.0;
//  recArea = recWidth * recHeight;
//
//  printf("If the width of the rectangle is %.2lf, and the height is %.2lf, then the AREA is %.2lf, and the PERIMETER is %.2lf\n", recWidth, recHeight, recArea, recPerimeter);
//
//  return 0;
//}


#include <stdio.h>

int main() {


    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company google = GOOGLE;
    enum Company xerox = XEROX;
    enum Company ebay = EBAY;

    printf("%i\n", xerox);
    printf("%i\n", google);
    printf("%i\n", ebay);

    return 0;
}
