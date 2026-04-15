#include <stdio.h>

int main()
{
    int guess=0,answer=0,number=0; //각 변수를 선언과 함께 초기화
    scanf("%d",&answer); //정답을 입력
    do{ //반복문
        scanf("%d",&guess); //추측값 입력
        if (guess == answer) //추측값이 정답과 같다면
            printf("%d==?\n",guess); //같다는 표시 출력
        else if (guess > answer) //추측값이 정답보다 크다면
            printf("%d>?\n",guess); //크다는 표시 출력
        else //이외의 경우 추측값이 정답보다 작다면
            printf("%d<?\n",guess); //작다는 표시 출력
        number += 1; //1번 반복할때마다 몇번반복했는지 저장
    } while (guess != answer); //조건문
    printf("%d",number); //몇번 반복인지 출력
    return 0;
}
