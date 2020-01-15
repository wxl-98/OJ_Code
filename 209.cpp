/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 209.cpp
*       &Created Time: 2019年12月04日 星期三 17时58分54秒
*       &Description:
***********************************************************/
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	double a[101];
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
    sort(a, a + n, less<double>());
	for (int i = 0; i < n; i++){
        cout << a[i] << endl;
	}
	return 0;
}
