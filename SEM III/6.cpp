#include <bits/stdc++.h>

using namespace std;


/*
Chetan is playing a videogame, and is getting close to the end. He decides to finish the rest of the game in a single session.
There are X levels remaining in the game, and each level takes Chetan Y minutes to complete. To protect against eye strain, Chetan also decides that every time he completes 3 levels, he will take a Z minute break from playing. Note that there is no need to take this break if the game has been completed.
How much time (in minutes) will it take Chetan to complete the game?

Input Format
•	The first line of input will contain a single integer T, denoting the number of test cases.
•	The first and only line of input will contain three space-separated integers X, Y, and Z.

Output Format
For each test case, output on a new line the answer — the length of Chetan’s gaming session.

Constraints
•	1≤T≤100
•	1≤X≤100
•	5≤Y≤100
•	5≤Z≤15
*/

int main() {
    int t,x,y,z,sum,d,ld;
    cin>>t;
    while(t!=0){
        cin>>x>>y>>z;
        if(x<=3){
            sum=x*y;
        }else{
            ld=x%3;
            d=x/3;
            if(ld!=0){
                sum=(ld*y)+(d*3*y)+(d*z);
            }else{
                sum=(d*3*y)+((d-1)*z);
            }
        }
        cout<<sum<<endl;
        t--;
    }
    return 0;
}