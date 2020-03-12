/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 233.cpp
*       &Created Time:  2020年03月13日 星期五 00时20分34秒  CST  Day/073 and Week/10 of this year
*       &Description:
***********************************************************/


#include <algorithm>
#include <iostream>
using namespace std;

#define MAX_N 10000

int f[MAX_N + 5];
int c[MAX_N + 5][MAX_N + 5]; 

int main() {
    int N, P, H, M;
    int a, b;
    cin >> N >> P >> H >> M;
    for(int i = 1; i <= M; i++) {
        cin >> a >> b;
        if(a > b) swap(a, b);
        if(c[a][b]) continue;
        f[a + 1]--;
        f[b]++;
        c[a][b] = 1;
 	}
 	for(int i = 1; i <= N; i++){
        f[i] += f[i - 1];
        cout << f[i] + H << endl;
 	}
 	return 0;
}
