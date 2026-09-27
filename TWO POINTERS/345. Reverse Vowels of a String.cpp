class Solution {
public:
    string reverseVowels(string s) {

       vector <char> v;

       vector <int> a;

       for(int i=0;i<s.size();i++)
       {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            v.push_back(s[i]);
            a.push_back(i);
        }
       }

       int l=0;
       int r=v.size()-1;

       while(l<r)
       {
        if(l==r) break;
        char temp = v[l];
        v[l]=v[r];
        v[r]=temp;

        l++;
        r--;
       }

      

       if(v.size()==0) return s;


       

       for(int i=0;i<a.size();i++)
       {
          s[a[i]]=v[i];
       }

       return s;
        

        


        
    }
};
