/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 542-1.cpp
*       &Created Time:  2020年03月25日 星期三 20时08分01秒  CST  Day/085 and Week/12 of this year
*       &Description:
***********************************************************/


#include <bits/stdc++.h>
using namespace std;

int n, h, r;
struct point {
	int num;
	int x, y, z;
}p[1001];
bool flag = false;
bool vis[1001];
queue<point> que;

bool check(int s, int e) {
	if (!vis[e] && sqrt((p[s].x - p[e].x) * (p[s].x - p[e].x) 
	 + (p[s].y - p[e].y) * (p[s].y - p[e].y) + (p[s].z - p[e].z) * (p[s].z - p[e].z)) <= r * 2) {
	 	return true;
	 }
	 return false;
}

void dfs(int num) {
	for (int i = 0; i < n; i++) {
		if (check(num, i)) {
			que.push(p[i]);
			vis[i] = true;
		}
	}
	return ;
}

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		while (!que.empty()) que.pop();
		flag = false;
		scanf("%d %d %d", &n, &h, &r);
		for (int i = 0; i < n; i++) {
			scanf("%d %d %d", &p[i].x, &p[i].y, &p[i].z);
			p[i].num = i;
			vis[i] = false;
		}
		for (int i = 0; i < n; i++) {
			if (p[i].z <= r) {
				que.push(p[i]);
				vis[i] = true;
			}
		}
		point temp;
		while(!que.empty()) {
			temp = que.front();
			que.pop();
			if (temp.z >= h - r) {
				flag = true;
				break;
			}
			dfs(temp.num);
		}
		if (flag) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
