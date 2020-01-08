/***********************************************************
*       &Author: wangxianling     
*       &E-mail: wangxianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 127.cpp
*       &Created Time: 2019年11月27日 星期三 14时22分25秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int x, n;
	double sum;
	cin >> x >> n;
	sum = x;
	for (int i = 1; i <= n; i++){
		sum = sum * (1 + 0.06);
	}
    cout << (int)sum << endl;
	return 0;
}
