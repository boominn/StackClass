#include <iostream>
#include <string>
using namespace std;

class stack {
	
	private:
		int *data;
		int top;
		int size;
	public:
		stack(int sz = 10) {
			data = new int[size = sz];
			top = -1;
		}
		~stack () {
			delete data;
		}
		bool isempty () {
			return top == -1;
		}
		bool isfull () {
			return top == size-1;
		}
		void push(char ch) {
			top++;
			data[top] = ch;
		}
		void pop() {
			top--;
		}
		
};
int main() {
	string str= "(((a+b)*c+d-e)/(f+g)-(h+j)*(k-l))/(m-n)";
	stack S(50);
	int i;
	for(i = 0; i<str.length(); i++) {
		if(str[i] == '(') {
			S.push('(');
		}
		else if(str[i] == ')') {
			S.pop();
		}
	}
	if(S.isempty() == 1) {
		cout<<" Parantezler dogru";
	} 
	else {
		cout<<" Parantezler yanlis";
	}
	
	
return 0;
} 
