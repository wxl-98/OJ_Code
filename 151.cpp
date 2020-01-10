/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 151.cpp
*       &Created Time: 2019年11月27日 星期三 22时32分56秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
	char a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a == 'Y' && c == 'H' || a == 'H' && c == 'O' || a == 'O' && c == 'Y'){
		if((a == 'Y' && d == 'H' || a == 'H'&& d == 'O' || a == 'O'&& d == 'Y')|| a ==b){
			printf("MING");
		}else if(d == 'Y' && a == 'H' || d == 'H'&& a == 'O' || d == 'O'&& a == 'Y'){
			if (b == 'Y' && d == 'H' || b == 'H'&& d == 'O' || b == 'O'&& d == 'Y'){
				printf("MING");
			}else if ((d == 'Y' && b == 'H' ||d == 'H'&& b == 'O' || d == 'O'&& b == 'Y')||d == b){
				printf("LIHUA");
			}
		}
	}else if (a == c){
		if (b == 'Y' && d == 'H' || b == 'H'&& d == 'O' || b == 'O'&& d == 'Y'){
             printf("MING");
		}else if (d == 'Y' && b == 'H' ||d == 'H'&& b == 'O' || d == 'O'&& b == 'Y'){
			printf("LIHUA");
		}else if (b == d){
			printf ("TIE");
		}
	}else if (c == 'Y' && a == 'H' || c == 'H'&& a == 'O' || c == 'O'&& a == 'Y'){
		if ((c == 'Y' && b == 'H' ||c == 'H'&& b == 'O' || c == 'O'&& b == 'Y')||c == b){
			printf("TIE");
		}else if(b == 'Y' && c == 'H' || b == 'H'&& c == 'O' || b == 'O'&& c == 'Y'){
			if ((b == 'Y' && d == 'H' || b == 'H'&& d == 'O' || b == 'O'&& d == 'Y')|| b == d){
				printf("MING");
			}else if (d == 'Y' && b == 'H' ||d == 'H'&& b == 'O' || d == 'O'&& b == 'Y'){
				printf ("LIHUA");
			}
		}
	}
    
return 0;
}
