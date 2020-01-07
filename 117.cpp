/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 117.cpp
*       &Created Time: 2019年11月28日 星期四 10时42分34秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
int a, y, sum = 0;
cin >> a;
y = a;
while(y){
   sum = sum * 10 + y % 10;
   y = y / 10;
}

    cout << (sum == a ? "YES" : "NO") << endl;
/*if (sum == a){
   cout << "YES" << endl;
}else {
	cout << "NO" << endl;
}*/
}
