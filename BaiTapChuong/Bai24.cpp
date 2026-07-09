/**
 ******************************************************************************
 * @author: Hoang Trung Anh
 * @date:   09/07/2026
 ******************************************************************************
 **/
#include<bits/stdc++.h>
using namespace std;

int main(){
	double t = 0.55;
	double e = 2.7;
	double E = 60;
	double R = 50;
	double C = 220e-6;
	cout << "Hieu dien the V: " << E * (1 - pow(e, -t / (R/C) )) / R << endl;
}
