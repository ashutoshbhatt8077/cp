#include<bits/stdc++.h>
using namespace std;
// Disjoint Set Union (DSU) or Union-Find data structure
class DSU {
public:
    vector<int> parent, rank, size;

    DSU(int n) {
        parent.resize(n+1);
        rank.resize(n+1, 0);
        size.resize(n+1, 1);
        for (int i = 0; i <= n; ++i) {
            parent[i] = i;
        }
    }

    int findParent(int x) {
        if (parent[x] != x) {
            parent[x] = findParent(parent[x]);
        }
        return parent[x];
    }

    bool unionSetByRank(int x, int y) {
        int rootX = findParent(x);
        int rootY = findParent(y);
        if (rootX == rootY) return false; // already connected

        if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
        return true; // merge happened
    }
};
// Function to check if two elements are in the same set
bool areInSameSet(DSU &dsu, int x, int y) {
    return dsu.findParent(x) == dsu.findParent(y);
}
int main() {
    int n = 10; // Number of elements
    DSU dsu(n);
    
    // Example usage
    dsu.unionSetBySize(1, 2);
    dsu.unionSetByRank(2, 3);
    dsu.unionSetByRank(4, 5);
    
    cout << "Are 1 and 3 in the same set? " << (areInSameSet(dsu, 1, 3) ? "Yes" : "No") << endl;
    cout << "Are 1 and 4 in the same set? " << (areInSameSet(dsu, 1, 4) ? "Yes" : "No") << endl;
      dsu.unionSetByRank(1, 4);
    cout << "Are 1 and 4 in the same set? " << (areInSameSet(dsu, 1, 4) ? "Yes" : "No") << endl;
    
    return 0;
}