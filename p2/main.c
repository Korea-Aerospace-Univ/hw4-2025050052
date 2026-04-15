#include <stdio.h>

int main()
{
    int N=0, count=0, maxcount=0, countnum=0, maxcountnum=0, i=0; //각 변수들을 선언함과 동시에 0으로 초기화
    char answer; //변수선언
    scanf("%d", &N); //문자를 몇개 받을지 입력
    getchar(); //엔터 받아주기
    for(i = 0; i < N; i++) { //입력받을 문자만큼 반복
        scanf("%c", &answer); //문자를 하나 입력받음
        
        if(answer >= 'a' && answer <= 'z') { //소문자면 
            count += 1; //소문자 카운트를 올리고
            countnum = 0; //연속되는 숫자카운트는 초기화
            if(count > maxcount) //소문자카운트가 최대 연속했던 갯수보다 높아지면
                maxcount = count; //맥스카운트에 그 카운트수 저장
        }
        else if(answer >= '0' && answer <= '9') { //숫자면
            countnum += 1; //숫자카운트를 올리고
            count = 0; //연속되는 소문자카운트는 초기화
            if(countnum > maxcountnum) //숫자카운트가 최대 연속했던 갯수보다 높아지면
                maxcountnum = countnum; //맥스카운트에 그 카운트수 저장
        }
        else{ //둘다 아닌 이상한 수 라면
            count=0;
            countnum=0;//두 카운트 모두 0으로 초기화
        }
    }
    printf("%d\n",maxcount);
    printf("%d\n",maxcountnum);//각 최대로 연속했던 갯수만큼 출력
}
