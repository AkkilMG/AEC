#include <bits/stdc++.h>

using namespace std;

/*
There is a group of N friends who wish to enroll in a course together. The course has a maximum capacity of M students that can register for it. If there are K other students who have already enrolled in the course, determine if it will still be possible for all the N friends to do so or not.

Input Format
	The first line contains a single integer T - the number of test cases. Then the test cases follow.
	Each test case consists of a single line containing three integers N, M and K - the size of the friend group, the capacity of the course and the number of students already registered for the course.

Output Format
For each test case, output Yes if it will be possible for all the N friends to register for the course. Otherwise output No.
You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, YES will be considered identical).

Constraints
	1 ≤T ≤1000
	1 ≤N ≤M ≤100
	0 ≤K ≤M
*/

int main() {
	int t,N,M,K,c;
	cin>>t;
	while(t--) {
		cin>>N>>M>>K;
		c=K+N;
		if(c<=M) {
			cout<<"Yes"<<endl;
		} else {
			cout<<"No"<<endl;
		}
	}
    return 0;
}