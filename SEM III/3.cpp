#include <bits/stdc++.h>

using namespace std;

/*
You will be given an array of N integers and you have to print the integers in the reverse order.

Input Format
The first line of the input contains N ,where N  is the number of integers. The next line contains  N space-separated integers.

Constraints
1≤N≤1000
1≤A[i]≤10000 where A[i] is the ith integer in the array.
*/

int main() {
    int a, rem, sum = 0;
    cin>>a;
    while (a--) {
        int n;
        cin>>n;
        while(n!=0) {
            rem = n % 10;
            sum = sum * 10 + rem;
            n = n / 10;
        }
        cout<<sum<<endl;
    }
    return 0;
}