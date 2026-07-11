class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {


        map <int,int> mp1;

        for(int i=0;i<ransomNote.size();i++)
        {
            mp1[ransomNote[i]]++;
        }

        map <int , int > mp2;

        for(int i=0;i<magazine.size();i++)
        {
            mp2[magazine[i]]++;
        }

        bool ans = false;

        for(int i=0;i<ransomNote.size();i++)
        {

            if(mp1[ransomNote[i]]==mp2[ransomNote[i]])
            {
                ans=true;
            }
            else if(mp2[ransomNote[i]]>mp1[ransomNote[i]])
            {
                ans=true;
            }
            else if(mp1[ransomNote[i]]>mp2[ransomNote[i]])
            {
                ans=false;
                break;
            }
            else continue;

        }

        if(ans==true) return true;

        else return false;






        
    }
};
