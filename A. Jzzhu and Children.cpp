#include <iostream>
#include <queue>
 
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    
    queue<pair<int, int>> q; // {index, wanted}
    
    for (int i = 1; i <= n; ++i) {
        int wanted;
        cin >> wanted;
        q.push({i, wanted});
    }
    
    int last_child = 1;
    
    while (!q.empty()) {
        auto current = q.front();
        q.pop();
        
        last_child = current.first;
        
        if (current.second > m) {
            q.push({current.first, current.second - m});
        }
    }
    
    cout << last_child << endl;
    return 0;
}
