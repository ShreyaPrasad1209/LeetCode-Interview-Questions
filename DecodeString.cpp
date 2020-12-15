class Solution {
public:
    string decodeString(string s) {
       
        stack<char>stk;
        int freq;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            
            //pushing valid chars in stack
            if( (s[i]>='0' && s[i]<='9') || s[i]=='[' )
            {
                stk.push(s[i]);
            }
            
            //popping on ']'
            if(s[i]==']')
            {
                      //adding chars to string until '[' encountered
                      while(stk.top()!='[')
                      {
                          ans+=stk.top();
                          stk.pop(); 
                      }
                       
                        //pop if '[' encountered
                
                      if(stk.top()=='[')
                      {
                          stk.pop();
                      }
                        
                        //check for number and repeat string freq times
                     
                      if(stk.top()>='0' && stk.top()<='9') 
                      {
                          int freq=(int)(stk.top());
                          stk.pop();
                          while(freq)
                          {
                              ans+=ans;
                              freq--;
                          }
                      }
                   
            }
         
        }
        
        return ans;
        
    }
};
