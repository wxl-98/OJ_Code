/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 145.cpp
*       &Created Time: 2019年11月28日 星期四 16时06分57秒
*       &Description:
***********************************************************/
#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n, max;
	char name[100], name1[100];
	cin >> n;
	for (int i = 0; i < n ; i++){
		cin >> name;
	
		if (strlen(name) > max){
			max = strlen(name);
			strcpy(name1, name);
		//	printf ("%s", name[j]);
		}
	}
	printf ("%s",name1);
	return 0;
}
