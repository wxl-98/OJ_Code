/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 135.cpp
*       &Created Time: 2019年12月03日 星期二 22时35分31秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

int main(){
	int x, y, m, d;
	int a[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin >> x >> y >> m >> d;
	d += x;
	for (int i = y;  ; i++){
		if (y % 100 != 0 && y % 4 == 0 || y % 400 ==0){
			a[2] = 29;
		}else {
			a[2] = 28;
		}
	
		for (int j = m; j <=12; j++){
			if (d - a[j] < 0){
				cout << y << " " << m << " " << d << endl;
				return 0;
			}
			d -= a[j];
			m += 1;
			m %= 12;
		}
		y += 1;
	}
	cout << y << " " << m << " " << d << endl;

	return 0;
}
