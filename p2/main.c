#include <stdio.h>

int main()
{
    int N, count, maxcount, countnum, maxcountnum, i=0;
    char answer;
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%c", &answer);
        
        if(answer >= 'a' && answer <= 'z') {
            count += 1;
            countnum = 0;
            if(count > maxcount)
                maxcount = count;
        }
        else if(answer >= '0' && answer <= '9') {
            countnum += 1;
            count = 0;
            if(countnum > maxcountnum)
                maxcountnum = countnum;
        }
    }
    printf("%d\n",maxcount);
    printf("%d\n",maxcountnum);
}
