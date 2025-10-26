#include <iostream>
#include<cassert>
#include <string>
#include <stack>
using namespace std;
//const int max_size = 50;
//template <class t>
//class stack {
//	int top;
//	int item[max_size];
//public:
//	stack(){
//		top = -1;
//	}
//
//	void push(t ele) {
//		top++;
//		item[top] = ele;
//		if (top >= max_size - 1) 
//			cout << "stack full on push";
//		else {
//			top++;
//			item[top] = ele;
//		}
//	}
//		bool isEmpty() {
//			return top < 0;
//		}
//		void pop() {
//			if (isEmpty()) {
//				cout << "stack empty on pop";
//			}
//			else
//				top--;
//		}
//
//		void pop(t& ele){
//			if (isEmpty()) {
//				cout << "stack empty on pop";
//			}
//			else {
//				ele = item[top];
//				top--;
//			}
//		}
//
//		void getTop(t& stackTop) {
//			if (isEmpty()) {
//				cout << "stack empty on pop";
//			}
//			else {
//				stackTop = item[top];
//				cout << stackTop << endl;
//			}
//		}
//
//		void print() {
//			cout << "[";
//			for (int i = top; i < 0; i--) {
//				cout << item[i] << " ";
//			}
//			cout << "]";
//			cout << endl;
//		}
//};
//
//class linkeList {
//	struct node {
//		int item;
//		node* next;
//	};
//	node* top , *cur;
//public:
//	linkeList(){
//		top = NULL;
//	}
//	void push(int newItem) {
//		node* newItemPtr = new node;
//		if (newItemPtr == NULL)
//			cout << "stack push cannot allocate memory";
//		else {
//		newItemPtr->item = newItem;
//		newItemPtr->next = top;
//		top = newItemPtr;
//		}
//	}
//	bool isEmpty() {
//		return top == NULL;
//	}
//	void pop() {
//		if (isEmpty())
//			cout << "stack empty on pop";
//		else {
//			node* temp = top;
//			top = top->next;
//			temp = temp->next = NULL;
//			delete temp;
//		}
//	}
//	void pop(int& ele) {
//		if (isEmpty())
//			cout << "stack empty on pop";
//		else {
//			ele = top->item;
//			node* temp = top;
//			top = top->next;
//			temp = temp->next = NULL;
//			delete temp;
//		}
//	}
//	void getTop(int& ele) {
//		if (isEmpty())
//			cout << "stack empty on getTop";
//		else {
//			ele = top->item;
//		}
//	}
//	void display() {
//		cur = top;
//		cout << "\n item in the stack linked list";
//		cout << "[";
//		while (cur != NULL) {
//			cout << cur->item << " , ";
//			cur = cur->next;
//		}
//		cout << "] \n";
//	}
//};
 
// it's following areBalanced ()
//bool areaPair(char open, char close) {
//	if (open == '(' && close == ')')
//		return true;
//	else if (open == '{' && close == '}')
//		return true;
//	else if (open == '[' && close == ']')
//		return true;
//
//	return false;
//}
//bool areBalanced(string exp) {
//	stack<char> s;
//	for (size_t i = 0; i < exp.length(); i++){
//		if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
//			s.push(exp[i]);
//		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
//		{
//			if (s.empty() || !areaPair(s.top(), exp[i]))
//				return false;
//			else
//				s.pop();
//		}
//	}
//
//	return s.empty() ? true : false;
//}
//class arrayQueueType {
//	int rear; // back , end 
//	int front; // head , start
//	int length; // count
//	int* arr;
//	int max_size;
//public:
//	arrayQueueType(int size) {
//		if (size <= 0)
//			max_size = 20;
//		else 
//			max_size = size;
//		
//		arr = new int[max_size];
//		rear = max_size - 1;
//		front = 0;
//		length = 0;
//	}
//	int isEmpty() {
//		return length == 0;
//	}
//	bool isFull() {
//		return length == max_size;
//	}
//	void addQueue(int element) {
//		if (isFull())
//			cout << "queue full can't enqueue ...! \n";
//		else {
//			rear = (rear + 1) % max_size;
//			arr[rear] = element;
//			length++;
//		}
//	}
//	void deleteQueue() {
//		if (isEmpty())
//			cout << "empty queue can't dequeue \n";
//		else {
//			front = (front + 1) % max_size;
//			length--;
//		}
//	}
//	int frontQueue() {
//		assert(!isEmpty());
//		cout << "empty queue can't dequeue \n";
//		return arr[front];
//	}
//
//	int rearQueue() {
//		assert(!isEmpty());
//		return arr[rear];
//	}
//
//	void printQueue() {
//		cout << "{ ";
//		for (size_t i = front; i != rear + 1; i = (i + 1) % max_size) {
//			cout << arr[i] << " , ";
//		}
//		cout << arr[rear];
//		cout << " }";
//	}
//	int queueSearch(int ele){
//		int pos = -1;
//		if (!isEmpty()) {
//			for (int i = front; i != rear; i = (i + 1) % max_size) {
//				if (arr[i] == ele) {
//					pos = i;
//					break;
//				}
//				if (pos == -1) {
//					if (arr[rear] == ele) {
//						pos = rear;
//					}
//				}
//			}
//		}
//		else {
//			cout << "q is empty " << endl;
//		}
//		return pos;
//	}
//};

