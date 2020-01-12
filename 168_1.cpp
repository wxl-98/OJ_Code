/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 168_1.cpp
*       &Created Time: 2019年12月06日 星期五 21时50分04秒
*       &Description:
***********************************************************/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	string a[n];

	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (a[i][0] >= 'a' && a[i][0] <= 'z'){
			a[i][0] -= 32;
		}
		for (int j = 1; j < a[i].size(); j++){
			if (a[i][j] >= 'A' && a[i][j] <= 'Z'){
				a[i][j] += 32;
			}
		}
	}


	sort(a, a + n);
	for (int i = 0; i < n; i++){
		cout << a[i] << endl;
	}

	return 0;

}
