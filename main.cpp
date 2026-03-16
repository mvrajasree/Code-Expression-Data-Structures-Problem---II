#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

void firstNonRepeating(string A) {
    int count[26] = {0};
    queue<char> q;
    string result = "";

    for (int i = 0; i < A.length(); i++) {
        char ch = A[i];

        // Skip spaces if they are in the input
        if(ch == ' ') continue;

        count[ch - 'a']++;
        q.push(ch);

        while (!q.empty()) {
            if (count[q.front() - 'a'] > 1) {
                q.pop();
            } else {
                result += q.front();
                result += " ";
                break;
            }
        }

        if (q.empty()) {
            result += "-1 ";
        }
    }
    cout << "Step-by-step result: " << result << endl;
}

int main() {
    string userInput;
    
    cout << "Enter the character stream: ";
    // Use getline(cin, userInput); if the stream has spaces
    cin >> userInput; 
    
    firstNonRepeating(userInput);

    return 0;
}
