#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        std::size_t len = s.length();
        stack<char> ss;
        if(len%2 == 1) return false;
        for(auto i:s)
        {
            switch(i)
            {
                case '(':
                case '[':
                case '{':
                    ss.push(i);
                    break;
                case ')': 
                    if(ss.empty() || ss.top() != '(') return false;
                    else ss.pop();
                    break;
                case ']': 
                    if(ss.empty() || ss.top() != '[') return false;
                    else ss.pop();
                    break;
                case '}': 
                    if(ss.empty() || ss.top() != '{') return false;
                    else ss.pop();
                    break;
            }
        }
        if(ss.empty()) return true;
        else return false;
    }
};

int main(int argc,char *argv[])
{
    Solution aa;
    string a = "[][[]";
    if(aa.isValid(a)) cout << "true" << endl;
    else cout << "false" <<endl;
    return 0;
}