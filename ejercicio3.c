#include <stdio.h>
#include <math.h>
 
int main()
{
    int i,n,rango;
printf(“especifique un rango\n”);
scanf(“%d”,&rango);

 
    printf("Enter the value of N: ");
    scanf("%d",&n);
 
    printf("No     Square   Cube    Square Root\n",n);
    for(i=rango;i<=n;i++)
    {
        printf("%d \t %ld \t %ld \t %.2f\n",i,(i*i),(i*i*i),sqrt((double)i));
    }
     
    return 0;
}

