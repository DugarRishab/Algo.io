#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
	string intToRoman(int num)
	{
		int length = 0;
		int num2 = num;
		while (num2 > 0)
		{
			num2 = num2 / 10;
			length++;
		}
		int digit = 0;
		string result = "";

		for (int i = 1; i <= length; i++)
		{
			digit = (int)(num / pow(10, (length - i))) % 10;
			// cout << "digit" << digit << "\n";

			switch(length-i + 1)
			{
				case 4: {
					switch (digit)
					{
					case 1:
						result = result + "M";
						break;
					case 2:
						result = result + "MM";
						break;
					case 3:
						result = result + "MMM";
						break;
					default:
						cout << "Invalid input";
						break;
					}
					break;
				}
				case 3:
				{
					switch (digit)
					{
					case 1:
						result = result + "C";
						break;
					case 2:
						result = result + "CC";
						break;
					case 3:
						result = result + "CCC";
						break;
					case 4:
						result = result + "CD";
						break;
					case 5:
						result = result + "D";
						break;
					case 6:
						result = result + "DC";
						break;
					case 7:
						result = result + "DCC";
						break;
					case 8:
						result = result + "DCCC";
						break;
					case 9:
						result = result + "CM";
						break;
					case 0:
						result = result + "";
						break;
					default:
						cout << "Invalid input";
						break;
					}
					break;
				}
				case 2:
				{
					switch (digit)
					{
					case 1:
						result = result + "X";
						break;
					case 2:
						result = result + "XX";
						break;
					case 3:
						result = result + "XXX";
						break;
					case 4:
						result = result + "XL";
						break;
					case 5:
						result = result + "L";
						break;
					case 6:
						result = result + "LX";
						break;
					case 7:
						result = result + "LXX";
						break;
					case 8:
						result = result + "LXXX";
						break;
					case 9:
						result = result + "XC";
						break;
					case 0:
						result = result + "";
						break;
					default:
						cout << "Invalid input";
						break;
					}
					break;
				}
				case 1:
				{
					switch (digit)
					{
					case 1:
						result = result + "I";
						break;
					case 2:
						result = result + "II";
						break;
					case 3:
						result = result + "III";
						break;
					case 4:
						result = result + "IV";
						break;
					case 5:
						result = result + "V";
						break;
					case 6:
						result = result + "VI";
						break;
					case 7:
						result = result + "VII";
						break;
					case 8:
						result = result + "VIII";
						break;
					case 9:
						result = result + "IX";
						break;
					case 0:
						result = result + "";
						break;
					default:
						cout << "Invalid input";
						break;
					}
					break;
				}
			}
		}

		return result;
	}
};