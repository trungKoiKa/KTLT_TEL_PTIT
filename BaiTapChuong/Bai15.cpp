/**
 ******************************************************************************
 * @author: Hoang Trung Anh
 * @date:   09/07/2026
 ******************************************************************************
 **/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c; cin >> a >> b >> c;
	cout << "Chu vi hinh tam giac: " << a + b + c << endl;
	double p = (a+b+c)/2;
	cout << "Dien tich hinh tam giac: " << sqrt(p * (p-a) * (p-b) * (p-c)) << endl;
}
