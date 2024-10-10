#include <stdio.h>
#include <unistd.h>

FILE *li;
FILE *lo; //Обьявляю файловые переменные


int main()
{
li=fopen("loginto.txt","r"); //присваиваю файловым переменным значения
lo=fopen("logout.txt","w");
int c1, c2, c3, max, sum, t;
float n;
do
{
do
{
fscanf(li,"%d",&c1); //читаю число из файла
fscanf(li,"%d",&c2);
fscanf(li,"%d",&c3);
t=0;

if ((c1==0)&(c2==0)&(c3==0)){fprintf(lo,"exit");return 0;}
if ((c1==c2) || (c1==c3) || (c2==c3))
{
    fprintf(lo,"Error: Variables cannot be equal to each other\n"); //вывожу сообщение
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
fprintf(lo,"%f\n", n); //вывожу значение
}while((c1!=0) & (c2!=0) & (c3!=0));

fclose(lo);
fclose(li);
return(0);
}
