class Solution {
public:
    string convertToTitle(int columnNumber) {
        int x = columnNumber;
        string ans = "";
        vector<char> v;
        v.push_back('Z');
        for(int i = 65;i<=89;i++){
            char a = i;
            v.push_back(a);
        }

        if(x <= 26){
            x = x%26;
            ans += v[x];
            return ans;
        }
        
        while(1){
            int y = x%26;
            ans += v[y];
            x /= 26;
            cout << x << endl;
            if(x <= 26) break;
        }
        x = x%26;
        ans += v[x];
        reverse(ans.begin(), ans.end());
        return ans;
    }
};