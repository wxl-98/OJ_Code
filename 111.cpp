/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 111.cpp
*       &Created Time: 2019年11月26日 星期二 21时50分06秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
/*	if (a <= 3){
		cout <<13 + 1<<endl;
	}else{
		cout<<13+(a-3)*2.3+1<<endl;
	}
*/
    cout << (a <= 3 ? 13 + 1 : 13 + (a - 3) * 2.3 + 1) << endl;

	return 0;

}
