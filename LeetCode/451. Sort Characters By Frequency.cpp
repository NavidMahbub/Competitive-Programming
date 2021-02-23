class Solution {
public:
    string frequencySort(string s) {
        
        priority_queue<pair<int,char>> pq;
        
        map<char,int> mp;
        map<char,string> st;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            st[s[i]]+=s[i];
        }
        
        for(auto x : mp){
            pq.push({x.second,x.first});
            //cout<<st[x.first]<<" "<<x.second<<endl;
        }
        string ans;
        while(!pq.empty()){
            int a=(pq.top().first);
            char c=(pq.top().second);
            ans+=st[c];
            //
            pq.pop();
        }
        
        return ans;
    }
};