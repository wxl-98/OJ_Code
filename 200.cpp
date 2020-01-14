/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 200.cpp
*       &Created Time: 2019年12月04日 星期三 16时43分36秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	double a = 4, b = 7;
	double sum = a / b;

	for (int i = 1; i < n; i++){
		b = a + b;
		a = b - a;
		sum +=  a / b ;

	}

int	c = a, d = b;
	printf("%d/%d\n", c, d);
	printf("%.2lf", sum);
return 0;
}
