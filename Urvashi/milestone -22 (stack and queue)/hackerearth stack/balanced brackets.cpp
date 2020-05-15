#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
struct node{
	int data;
	node* next;
};

node* head;

int isEmpty()
{
	return (head==NULL);
}

int Top()
{
	cout<< head->data<<endl;
}

void push(int x)
{
 node* temp =new node();
 
 if(!temp)
 {
 	cout<<"stack is full"<<endl;
 	return ;
 }
 temp->data =x;
 temp->next =head;
 head = temp;	
}

void pop()
{
node* temp;
if(head==NULL)
return ;
else
temp = head;
head =head->next;
delete temp;
}

bool isPair(char opening , char closing )
{
	if(opening =='(' && closing == ')')return true;
	else if(opening =='[' && closing == ']')return true;
	else if(opening =='{' && closing == '}')return true;
	return false;
}

bool areParenthesesBalanced(char *c)
{
	stack<char>s;
	for(int i=0;i<strlen(c);i++)
	{
		if(c[i]=='('|| c[i]=='{' || c[i]=='[')
		s.push(c[i]);
		else if(c[i]==')' || c[i]=='}' || c[i]==']')
		{
			if(s.empty() || !isPair(s.top(), c[i]))
			return false;
			else
			s.pop();
		}
	}
	return s.empty()?true :false;
}
int main()
{
int n;
cin>>n;
char c[100];
while(n--)
{
cin>>c;
(areParenthesesBalanced(c))?cout<<"YES\n":cout<<"NO\n";
}
}
