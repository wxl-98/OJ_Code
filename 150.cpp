/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 150.cpp
*       &Created Time: 2019年12月04日 星期三 14时43分36秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

int main(){
	int n, m;
//	cin >> n >> m;
	int a[205][205];
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < m; i++){
		for (int j = n - 1; j >= 0; j--){
			if (j != n - 1){
				cout << " ";
			}
			cout << a[j][i];
		}
		cout << endl;
	}

	return 0;
}
