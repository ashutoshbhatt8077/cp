#include <iostream>
#include <set>

using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, n;
    cin >> x >> n;

    // Set to store the positions of lights (including boundary endpoints 0 and x)
    set<int> lights;
    lights.insert(0);
    lights.insert(x);

    // Multiset to store the lengths of all current segments
    multiset<int> lengths;
    lengths.insert(x);

    for (int i = 0; i < n; ++i) {
        int p;
        cin >> p;

        // Find the adjacent lights around position p:
        // upper_bound(p) gives the first light strictly greater than p (right neighbor)
        auto it_right = lights.upper_bound(p);
        auto it_left = prev(it_right);

        int left = *it_left;
        int right = *it_right;

        // Erase one instance of the old segment length (right - left)
        lengths.erase(lengths.find(right - left));

        // Insert the two newly formed segment lengths
        lengths.insert(p - left);
        lengths.insert(right - p);

        // Add the new light to the set of lights
        lights.insert(p);

        // The maximum length is at the end of the multiset
        cout << *lengths.rbegin() << (i == n - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}