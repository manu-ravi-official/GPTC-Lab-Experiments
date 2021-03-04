#include<iostream>
#include<ctype.h>
#include "stack.h"
using namespace std;
/**************************** START - ISP VALUE FUNCTION ****************************/
int isp(char op)
{
	int r;
	switch(op)
	{
		case '+':
		case '-':
				r=2;
				break;
		case '*':
		case '/':
				r=4;
				break;
		case '^':
				r=5;
				break;
		case '(':
				r=0;
				break;
	}
	return r;
}
/****************************** END - ISP VALUE FUNCTION ******************************/
/****************************** START ICP VALUE FUNCTION ******************************/
int icp(char op)
{
	int r;
	switch(op)
	{
		case'+':
		case'-':
			r=1;
			break;
		case'*':
		case'/':
			r=3;
			break;
		case'^':
			r=6;
			break;
		case'(':
			r=9;
			break;
	}
	return r;
}
/****************************** END ICP VALUE FUNCTION ******************************/
/****************************** START - POST FIX FUNCTION ******************************/
void postfix(char str[ ])
{
	stack < char> s;
	char item,x;
	s.push('(');
	int i=0;
	while(!s.isempty())
	{
		item=str[i];
		i++;
		x=s.pop();
		if (isalnum(item))
		{
			s.push(x);
			cout<<char(item)<<" ";
		}
		else if (item ==')')
		{
			while(x!='(')
			{
				cout<<x<<" ";
				x=s.pop();
			}
		}
		else if(isp(x)>=icp(item))
		{
			while(isp(x)>icp(item))
			{
				cout<<x<<" ";
				x=s.pop();
			}
			s.push(x);
			s.push(item);
		}
		else if (isp(x)<icp(item))
		{
			s.push(x);
			s.push(item);
		}
	}
}
/****************************** END - POST FIX FUNCTION ******************************/
int main()
{
	char str[100];
	cout<<"\n Enter a Expression ending with ) : ";
	cin>>str;
	cout<<"\n Entered Infix Expression : ("<<str;
	cout<<"\n\n Converted Postfix Expression : ";
	postfix(str);
}
