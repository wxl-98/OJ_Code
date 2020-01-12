/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 167.cpp
*       &Created Time: 2019年12月06日 星期五 21时12分57秒
*       &Description:
***********************************************************/
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string a, b;
	int n, sum;
	cin >> a >> n >> b;
	cout << a.size() << endl;
	for (int i = 0; i <= a.size(); i++){
		sum++;
		if(a[i] == 'a'){
			cout << sum << endl;
			break;
		}
	}

	cout <<	a.insert(n - 1, b) << endl;

return 0;
}