//class LinkedQueue {
//	struct Node {
//		int item;
//		Node* next;
//	};
//	Node* frontPtr;
//	Node *rearPtr;
//	int length;
//public:
//	LinkedQueue() {
//		frontPtr = rearPtr = NULL;
//		length = 0;
//	} 
//	bool isEmpty() {
//		return length == 0;
//	}
//
//	void enqueue(int ele) {
//		if (isEmpty()) {
//			frontPtr = new Node;
//			frontPtr->item = ele;
//			frontPtr->next = NULL;
//			rearPtr = frontPtr;
//			length++;
//		}
//		else {
//			// when is found the ele in queue 
//			Node* newPtr = new Node;
//			newPtr->item = ele;
//			newPtr->next = NULL;
//			rearPtr->next = newPtr;
//			rearPtr = newPtr;
//			length++;
//		}
//	}
//
//	void dequeue() {
//		if (isEmpty())
//			cout << "the queue is empty ! \n";
//		else {
//			//Node* newItem = frontPtr;  OR
//			Node* newItem = new Node();
//
//			if (frontPtr == rearPtr) {
//				frontPtr = rearPtr = NULL;
//				length--;
//			}
//			else {
//				frontPtr = frontPtr->next;
//				length--;
//			}
//			newItem = frontPtr;
//			newItem->next = NULL;
//			delete newItem;
//		}
//	}
//
//	void getFront() {
//		if (isEmpty())
//			cout << "not found the front becouse the linkedQueue is empty ! \n";
//		return printItem->item;
//	}
//	int getFront2(int& ele){ // call by refrance
//		if (isEmpty())
//			cout << "not found the front becouse the linkedQueue is empty ! \n";
//		ele = frontPtr->item;
//		cout << ele << endl;
//	}
//	void getRear() {
//		assert(!isEmpty());
//		return rearPtr->item;
//	}
//
//	void display() {
//		if (isEmpty())
//			cout << "not found any element ! \n";
//
//		Node *curPtr = frontPtr;
//		cout << "items in the queue : [ ";
//		while (curPtr != NULL) {
//			cout << curPtr->item << " ";
//			curPtr = curPtr->next;
//		}
//		cout << " ]\n";
//	}
//
//	void clearQueue() {
//		Node* current;
//		while (frontPtr != NULL)
//		{
//			current = frontPtr;
//			frontPtr = frontPtr->next;
//			delete current;
//		}
//		rearPtr = NULL;
//		length = 0;
//
//	}
//
//	void getSize() {
//		return length;
//	}
//};

//class ArrayList {
//	int* arr;
//	int maxSize;
//	int length;
//public:
//	ArrayList(int size) {
//		if (size < 0)
//			maxSize = 10;
//		else
//			maxSize = size;
//		length = 0;
//		arr = new int[maxSize];
//	}
//	bool isEmpty() {
//		return length == 0;
//	}
//	bool isFull() {
//		return length == maxSize;
//	}
//
//	bool getSize() {
//		return length;
//	}
//
//	void print() {
//		for (int i = 0; i < length; i++) {
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//
//	void insertAtPos(int pos, int ele) {
//		if (isFull())
//			cout << "the array is full ..!";
//		else if (pos <0 || pos > length)
//			cout << "out of range ..!";
//		else {
//			// move the ele to right
//			for (int i = length; i > pos; i--) {
//				arr[i] = arr[i - 1];
//			}
//		}
//		arr[pos] = ele;
//		length++;
//	}
//	void RemoveAtPos(int pos) {
//		if (isEmpty())
//			cout << "list is empty ..!";
//		else if (pos < 0 || pos > length)
//			cout << "out of range ..!";
//		else {
//			// move the ele to left
//			for (int i = pos; i < length; i++) {
//				arr[i] = arr[i + 1];
//			}
//		}
//		length--;
//	}
//
//	void insertAtEnd(int ele) {
//		if (isFull())
//			cout << "the list is full can't insert ..!";
//		else
//			arr[length] = ele;
//		length++;
//	}
//	int searchEle(int ele) {
//		for (size_t i = 0; i < length; i++) {
//			if (arr[i] == ele)
//				return i;
//		}
//			return 1;
//	}
//	void updateAt(int pos, int ele) {
//		if (pos < 0 || pos > length)
//			cout << "out of range ..!";
//		else
//			arr[pos] = ele;
//	}
//
//	int getEle(int pos) {
//		if (pos < 0 || pos > length)
//			cout << "out of range ..!";
//		else
//			return arr[pos];
//	}
//
//	void clear() {
//		length = 0;
//	}
//};

