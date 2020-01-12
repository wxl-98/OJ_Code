/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 166_1.cpp
*       &Created Time: 2019年12月06日 星期五 20时47分24秒
*       &Description:
***********************************************************/
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string a, b;
	int n, sum = 0;
	cin >> a >> n >> b;
	if (a.size() > 100){
		cout << 100 << endl;
	}else {
		cout << a.size() << endl;
	}

	cout << a.insert(n - 1, b) << endl;

	for (int i = a.size() - 1; i >= 0; i--){
		sum++;
		if (a[i] == 'x'){
			cout << sum << endl;
			break;
		}
	}
	return 0;
}
