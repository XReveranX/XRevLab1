#include <stdio.h>


int main()
{
int c1, c2, c3, max, sum;
float n;
printf("programm works only with integer \n");
printf("Enter c1 \n");
scanf("%i", &c1);
printf("Enter c2 \n");
scanf("%i", &c2);
printf("Enter c3 \n");
scanf("%i", &c3);

if ((c1==c2) || (c1==c3) || (c2==c3))
{
    printf("Error: Variables cannot be equal to each other \n");
    return 0;
}
if(c1>c2)
{
    if(c1>c3)
    {
        max = c1;
        sum = 5;
    }
    else
    {
        max = c3;
        sum = 3;
    }
}
else
{
    if(c2>c3)
    {
        max = c2;
        sum = 4;
    }
    else
    {
        max = c3;
        sum = 3; 
    }
}
if((max%3)==0)
{
    n=(max-sum);
}
else
{
    n=((float)sum/(float)max);
}
printf("%.3f\n", n);
}
