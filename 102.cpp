/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 102.cpp
*       &Created Time: 2019年11月26日 星期二 20时33分32秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	float a, b, c, t, s;
	cin >> a >> b >> c >> t;
	s =(1 - (1/a + 1/b)* t) / (1/a + 1/b - 1/c) + t;
	printf("%.2f", s);
    return 0;

}
