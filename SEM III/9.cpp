#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
There are N students in a class, where the i-th student has a score of Ai.
The i-th student will boast if and only if the number of students scoring less than or equal to Ai is greater than the number of students scoring greater than Ai.
Find the number of students who will boast.

Input Format
•	The first line contains T - the number of test cases. Then the test cases follow.
•	The first line of each test case contains a single integer N - the number of students.
•	The second line of each test case contains N integers 1,2,…,A1,A2,…,AN - the scores of the students.

Output Format
For each test case, output in a single line the number of students who will boast.

Constraints
•	1≤T≤1000
•	1≤N≤100
•	0≤Ai≤100
*/

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,current=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=n/2;i>=0;i--){
            if(a[i] != a[n/2]){
                current=i+1;
                break;
            }
        }
        cout<<n-current<<endl;
    }
    return 0;
}