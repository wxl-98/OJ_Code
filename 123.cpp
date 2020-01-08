/***********************************************************
*       &Author: Wang xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 123.cpp
*       &Created Time: 2019年11月27日 星期三 13时03分04秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	if (b - a > d - c) swap(a, c), swap(b, d);
    cout << (a >= c && b <= d ? "YES" : "NO") << endl;
/*	if (a >= c && b <= d){
		cout << "YSE" << endl;
	} else {
		cout << "NO" << endl;
	}
*/

/*	if (a >= c && b <= d || a <= c && b >= d){
		printf("YES");	}
	else {
		printf("NO");
	}*/
	return 0;
}
