#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int count = 1, max_count, max_index = 0;
    string s;
    cout << "Enter a word: "; 
    cin >> s;
    cout << endl;

    vector<int> frequencies;
    sort(s.begin(), s.end());

    // Count the frequency of each character
    for (int i = 0; i < s.size(); i++) {
        if (i < s.size() - 1 && s[i] == s[i + 1]) {
            count++;
        } else {
            frequencies.push_back(count);
            count = 1;
        }
    }

    // Find the maximum frequency
    max_count = frequencies[0];
    for (int i = 1; i < frequencies.size(); i++) {
        if (max_count < frequencies[i]) {
            max_count = frequencies[i];
            max_index = i;
        }
    }

    // Output the most repeating letter and its frequency
    cout << "Most repeating letter: " << s[max_index] << " with frequency: " << max_count << endl;

    return 0;
}
