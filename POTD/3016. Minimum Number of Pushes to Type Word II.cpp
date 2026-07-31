class Solution {
public:
    int minimumPushes(string word) {


        int n= word.size();
        int sum=0;
        int l=0;

        if(n<=8) return n;

        set <char> s(word.begin(),word.end());

        map <char,int> mp;

        for(int i=0;i<word.size();i++)
        {
            mp[word[i]]++;
        }
        
        vector <int> v;

        for(auto it:mp)
        {
            v.push_back(it.second);
        }

        sort(v.begin(),v.end(),greater<int>());

        if(s.size()<=8)
        {
            for(auto it:mp)
            {
                l=l+it.second;

            }

            return l;
        }

        else if(s.size()>8)
        {
            int k=s.size()-8;
            int c=2;

            for(int i=8;i<v.size();i++)
            {
                if(i>8&&i%8==0)
                {

                    c=c+1;


                }
                v[i]=v[i]*c;


            }

            for(int i=0;i<v.size();i++)
            {
                sum=sum+v[i];
            }

               

            


        }

        return sum;


        



        
        
        
    }
};
