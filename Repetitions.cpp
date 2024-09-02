#include <bits/stdc++.h>
using namespace std;

int main() {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    char current;
    int count = 0, answer = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != current) {
            current = s[i];
            count = 0;
        }
        if (s[i] == current) {
            count++;
        }
        answer = max(answer, count);
    }
    cout << answer;
    return 0;
}
 