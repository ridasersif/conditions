#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,x1,x2,x,delta;

    printf("veuillez entere a\na=");
    scanf("%f",&a);
    printf("veuillez entere b\nb=");
    scanf("%f",&b);
    printf("veuillez entere c\nc=");
    scanf("%f",&c);

    if(a==0)
    {
        if(b==0){
            printf("ereur");
        }
        else
        {
            x=-c/b;
            printf("x=-c/b=%.2f",x);
        }
    }
    else
    {
       delta = pow(b,2)-(4*a*c);
       if(delta==0)
       {
           x=-b/(2*a);
           printf("x=-b/2a=%f",x);
       }
       else if (delta>0)
       {
         x1=(-b-sqrt(delta))/(2*a);
         x2=(-b+sqrt(delta))/(2*a);
         printf("x1=%f\nx2=%f",x1,x2);
       }
       else printf("\npas de solutin ");
    }
    return 0;
}
