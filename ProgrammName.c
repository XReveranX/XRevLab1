#include <stdio.h>


int main()
{
int c1, c2, c3, sum, max;
printf("Enter c1 \n");
scanf("%f", &c1);
printf("Enter c2 \n");
scanf("%f", &c2);
printf("Enter c3 \n");
scanf("%f", &c3);

if ((c1==c2) && (c1==c3))
{
    printf("Error: can't c1==c2==c3 \n");
    return 0;
}
if(c1>c2)
{
    if(c1>c3)
    {
        max=c1;
        sum=5;
    }
    else
    {
        max=c3;
        sum=3;
    }
}
else
{
    if(c2>c3)
    {
        max=c2;
        sum=4;
    }
    else
    {
        max=c3;
        sum=3; //Значения не присваиваюстя, надо это исправить.
    }
}
printf("%f  %f\n", max, sum);
}
