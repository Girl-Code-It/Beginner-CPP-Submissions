#include <bits/stdc++.h>
#include <stack>
using namespace std;

bool isNumeric(char c){
    if(c>='0' && c<='9'){
        return true;
    }
    return false;
}

bool isOperator(char c){
    if(c == '+' || c == '-' || c == '*' || c == '/'){
        return true;
    }
    return false;
}

int PerformOperation(char operation, int operand1, int operand2)
{
	if(operation == '+') return operand1 +operand2;
	else if(operation == '-') return operand1 - operand2;
	else if(operation == '*') return operand1 * operand2;
	else if(operation == '/') return operand1 / operand2;

	else cout<<"Unexpected Error \n";
	return -1; 
}

int EvaluatePostfix(string str){
    stack<char> s;
    for(int i=0;i<str.length();i++){
        if(str[i] == ' ' || str[i] == ','){
            continue;
        }
        else if(isOperator(str[i])){
            int operand2 = s.top();
            s.pop();
            int operand1 = s.top();
            s.pop();
            int result = PerformOperation(str[i],operand1,operand2);
            s.push(result);
        }
        else if(isNumeric(str[i])){
            s.push(str[i] - '0');
        }
    }
    return s.top();
}

int main() {
    string str;
    getline(cin,str);
    cout<<EvaluatePostfix(str);
}
