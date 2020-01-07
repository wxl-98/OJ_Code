/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 118.cpp
*       &Created Time: 2019年11月28日 星期四 11时39分57秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int y, n, s;
	cin >> y;
	n = y - 1900;
	s = n % 12 + 1;
	if (n < 0){
		s += 12;
	}
	switch (s){
		case 1:printf("rat\n");
			   break;
		case 2:printf("ox\n");
			   break;
		case 3:printf("tiger\n");
			   break;
		case 4:printf("rabbit\n");
			   break;
		case 5:printf("dragon\n");
			   break;
		case 6:printf("snake\n");
			   break;
		case 7:printf("horse\n");
			   break;
		case 8:printf("sheep\n");
			   break;
		case 9:printf("monkey\n");
			   break;
		case 10:printf("rooster\n");
			   break;
		case 11:printf("dog\n");
				break;
		case 12:printf("pig\n");
				break;
		default:printf("\n");
				break;

	}
 return 0;
}
