# Code-Expression-Data-Structures-Problem---II
Problem 2: Given a stream of characters, print the first non-repeating character at every step.
If no such character exists, print -1.

Ex:  Input : aabc   Output :  a -1 b b

Ex:  Input  :  aabb  Output:  a -1 b -1
#Solution
1. Create a Frequency Array of size 26 (initialized to 0) to store character counts.

2. Create a Queue to maintain the order of arrival of characters.

3. Initialize an empty string result to store the output.

4. Iterate through the string Set:

   For each character ch in the stream:

   Increment its count in the frequency array using the index ch - 'a'.

   Push the character ch into the queue.

5. Clean the Queue (Inner Loop):

   While the queue is not empty:

     Check the frequency of the character at the front of the queue.

     If the frequency is greater than 1, it is a repeating character. Pop it from the queue.

     If the frequency is exactly 1, this is the first non-repeating character. Append it to result and break the inner loop.

6. Handle Empty Queue:

   If the queue becomes empty after cleaning, it means no non-repeating character exists at this step. Append "-1" to result.

7. Output: Print the final result string.
