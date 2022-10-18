#include <bits/stdc++.h>

using namespace std;

/*
    Explanation:
        Every element of string 1 is multiplied with element of string 2 and ans is stored in string as well.
        corresponding to every multiplication a separate string is maintained (i,e, vector strings is taken)
        No. of zeroes required are appended as in multiplication in every string.
        at the all the string elements are added maintaining the carry toi get the final string.
    */

class Solution
{
public:
    string multiply(string num1, string num2)
    {

        int l1, l2;
        // length of both strings.
        l1 = num1.length();
        l2 = num2.length();

        vector<string> v(l1, "");

        // Every element of string 1 is multiplied with element of string 2 and ans is stored in string as well.
        for (int i = l1 - 1; i >= 0; i--)
        {
            int x = l1 - 1 - i;
            while (x)
            {
                v[l1 - 1 - i] += "0";
                x--;
            }
            x = l1 - 1 - i;
            int car = 0;

            for (int j = l2 - 1; j >= 0; j--)
            {
                int val = (((int)num1[i] - 48) * ((int)num2[j] - 48) + car);

                car = val / 10;
                v[x] += (char)((val % 10) + 48);
            }

            if (car > 0)
            {
                v[x] += (char)(car + 48);
            }
        }

        // No. of zeroes required are appended as in multiplication in every string.
        int l = v[l1 - 1].length();

        for (int i = 0; i < l1; i++)
        {
            while (v[i].length() < l)
            {
                v[i] += "0";
            }
        }

        // all the string elements are added maintaining the carry toi get the final string.
        int car = 0;
        string s = "";
        for (int j = 0; j < l; j++)
        {
            int sum = 0;
            for (int i = 0; i < l1; i++)
            {
                sum += (int)(v[i][j]) - 48;
            }
            sum += car;
            car = sum / 10;
            s += char((sum % 10) + 48);
        }
        if (car > 0)
        {
            s += (char)(car + 48);
        }

        reverse(s.begin(), s.end());

        string str = "";
        int c = 0;
        cout << s << " ";
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (c == 0 && s[i] == '0')
                continue;

            c++;
            str += s[i];
        }
        str += s[s.length() - 1];
        return str;
    }
};