/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 172.cpp
*       &Created Time: 2019年11月30日 星期六 14时55分38秒
*       &Description:
***********************************************************/
#include <stdio.h>
#include <string.h>
int main(){
    char name[10][21];
    char index;
    for (int i = 0; i < 10; i++){
        scanf ("%s", name[i]);
    }
    char temp[21];
    for (int i = 0; i < 10; i++){
        index = i;
        for (int j = i + 1; j < 10; j++){
            if (strcmp(name[index], name[j]) > 0){
                index = j;
            }
        }
        strcpy(temp, name[i]);
        strcpy(name[i], name[index]);
        strcpy(name[index], temp);
    }

    for (int i = 0; i < 10; i++){
        printf("%s\n", name[i]);
    }
    return 0;
}
