#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("veuillez enetere la notes \nN=");
    scanf("%d",&N);
    if(N<10)printf("recalé");
    else if(10<N<12)printf("mention passable");
    else if(12<N<14)printf("mention assez bien");
    else if(14<N<16)printf("mention bien");
    else if(16<N)printf("mention très bien");
    return 0;
}
