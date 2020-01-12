/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 166.cpp
*       &Created Time: 2019年12月06日 星期五 20时30分33秒
*       &Description:
***********************************************************/
#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string a, b;
	int n;
	cin >> a >> n >> b;
	if (a.size() > 100){
		cout << 100 << endl;
	} else {
		cout << a.size() << endl;
	}

	cout <<	a.insert(n - 1, b) << endl;
	int ans = 0;
	for (int i = a.size() - 1; i >= 0; i--){
		ans += 1;
		if (a[i] == 'x'){
			cout << ans << endl;
			break;
		}
	}
	return 0;
}
