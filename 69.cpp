/***********************************************************
*       &Author: Wang Xianling     
*       &E-mail: wang_xianling@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 69.cpp
*       &Created Time: 2019年12月06日 星期五 15时35分43秒
*       &Description:
***********************************************************/
#include <iostream>
using namespace std;
int main(){
    int y, m, d;
	cin >> y >> m >> d;
    if (m >= 1 && m <= 12){
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
               if(d >= 1 && d <= 31){
				   cout << "Yes";
			   }
                else{
					cout << "No";
				}            
        }else if(m == 4 || m == 6 || m == 9 || m == 11){
            if(d >= 1 && d <= 30){
				cout << "Yes";
            }
             else{
				 cout << "No";
			 }
        }else if((y % 100 != 0 && y % 4 == 0)||y % 400 ==0){
            if(d >= 1 && d <= 29){
				cout << "Yes";
            }else{
				cout << "No";
            }
        }else if(d >=1 && d <= 28){
			cout << "Yes";
		} else{
			cout << "No";
		}         
      
    }else{
		cout << "No";
	}
    return 0;
}
