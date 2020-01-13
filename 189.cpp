/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 189.cpp
*       &Created Time: 2019年12月05日 星期四 11时49分41秒
*       &Description:
***********************************************************/
//#include <iostream>
//#include <cstdio>
#include <stdio.h>
//using namespace std;

int binary_search(int *arr, int n, int x){
	int head = 1, tail = n, mid;
	while (head <= tail){
		mid = (head + tail) / 2;
		if (arr[mid] == x) return mid;
		if (arr[mid] < x) head = mid + 1;
		else tail = mid - 1;
	}
	return 0;
}

int arr[1000001];
int main(){
	int n, k, a;
  //cin >> n >> k;
    while(scanf("%d %d", &n, &k) !=	EOF){
		for (int i = 1; i <= n; i++){
		  scanf("%d", &arr[i]);
		}
       
		for (int j = 1; j <= k; j++){
	        scanf("%d", &a);
			printf("%d", binary_search(arr, n, a));
			if (j <= k - 1){
				printf (" ");
			}
		}
	}
	return 0;
}
