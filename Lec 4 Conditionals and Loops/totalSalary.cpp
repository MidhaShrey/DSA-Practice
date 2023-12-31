#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main()
{
	int basic,hra,da,allow,pf;
	char grade;
	cout<<"Enter basic salary: ";
	cin>>basic;
	cout<<"Enter Grade: ";
	cin>>grade;
	if(grade == 65){ //A
		allow = 1700;
	}
	if(grade == 66){ //B
		allow = 1500;
	}
	if(grade == 67){ //C
		allow = 1300;
	}
	hra = 0.20 * basic;
	da = 0.50 * basic;
	pf = 0.11 * basic;
	int total = (int) round(basic + hra + da + allow - pf);
	cout<<total;
	return 0;
}