// class LinkedListArray{
//	struct Node {
//		int item;
//		Node* next;
//	};
//	Node* Head, * Tial;
//	int length;
//public:
//	LinkedListArray() : Head(NULL), Tial(NULL), length(0) {}
//
//	bool isEmpty() {
//		return length == 0;
//	}
//	void insertFirst(int element) {
//		Node* newItem = new Node;
//		newItem->item = element;
//		if (length == 0) {
//			Head = Tial = newItem;
//			newItem->next = NULL;
//		}
//		else {
//			newItem->next = Head;
//			Head = newItem;
//		}
//		length++;
//	}
//	
//	void insertEnd(int element) {
//		Node* newItem = new Node;
//		newItem->item = element;
//		if (length == 0) {
//			Head = Tial = newItem;
//			newItem->next = NULL;
//		}
//		else {
//			Tial->next = newItem;
//			newItem->next = NULL;
//			Tial = newItem;
//		}
//		length++;
//	}
//
//	void insertAtPostion(int pos, int ele) {
//		if (pos < 0 || pos > length)
//			cout << "out of range";
//		else {
//			Node* newItem = new Node;
//			newItem->item = ele;
//			if (pos == 0)
//				insertFirst(ele);
//			else if (pos == length)
//				insertEnd(ele);
//			else {
//				// 0  1  2  3  4 
//				// 10 20 30 40 50
//				// pos 3 , 35 
//				// 
//				Node* cur = Head;
//				for (int i = 1; i < pos; i++) {
//					cur = cur->next;
//				}
//				newItem->next = cur->next;
//				cur->next = newItem;
//				length++;
//			}
//		}
//	}
//
//	void print() {
//		Node* cur = Head;
//		while (cur != NULL) {
//			cout << cur->item << " ";
//			cur = cur->next;
//		}
//		cout << endl;
//	}
//
//	void removeFirst() {
//		if (length == 0)
//			cout << "empty list can't remove " << endl;
//		else if (length == 1) {
//			delete Head;
//			Head = Tial = NULL;
//			length--;
//		}
//		else {
//			Node* cur = Head;
//			Head = Head->next;
//			delete cur;
//			length--;
//		}
//	}
//
//	void removeLast() {
//		if (isEmpty()) {
//			cout << "The list is empty" << endl;
//			return;
//		}
//
//		Node* curr = Head;
//		Node* prev = nullptr;
//
//		// If the list has only one element
//		if (Head->next == nullptr) {
//			delete Head;
//			Head = nullptr;
//			Tial = nullptr;
//			length--;
//			return;
//		}
//
//		// Traverse to the second last node
//		while (curr->next != nullptr) {
//			prev = curr;
//			curr = curr->next;
//		}
//
//		// Remove the last node
//		prev->next = nullptr;
//		delete curr;
//		Tial = prev;  // Update the tail
//		length--;
//	}
//
//	void removePos(int pos, int ele) {
//		if (length == 0)
//			cout << "empty list can't remove " << endl;
//		else if (length == 1) {
//			delete Head;
//			Head = Tial = NULL;
//			length--;
//		}
//		else {
//			Node* curr, *prev;
//			if (pos == 0 || pos > length)
//				cout << "not found the position in linked list \n";
//			else {
//
//			}
//		}
//	}
//	
//	void remove(int ele) {
//		if (isEmpty()) {
//			cout << "This list is empty" << endl;
//			return;
//		}
//		Node* curr = Head;
//		Node* prev = nullptr;
//		// If the element to be removed is the head
//		if (Head->item == ele) {
//			curr = Head;
//			Head = Head->next;
//			delete curr;
//			length--;
//			if (length == 0) {
//				Head = nullptr;
//				Tial = nullptr;
//			}
//			return;
//		}
//		// Traverse the list to find the element
//		while (curr != nullptr) {
//			if (curr->item == ele) {
//				break;
//			}
//			prev = curr;
//			curr = curr->next;
//		}
//		// If the element was not found
//		if (curr == nullptr) {
//			cout << "This element was not found" << endl;
//			return;
//		}
//		// Remove the element
//		prev->next = curr->next;
//		if (Tial == curr) {
//			Tial = prev;
//		}
//		delete curr;
//		length--;
//	}
//
//	void revers() {
//		Node* prev, * curr, * next;
//		prev = NULL; curr = Head;
//		next = curr->next;
//		while(next != NULL){
//			next = curr->next;
//			curr->next = prev;
//			prev = curr;
//			curr = next;
//		}
//		Head = prev;
//	}
//
//	int search(int ele) {
//		Node* curr = Head;
//		int pos = 0;
//		while (curr != NULL) {
//			if (curr->item == ele)
//				return pos;
//
//			curr = curr->next;
//			pos++;
//		}
//		return -1;
//	}
//};

