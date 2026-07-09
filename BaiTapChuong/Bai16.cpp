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
	double s = sqrt(p * (p-a) * (p-b) * (p-c));
	cout << "Dien tich hinh tam giac: " << s << endl;
	cout << "Ban kinh duong tron noi tiep: " << s/p << endl;
	cout << "Ban kinh duong tron ngoai tiep: " << (a * b * c)/ (4 * s) << endl;
}
