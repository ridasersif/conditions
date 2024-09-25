#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("veuillez entere un nomber \nN=");
    scanf("%d",&N);
    if(N<0)printf("le nombere et negatif");
    else if(N>0)printf("le nombere et positif");
    else printf("le nombere et nul");
    return 0;
}
