class Solution{
  public:
    bool isValid(string s) {
      stack<char> st;
      for (char c : s){
        if (c == '(' || c == '{' || c == '[')
          st.push(c);
        else if(!st.empty() && ((c == ')' && st.top() == '(') || (c == '}' && st.top() == '{') || (c == ']' && st.top() == '[')))
          st.pop();
        else               //this is for making sure the input is just brackets
          return false;
      }
      if (st.empty())
        return true;
      else {
        return false;
      }
      return {0};
    }
};
