#include <iostream>
#include <map>
#include <vector>

using namespace std;

int findModeFrequency(const vector<int>& values) {
    // Create a frequency map to store the count of each value
    map<int, int> freqMap;

    // Calculate the frequency of each value using iterators
    for (auto it = values.begin(); it != values.end(); ++it) {
        freqMap[*it]++;
    }

    // Find the mode frequency
    int maxFrequency = 0;
    int modeFrequency = 0;

    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        int frequency = it->second;
        if (frequency > maxFrequency) {
            maxFrequency = frequency;
            modeFrequency = it->first;
        }
    }

    return modeFrequency;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> values(N);
        for (int i = 0; i < N; i++) {
            cin >> values[i];
        }

        int modeFrequency = findModeFrequency(values);
        cout << modeFrequency << endl;
    }

    return 0;
}
