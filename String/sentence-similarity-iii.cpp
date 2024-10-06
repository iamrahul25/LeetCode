//Link: https://leetcode.com/problems/sentence-similarity-iii/

class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
      int n=s1.size();
      int m=s2.size();
      vector<string> st1;  
      vector<string> st2;
      string a="";
      for(int i=0;i<n;i++)
      {
         if(s1[i]==' ')
         {
            st1.push_back(a);
            a="";
         }
         else
         {
            a+=s1[i];
         }
      } 
      st1.push_back(a); 
      string b="";
      for(int i=0;i<m;i++)
      {
         if(s2[i]==' ')
         {
            st2.push_back(b);
            b="";
         }
         else
         {
            b+=s2[i];
         }
      } 
      st2.push_back(b);
    int start1=0,start2=0,end1=st1.size()-1,end2=st2.size()-1; 
    while(start1<=end1 && start2<=end2)
    {
       if(st1[start1]==st2[start2])
       {
          start1++;
          start2++;
       } 
       else if(st1[end1]==st2[end2])
       {
        end1--;
        end2--;
       }
       else
       {
           return false;
       }
    }
    return true;
    }
};
