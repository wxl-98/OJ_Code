/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 121.cpp
*       &Created Time: 2019年11月27日 星期三 12时34分05秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	char a, b;
	cin >> a >> b;
	if (a == b){
		printf("TIE");
	}else if ((a == 'O' && b == 'Y') ||( a == 'Y' && b == 'H')||( a == 'H' && b == 'O')){
		printf("MING");
	}else {
		printf ("LI");
	}
return 0;

}
