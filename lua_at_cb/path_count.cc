
#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <algorithm>

#include <boost/fusion/support/pair.hpp>
#include <boost/fusion/include/pair.hpp>


using namespace std;


int main () {
    string s;
    map<string, int> path_counts;

    while (cin >> s) {
        path_counts[s] += 1;
    }

    typedef pair<int, string> ordered_pair;
    vector<ordered_pair> ordered;
    for (auto it = path_counts.begin(); it != path_counts.end(); it++) {
        ordered.push_back(ordered_pair(it->second, it->first));
    }
    sort(ordered.rbegin(), ordered.rend());

    for (unsigned int i = 0; i < 10; i++) {
        cout << ordered[i].second << " " << ordered[i].first << endl;
    }

    return 0;
}
