#include <iostream>
#include <stack>
#include <string>

bool isBalance(std::string input){

    std::stack<char> mstack;
    
    for(auto c : input){

        if ((c==')' || c==']' || c=='}') && mstack.empty())
            return false;
        else if (c=='(' || c=='[' || c=='{')
            mstack.push(c);
        else{
            auto c2 = mstack.top();
            mstack.pop();
            if( c==')' and c2!='(')
                return false;
            else if (c==']' && c2!='[')
                return false;
            else if (c=='}' && c2!='{')
                return false;
        }
    }

    return mstack.empty() ? true : false;
}


int main(int argc, char *argv[])
{
    std::string s1="()";

    if (isBalance(s1))
        std::cout << "Balanced! " << std::endl;
    s1="())()";
    if (isBalance(s1))
        std::cout << "Balanced! " << std::endl;
    else
        std::cout << "Not Balanced! " << std::endl;
    return 0;
}
