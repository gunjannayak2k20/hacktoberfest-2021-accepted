
#include <bits/stdc++.h>

using namespace std;

    vector<vector<string>> groupAnagrams(vector<string> strs) {
        unordered_map<string, vector<string>>mp;vector<vector<string>> v;
        for(string x: strs)
        {
            string s=x;
            sort(s.begin(),s.end());
            mp[s].push_back(x);
        }
        for(auto &x:mp)
        {
            v.push_back(x.second);
        }
        return v;
        
    }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<string> s = {"eat","tea","tan","ate","nat","bat"};
        vector<vector<string>> ans = groupAnagrams(s);
        for(auto &x:ans)
        {
            for(auto &y:x)
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}
