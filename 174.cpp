/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 174.cpp
*       &Created Time: 2019年12月04日 星期三 16时25分48秒
*       &Description:
***********************************************************/
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string s;
	getline(cin, s);
    while (s.find(' ') != -1){
        int a = s.find(' ');
        s = s.replace(a, 1, "%20");
    }
    cout << s << endl;

	return 0;
}
