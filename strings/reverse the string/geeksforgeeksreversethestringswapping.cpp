#include <bits/stdc++.h>
using namespace std;

//helper function to reverse a string.
// Note that it takes string as reference.
void revString(string &s, int si, int ei) {
    int i = si;
    int j = ei;
    while (i <= j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int si = 0; //start index
        int ei = -1; // end index

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '.') {
                //whenever a "." is found, update end index and reverse that part
                ei = i - 1;
                revString(s, si, ei);
                //now the start index becomes the index after the dot
                si = i + 1;
                //wait for another dot.
                ei = -1;
            }
        }
        // reverse the last string
        revString(s, si, s.size() - 1);

        //now the individual words are reversed, reverse the whole string to get the result.
        revString(s, 0, s.size() - 1);
        cout << s << endl;