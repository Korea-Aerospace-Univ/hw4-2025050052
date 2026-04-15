#include <stdio.h>

int main()
{
    int N=0, count=0, maxcount=0, countnum=0, maxcountnum=0, i=0;
    char answer;
    scanf("%d\n", &N);
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
        else{
            count=0;
            countnum=0;
        }
    }
    printf("%d\n",maxcount);
    printf("%d\n",maxcountnum);
}
