#include <iostream>
#include "stack.h"

using namespace std;

template<class Type>
bool Stack<Type> :: isEmpty(){
  return topElement == -1;
    
}

template<class Type>
bool Stack<Type> :: isFull(){
  return topElement == maxSize - 1;
}

template<class Type>
bool Stack<Type> :: push (const Type element){
  if(!isFull()){
    topElement++;
    data[topElement] = element;
    return true;
  }
  else{
    cout << "Stack Overflow "<<endl;
    return false;
  }
}

template<class Type>
bool Stack<Type> :: pop(Type &element){
  if(!isEmpty()){
    Type value  = data[topElement];
    topElement--;
    return true;
  }
  else{
    cout << "Stack Underflow "<<endl;
    return false;
  }
}

template<class Type>
bool Stack<Type> :: peek(Type &element){
  if(!isEmpty())
    {
        element = data[topElement];
        cout<< element << " is in the front" << endl;
        return true;
    }
  else{
    cout << "Stack Underflow"<<endl;
    return false;
  }
}

template<typename S>
void Stack<S>::display(){
    if (!isEmpty()) {
       cout << "The elements are: " << endl;
        for (int i=0 ;i<= topElement; i++){
            cout << data[i] << "  ";
        }
        cout<<endl;
}   
else{
        cout << "Stack is Empty" <<endl;

}
}

int main() {
  int i;
  Stack<int> intStack;
  cout<<"\nFor integer values:"<<endl;
  intStack.push(5);
  intStack.push(10);
  intStack.push(15);
  intStack.push(20);
  intStack.display();
  intStack.peek(i);
  intStack.pop(i);
  intStack.display();

  

  char j;
  Stack<char> charStack;
  cout<<"\nFor character values:"<<endl;
  charStack.push('A');
  charStack.push('B');
  charStack.push('C');
  charStack.push('D');
  charStack.display();
  charStack.peek(j);
  charStack.pop(j);
  charStack.display();

  double k;
  Stack<double> doubleStack;
  cout<<"\nFor double values:"<<endl;
  doubleStack.push(1.1);
  doubleStack.push(2.1);
  doubleStack.push(3.1);
  doubleStack.push(4.1);
  doubleStack.display();
  doubleStack.peek(k);
  doubleStack.pop(k);
  doubleStack.display();

  return 0;
}
