#include <stdio.h>
#include <math.h>

int main()
{
    float radius, area;
  
    printf("Enter radius: ");
    scanf("%f",&radius);

    area=3.142 *pow(radius,2);
    printf("Area of circle is %5.2f",area);
    return 0;
}
