/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 126.cpp
*       &Created Time: 2019年11月27日 星期三 11时02分37秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
#define PI 3.14
int main(){
	double r1, r2;
    cin >> r1 >> r2;
//	scanf("%lf %lf", &r1, &r2);
    printf("%.2f", PI * r1 * r1 - PI * r2 * r2);
    return 0;
}
