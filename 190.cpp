/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 190.cpp
*       &Created Time: 2019年12月02日 星期一 17时39分25秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
#define MAX_N 8000000

int prime[MAX_N + 5] = {1, 1};

int main() {
    int n;
    cin >> n;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) continue;
        for (int j = 2; i * j <= n; j++) {
            prime[i * j] = 1;
        }
    }
    int sum = 0;
    for (int i = 2; i * 2 <= n; i++) {
   if (!prime[i] && !prime[n - i]) {
            sum++;
        }
    }
    cout << sum << endl;
	return 0;
}
