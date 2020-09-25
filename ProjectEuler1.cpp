#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count, i;
    n = 1000;
    count = 0;
    for (i=0; i<n; i++) {
        if (i % 3 == 0) {
            count += i;
        } else if (i % 5 == 0) {
            count += i;
        }

    }
    cout << count << endl;   
    
    
    return 0;
}
