#include <stdio.h>
 
//function to check leap year
int checkLeapYear(int year)
{
    if( (year % 400==0)||(year%4==0 && year%100!=0) )
        return 1;
    else
        return 0;
}
 
int main()
{
    int i,n,rango;

printf("especifique el inicio del rango\n");
    scanf("%d",&rango);

 
    printf("Enter the value of N: ");
    scanf("%d",&n);
 
    printf("Leap years from 1 to %d:\n",n);
    for(i=rango;i<=n;i++)
    {
        if(checkLeapYear(i))
            printf("%d\t",i);
    }
     
    return 0;
}
