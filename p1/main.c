#include <stdio.h>

int main()
{
    int guess,answer,number=0;
    scanf("%d",&answer);
    do{
        scanf("%d",&guess);
        if (guess == answer)
            printf("%d==?\n",guess);
        else if (guess > answer)
            printf("%d>?\n",guess);
        else
            printf("%d<?\n",guess);
        number += 1;
    } while (guess != answer);
    printf("%d",number);
    return 0;
}
