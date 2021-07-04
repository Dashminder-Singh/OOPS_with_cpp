#include <stdio.h>
int main()
{
    int a, b, c;
    float avg;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    avg=(float)(a+b+c)/3;
    printf("Avarage of three numbers is %3f",avg);
    return 0;
}