//class DoublyLisnkedList {
//private:
//	struct Node {
//		int item;
//		Node* next, * prev;
//	};
//	Node* first, * last;
//	int count;
//
//public:
//	DoublyLisnkedList() {
//		first = last = NULL; count = 0;
//	}
//	bool isEmpty() {
//		return first == NULL;
//	}
//	void insertFirst(int ele){
//		Node* newItem = new Node;
//		newItem->item = ele;
//		if (count == 0) {
//			first = last = newItem;
//			newItem->next = newItem->prev = NULL;
//		}
//		else {
//			newItem->next = first;
//			newItem->prev = NULL;
//			first->prev = newItem;
//			first = newItem;
//		}
//		count++;
//	}
//	
//	void insertLast(int ele) {
//		Node* newItem = new Node;
//		newItem->item = ele;
//		if (count == 0) {
//			first = last = newItem;
//			newItem->next = newItem->prev = NULL;
//		}
//		else {
//			newItem->prev = last;
//			newItem->next =	NULL;
//			last->next = newItem;
//			last = newItem;
//		}
//		count++;
//	}
//
//	void insertAt(int pos , int ele) {
//		// should be understant
//		if (pos < 0 || pos > count)
//			cout << "out of range \n";
//		else {
//			Node* newItem = new Node;
//			newItem->item = ele;
//			if (pos == 0)
//				insertFirst(ele);
//			else if (pos == count)
//				insertLast(ele);
//			else {
//				Node* curr = first;
//				curr = curr->next;
//				newItem->next = curr->next;
//				newItem->prev = curr;
//				curr->next = newItem;
//				curr->next->prev = newItem;
//				count++;
//			}
//		}
//	}
//
//	void removeFirst() {
//		if (count == 0)
//			cout << "empty list \n";
//		else if (count == 1) {
//			delete first;
//			first = last = NULL;
//		}
//		else {
//			Node* curr = first;
//			first = first->next;
//			first->prev = NULL;
//			delete curr;
//		}
//		count--;
//	}
//	
//	void removeLast() {
//		if (count == 0)
//			cout << "empty list \n";
//		else if (count == 1) {
//			delete first;
//			first = last = NULL;
//		}
//		else {
//			Node* curr = last;
//			last = last->prev;
//			last->next = NULL;
//			delete curr;
//		}
//		count--;
//	}
//
//	void remove(int ele){
//		if (count == 0)
//			cout << "empty linst can't remove \n";
//		else if (first->item == ele)
//			removeFirst();
//		else {
//			Node* curr = first->next;
//			while (curr != NULL) {
//				if (curr->item == ele)
//					break;
//
//				curr = curr->next;
//			}
//			if (curr == NULL)
//				cout << "the item is not found \n";
//			else if (curr->next == NULL)
//				removeLast(); 
//			else {
//				curr->prev->next = curr->next;
//				curr->next->prev = curr->prev;
//				delete curr;
//				count --;
//			}
//			
//		}
//	}
//
//	void print() {
//		Node* curr = first;
//		cout << "Element List ... \n";
//		while(curr != NULL){
//			cout << curr->item << " ";
//			curr = curr->next;
//		}
//		cout << endl;
//	}
//	
//	void reversDisplay() {
//		Node* curr = last;
//		cout << "Element List after reverse ... \n";
//		while (curr != NULL) {
//			cout << curr->item << " ";
//			curr = curr->prev;
//		}
//		cout << endl;
//	}
//};

