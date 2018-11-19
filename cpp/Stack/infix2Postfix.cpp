//============================================================================
// Name        : Infir2Postfix.cpp
// Author      : Ranjeet Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <map>
#include <stack>
#include <cstdlib>

using namespace std;


bool isOp(char c){
	return (c=='+' || c=='-' || c=='*' || c=='/' || c=='(' || c==')');
}

int prec(char c){
	std::map<char,int> precmap;
	precmap['+']=3;
	precmap['-']=3;
	precmap['*']=2;
	precmap['/']=2;
	precmap['(']=1;

	return precmap[c];

}

std::string infixToPostfix(std::string infix){
	std::string result="";

	std::stack<char> opStack;

	for(char c : infix){

		if(!isOp(c)){
			result+=c;
		}
		else if ( c=='('){
			opStack.push(c);
		}else if (c==')'){
			auto top = opStack.top();
			while(top !='('){
				result+=top;
				opStack.pop();
				top = opStack.top();
			}
		    opStack.pop();

		}else{
			while(!opStack.empty() && (opStack.top()!='(') && (prec(opStack.top()) <= prec(c))){
				result+=opStack.top();
				opStack.pop();
			}
			opStack.push(c);
		}

	}

	while( !opStack.empty()){
		result+=opStack.top();
		opStack.pop();
	}


	return result;

}


int main() {
	cout << infixToPostfix("a+b*c+(d*e+f)*g") << endl; // prints !!!Hello World!!!
	return 0;
}

