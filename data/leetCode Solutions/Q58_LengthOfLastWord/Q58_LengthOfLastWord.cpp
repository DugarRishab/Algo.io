#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {

        int count = 0, i;
        //LEGTH OF LAST WORD IS CALCULATED.
        for (i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
                break;
        }
        for (; i >= 0; i--)
        {
            //LAST WORD CAN CONTAIN SPACE AS CHARACTER.
            if (s[i] != ' ')
            {
                count++;
            }
            else
            {
                break;
            }
        }
        return count;
    }
};