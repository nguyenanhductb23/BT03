#include <iostream>
#include <string>

using namespace std;
bool doiXung(string s)
{
    int len = s.length();
    for (int i = 0; i < len/2; i++)
        if (s[i] != s[len-1-i]) return false;
    return true;
}
int main()
{
    string s;
    getline (cin, s);
    if (doiXung(s) == true) cout << "Yes";
    else cout << "No";
    return 0;
}