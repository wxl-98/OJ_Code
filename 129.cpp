/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 129.cpp
*       &Created Time: 2019年11月27日 星期三 22时07分36秒
*       &Description:
***********************************************************/
#include <iostream>
#include <cinttypes>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	int min;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	min = a[0];
	for (int i = 0; i < n ; i++){
	    if (a[i] < min){
		    min  = a[i];
        }
    }
    cout << min << endl;
    return 0;
}
 // printf("%d",min);
	/*
	 *头文件
int32_t n, a, ans = INT32_MAX;
cin >> n;
for (int i = 0; i < n; i++){
cin >> a;
ans = min(ans , a);
}
cout << ans << endl;


*/
