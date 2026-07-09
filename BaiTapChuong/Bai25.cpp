/**
 ******************************************************************************
 * @author: Hoang Trung Anh
 * @date:   09/07/2026
 ******************************************************************************
 **/
#include<bits/stdc++.h>
using namespace std;

int main(){
	double t = 0.32;
	double e = 2.7;
	double E = 60;
	double R = 50;
	double C = 220e-6;
	double i = E * (pow(e, -t / (R/C) )) / R;
	cout << "Cuong do dong dien V: " <<  i << endl;
	cout << "Hieu dien the qua tu: "  << E - i * R << endl;
}
