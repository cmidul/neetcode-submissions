class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        sum += mp[s[0]];
        for(int i = 1;i<s.size();i++){
            if(mp[s[i-1]] < mp[s[i]]) sum += (mp[s[i]] - mp[s[i-1]]*2);
            else if(s[i] == 'I') sum += mp[s[i]];
            else if(s[i] == 'V') sum += mp[s[i]];
            else if(s[i] == 'X') sum += mp[s[i]];
            else if(s[i] == 'L') sum += mp[s[i]];
            else if(s[i] == 'C') sum += mp[s[i]];
            else if(s[i] == 'D') sum += mp[s[i]];
            else if(s[i] == 'M') sum += mp[s[i]];

            cout << sum << " ";
        }

        return sum;
    }
};