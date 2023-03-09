#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
There is a frog initially placed at the origin of the coordinate plane. In exactly 1 second, the frog can either move up 1 unit, move right 1 unit, or stay still. In other words, from position (x,y), the frog can spend 1 second to move to:
•	(x+1,y)
•	(x,y+1)
•	(x,y)
After T seconds, a villager who sees the frog reports that the frog lies on or inside a square of side-length s with coordinates (X,Y), (X+s,Y), (X,Y+s), (X+s,Y+s). Calculate how many points with integer coordinates on or inside this square could be the frog's position after exactly T seconds

Input Format:
The first and only line of input contains four space-separated integers: X, Y, s, and T.

Output Format:
Print the number of points with integer coordinates that could be the frog's position after T seconds.

Constraints:
0≤X,Y≤100
1≤s≤100
0≤T≤400
Note that the Expected Output Feature for Custom Invocation is not supported for this contest. 
*/

int main() {
    int x, y, s, t;
    cin >> x >> y >> s >> t;
    int p, d;
    p = t - (y - 1);
    if(s + 1 < p) {
        d = s + 1;
    } else {
        d = p;
    }
    int count = 0;
    for(int i = y; i <= y + d - 1; i++) {
        if( (t + 1 - x - i) < (s + 1) && (t + 1 - x - i) > 0) {
            count+= t + 1 - x - i;
        } else if(t + 1 - x - i >= s + 1) {
            count+= s + 1;
        } else {
            count+= 0;
        }
    }
    cout << count;
    return 0;
}