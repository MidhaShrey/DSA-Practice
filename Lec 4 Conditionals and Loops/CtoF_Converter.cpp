#include<bits/stdc++.h>
using namespace std;

int main()
{
	// temp is given in fahrenheit
	int s,e,w;//s start of temp, e end point of temp, w step size;
	// convert fahrenheit to celsius
	cin>>s>>e>>w;
	int celsius;
	while (s<=e)
	{
		celsius = ((5*(s-32))/9);
		cout<<s<<" "<<celsius<<endl;
		s = s + w;
	}
	return 0;
}