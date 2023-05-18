class Solution {
public:
    char findTheDifference(string s, string t) {
        int n1 = s.length();
    int n2 = t.length();
    // sort(s.begin(),s.end());
    // sort(t.begin(),t.end());
    
    
    int freqt[128] = {0};
    // char ans = ' ';
    for(int i = 0;i<n2;i++)
    {
        freqt[t[i] - '0']++;
    }
    for(int i = 0;i<n1;i++)
    {
        freqt[s[i] - '0']--;
    }
    char ans = ' ';
    for(int i = 0;i<128;i++)
    {
        if(freqt[i] == 1){
            ans = char(i + '0');
        }
    }
        
     int freqt[26] = {0};
    // char ans = ' ';
    for(int i = 0;i<n2;i++)
    {
        freqt[t[i] - 'a']++;
    }
    for(int i = 0;i<n1;i++)
    {
        freqt[s[i] - 'a']--;
    }
    char ans = ' ';
    for(int i = 0;i<=26;i++)
    {
        if(freqt[i] == 1){
            ans = char(i+'a');
        }
    }
return ans;
    
    }
};