//void insertionSort(int arr[], intn) {
//	int key, j;
//	for (int i = 1; i < n;i++){
//		key = arr[i];
//		j = i - 1;
//		while( j >= 0 && arr[j] > key){
//			arr[j + 1] = arr[j];
//			j = j - 1;
//		}
//		arr[j + 1] = key;
//	}
//};
//
//void printArray(int arr[], int n) {
//	for (int i = 0; i < n; i++) {
//		cout << arr[i] << " " << endl;
//		cout << endl;
//	}
//};


/*
  Infix to postfix conversion in C++
  Input Postfix expression must be in a desired format.
  Operands and operator, both must be single character.
  Only '+'  ,  '-'  , '*', '/' and '$' (for exponentiation)  operators are expected.
*/

// Function to convert Infix expression to postfix 
string InfixToPostfix(string expression);

// Function to verify whether an operator has higher precedence over other
int HasHigherPrecedence(char operator1, char operator2);

// Function to verify whether a character is operator symbol or not. 
bool IsOperator(char C);

// Function to verify whether a character is alphanumeric chanaracter (letter or numeric digit) or not. 
bool IsOperand(char C);


int main() {
	string expression;
	cout << "Enter Infix Expression \n";
	getline(cin, expression);
	string postfix = InfixToPostfix(expression);
	cout << "Output = " << postfix << "\n";
	return 0;
}



// Function to evaluate Postfix expression and return output
string InfixToPostfix(string expression)
{
	// Declaring a Stack from Standard template library in C++. 
	stack<char> S;
	string postfix = ""; // Initialize postfix as empty string.
	for (unsigned int i = 0; i < expression.length(); i++) {

		// Scanning each character from left. 
		// If character is a delimitter, move on. 
		if (expression[i] == ' ' || expression[i] == ',') continue;

		// If character is operator, pop two elements from stack, perform operation and push the result back. 
		else if (IsOperator(expression[i]))
		{
			while (!S.empty() && S.top() != '(' && HasHigherPrecedence(S.top(), expression[i]))
			{
				postfix += S.top();
				S.pop();
			}
			S.push(expression[i]);
		}
		// Else if character is an operand
		else if (IsOperand(expression[i]))
		{
			postfix += expression[i];
		}

		else if (expression[i] == '(')
		{
			S.push(expression[i]);
		}

		else if (expression[i] == ')')
		{
			while (!S.empty() && S.top() != '(') {
				postfix += S.top();
				S.pop();
			}
			S.pop();
		}
	}

	while (!S.empty()) {
		postfix += S.top();
		S.pop();
	}

	return postfix;
}

// Function to verify whether a character is english letter or numeric digit. 
// We are assuming in this solution that operand will be a single character
bool IsOperand(char C)
{
	if (C >= '0' && C <= '9') return true;
	if (C >= 'a' && C <= 'z') return true;
	if (C >= 'A' && C <= 'Z') return true;
	return false;
}

// Function to verify whether a character is operator symbol or not. 
bool IsOperator(char C)
{
	if (C == '+' || C == '-' || C == '*' || C == '/' || C == '$')
		return true;

	return false;
}

// Function to verify whether an operator is right associative or not. 
int IsRightAssociative(char op)
{
	if (op == '$') return true;
	return false;
}

// Function to get weight of an operator. An operator with higher weight will have higher precedence. 
int GetOperatorWeight(char op)
{
	int weight = -1;
	switch (op)
	{
	case '+':
	case '-':
		weight = 1;
	case '*':
	case '/':
		weight = 2;
	case '$':
		weight = 3;
	}
	return weight;
}

// Function to perform an operation and return output. 
int HasHigherPrecedence(char op1, char op2)
{
	int op1Weight = GetOperatorWeight(op1);
	int op2Weight = GetOperatorWeight(op2);

	// If operators have equal precedence, return true if they are left associative. 
	// return false, if right associative. 
	// if operator is left-associative, left one should be given priority. 
	if (op1Weight == op2Weight)
	{
		if (IsRightAssociative(op1)) return false;
		else return true;
	}
	return op1Weight > op2Weight ? true : false;
}
