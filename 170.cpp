/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 170.cpp
*       &Created Time: 2019年12月06日 星期五 22时15分19秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; i++){
		cin >> s[i];
		while (s[i].find("Ban_smoking") != -1){
			int a = s[i].find("Ban_smoking");
			s[i].replace(a, 11, "No_smoking");
		}
	}

	for (int i = 0; i < n; i++){
		cout << s[i] << endl;
	}
return 0;
}
