#include <stdio.h>


FILE *lo; //Обьявляю файловые переменные


int main()
{
lo=fopen("logout.txt","w"); //присваиваю файловым переменным значения
int c1, c2, c3, max, sum, t;
float n;
do
{
do
{
printf("you can stop the programm enter 0 0 0 \n");
printf("programm works only with integer \n");
printf("Enter c1 \n");
scanf("%i", &c1);
printf("Enter c2 \n");
scanf("%i", &c2);
printf("Enter c3 \n");
scanf("%i", &c3);
printf("\n");
t=0;

if ((c1==0)&(c2==0)&(c3==0))
{
    fprintf(lo,"exit");
    fclose(lo);
    return(0);
}
fprintf(lo,"Ввод пользователя: %i %i %i \n",c1 ,c2 ,c2);
if ((c1==c2) || (c1==c3) || (c2==c3))
{
    fprintf(lo,"Error: Variables cannot be equal to each other\n \n"); //вывожу сообщение
    t=1;
}
}while(t==1);

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
printf("%f \n \n",n);
fprintf(lo,"Вывод программы: %f\n \n", n); //вывожу значение
}while((c1!=0) & (c2!=0) & (c3!=0));

fclose(lo);
return(0);
}
