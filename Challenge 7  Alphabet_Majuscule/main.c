#include <stdio.h>
#include <stdlib.h>

int main()
{
    char crt;
    printf("veuillez entere un caracter alphabet \ncrt:");
    scanf("%c",&crt);
    if('A'<crt<'Z')printf("le caracter \"%c\" ets majuscul",crt);
    else if('a'<crt<'z')printf("le caracter \"%c\" ets meniscul",crt);

    return 0;
}
