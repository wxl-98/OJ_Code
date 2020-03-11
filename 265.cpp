/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 265.cpp
*       &Created Time:  2020年03月12日 星期四 00时11分39秒  CST  Day/072 and Week/10 of this year
*       &Description:
***********************************************************/


#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAX_N 100000

int pos[MAX_N + 5];
char s[MAX_N + 5], f[MAX_N + 5]; 
int ans = 0;
int main() {
	scanf("%s", s);
	int n = strlen(s);
	int p = 0;
	int h_data;
	for (int i = 0; i < n; i++) {
		if (s[i] == '(') f[++p] = ')', pos[p] = i;
  		else if (s[i] == '[') f[++p] = ']', pos[p] = i;
  		else if (s[i] == '{') f[++p] = '}', pos[p] = i;
  		else {
   			if (p && s[i] == f[p]) {
    			int c_data = i - pos[p] + 1;
    			if (p == 1) {
     				ans = max(ans, h_data + c_data);
     				h_data += c_data; 
    			} else
     				ans = max(ans, c_data);
    				p--;
   			} else h_data = p = 0;
  		}
 	}
 	cout << ans << endl;
}
