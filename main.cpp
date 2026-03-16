#include <iostream> // input output
#include <queue> // queue data structure
#include <vector>
#include <string> // text handling

using namespace std;

void firstNonRepeating(string Set) {
    int count[26] = {0}; // frequency array to store the number of times each element appears
    queue<char> q; //FIFO structure which stores characters with q as the structure name
    string result = ""; //variable to store result

    for (int i = 0; i < Set.length(); i++) {
        char ch = Set[i]; //ch stores the current character iterating through the loop

        // Skip spaces if they are in the input
        if(ch == ' ') continue;

        count[ch - 'a']++; //everytime a character appears increment the value at that index 
        q.push(ch); //character that arrives is added to the back of the queue

        while (!q.empty()) {
            if (count[q.front() - 'a'] > 1) {
                q.pop(); //remove the repeating character from the front
            } else {
                result += q.front(); 
                result += " ";
                break; // stop this step if we find the non repeating character
            }
        }

        if (q.empty()) {
            result += "-1 "; //if queue is empty i.e -1 then no non-repeating characters exist
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
