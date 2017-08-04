//
//  main.c
//  githubtest
//
//  Created by Seungjun on 2017. 8. 5..
//  Copyright © 2017년 Seungjun. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    char str[100] = {0};
    int j = 0;

    printf("github test1\n");  //이제 있음
    printf("input >>");
    scanf("%s", str);
    printf("output : %s\n", str);
    //printf("branch 전환\n");
    //printf("1\n");
    printf("input j >>");
    scanf("%d", &j);
    for(int i = 0; i < j; i++)
        printf("%d", i + 1);
    printf("\n");


    return 0;
}
//commit을 하면 수정사항이 로컬로 들어가고 push를 하면 commit한게 원격저장소로 올라가는듯
//merge from branch하면 예를들어 발전 덜된거 --->> 발전된거
//덜된거에서 merge from branch로 발전된거를 선택하면 덜된거에 발전된거가 추가되는듯
