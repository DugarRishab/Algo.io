class Solution {
public:
     bool isMatch(const string & s, const string & p) {
    vector<bool> flags(s.size()+1, 0);
    flags[0] = 1;
    for (const char & c : p) {
      bool prevFlag = flags[0];
      flags[0] = flags[0] && c == '*';
      for (int j=1; j<=s.size(); ++j) {
        bool currentFlag = flags[j];
        if (c == '*')
          flags[j] = prevFlag || flags[j] || flags[j-1];
        else if (c == '?' || c == s[j-1])
          flags[j] = prevFlag;
        else
          flags[j] = false;
        prevFlag = currentFlag;
      }
    }
    return flags[s.size()];
  }
};