#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    vector<int> count(7, 0); // counts for 1-6 (indexes 1-6)
    bool valid = true;
    
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (num < 1 || num > 6) {
            valid = false;
        } else {
            count[num]++;
        }
    }
    
    // Basic checks
    if (!valid || n % 3 != 0 || count[1] != n/3) {
        cout << -1 << endl;
        return 0;
    }
    
    // Check if we can form the groups
    int g124 = min({count[1], count[2], count[4]});
    count[1] -= g124;
    count[2] -= g124;
    count[4] -= g124;
    
    int g126 = min({count[1], count[2], count[6]});
    count[1] -= g126;
    count[2] -= g126;
    count[6] -= g126;
    
    int g136 = min({count[1], count[3], count[6]});
    count[1] -= g136;
    count[3] -= g136;
    count[6] -= g136;
    
    // Verify all counts are zero
    bool possible = true;
    for (int i = 1; i <= 6; ++i) {
        if (count[i] != 0) {
            possible = false;
            break;
        }
    }
    
    if (!possible) {
        cout << -1 << endl;
        return 0;
    }
    
    // Output the groups
    for (int i = 0; i < g124; ++i) {
        cout << "1 2 4" << endl;
    }
    for (int i = 0; i < g126; ++i) {
        cout << "1 2 6" << endl;
    }
    for (int i = 0; i < g136; ++i) {
        cout << "1 3 6" << endl;
    }
    
    return 0;
}
