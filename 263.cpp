/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 263.cpp
*       &Created Time:  2020年02月08日 星期六 01时08分21秒  CST  Day/039 and Week/05 of this year
*       &Description:
***********************************************************/


#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

#define MAX_N 20

int arr[MAX_N + 5];

int val(int *arr, int n) {
    int temp = 0;
    stack<int> s;
    for (int i = 0; i < n; i++) {
        while (temp < arr[i]) s.push(++temp);
        if (s.top() - arr[i]) return 0;
        s.pop();
    }
    return 1;
}


int main() {
    int n, cnt = 20;
    cin >> n;
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    do{
        if (val(arr, n)) {
            for (int i = 0; i < n; i++) {
                cout << arr[i];
            }
            cout << endl;
            cnt--;
        }
    } while (next_permutation(arr, arr + n) && cnt);
    return 0;
}
