/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 212.cpp
*       &Created Time: 2019年11月30日 星期六 22时20分21秒
*       &Description:
***********************************************************/
#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char name[11][21];
	char index;
	for (int i = 0; i < 10; i++){
		cin >> name[i];
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
	//	printf ("%s\n", name[i]);
	}
    for (int i = 0; i < 10; i++){
	printf("%s\n",name[i]);
	}

return 0;
}
