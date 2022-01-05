#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abccccccdd";
    int len = s.length();
    string output;
    for (int i = 0; i < len; i++)
    {
        int count = 1;
        while (i < len - 1 and s[i + 1] == s[i])
        {
            count++;
            i++;
        }

        output += s[i];
        output += to_string(count);
    }

    if (output.length() > len)
    {
        cout << s;
    }
    else
    {
        cout << output;
    }
}