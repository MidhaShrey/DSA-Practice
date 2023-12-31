// Average Marks
// Write a program to input a name (as a single character) and marks of three tests as m1, m2, and m3 of a student considering all the three marks have been given in integer format. and print the average with the name of the student
// Problem Description: Given an array of marks, find the average mark.

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string name;
	cin>>name;
	float n1,n2,n3;
	cin>>n1>>n2>>n3;
	float avg = (n1+n2+n3)/3;
	cout<<name<<" "<<avg;
	return 0;
}