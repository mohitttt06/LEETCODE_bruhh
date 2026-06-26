class Solution {
public:
    int romanToInt(string s) {

        map<string,int> mp = {
            {"I",1},{"V",5},{"X",10},{"L",50},{"C",100},{"D",500},{"M",1000},
            
        };


    int a=0;
      for(int i=0;i<s.size();i++)
      {
        if(i+1<=s.size())
        {
        if(mp[string(1, s[i+1])] > mp[string(1, s[i])])
        {
            a=a+mp[string(1,s[i+1])]-mp[string(1,s[i])];
            i=i+1;
            continue;
        }
        }
        a=a+mp[string(1,s[i])];
        
        
      }
        return a;
    }
};
