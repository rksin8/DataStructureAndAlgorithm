#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>


double evaluate(std::string input){

    std::stack<int> mstack;
    int result=0;
    for(auto c : input){
        if(c=='+'|| c=='-' || c=='*'|| c=='/')
        {   int n1 = mstack.top();
            mstack.pop();
            int n2 = mstack.top();
            mstack.pop();
            switch(c){
                case '+':
                    result = n1 + n2;
                    break;
                case '-':
                    result = n1 - n2;
                    break;
                case '*':
                    result = n1*n2;
                    break;
                case '/':
                    result = n1/n2;
                    break;
            }

            mstack.push(result);
        }else{
            int c2 = static_cast<int>(c) - 48;
            mstack.push(c2);
        }
    }

    return mstack.top();

}


int main(int argc, char *argv[])
{
    std::string s1 ="6523+8*+3+*";

    std::cout << s1 << " = " << evaluate(s1) << std::endl;
    return 0;
}
