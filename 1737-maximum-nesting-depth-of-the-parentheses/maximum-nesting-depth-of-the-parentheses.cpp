class Solution {
public:
    int maxDepth(string s) {
    
    int c=0;
    int d=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            d++;
            c=max(c,d);}


        else if(s[i]==')'){
                d--;
            }
        }
    return c;}
    
    
};