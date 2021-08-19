#include <iostream>
#include "queue.h"

using namespace std;

template<class Type>
bool Queue<Type> :: isEmpty(){
  return front == rear;
}

template<class Type>
bool Queue<Type> :: isFull(){
  return rear == maxSize - 1;
}

template<class Type>
bool Queue<Type> :: enqueue(Type element){
  if(!isFull()){
    if(isEmpty())
    front=0;
    rear = rear + 1;
    data[rear] = element;
    return true;
  }
  else{
    cout << "Queue Overflow" << endl;
    return false;
  }
}

template<class Type>
bool Queue<Type> :: dequeue(Type &element){
  if(!isEmpty()){
    front = front + 1;
    Type element = data[front];
    return true;
  }
  else{
    cout <<"Queue Underflow" << endl;
    return false;
  }
}

template<class Type>
bool Queue<Type> :: peekFront(Type &element){
  if(!isEmpty()){
    element = data[front];
    cout<<"The front of the queue is "<< element <<endl;
    return true;
  }
  else{
    cout <<"Queue Underflow" << endl;
    return false;
  }
}

template<class Type>
bool Queue<Type> :: peekRear(Type &element){
  if(!isEmpty()){
    element = data[rear];
    cout<<"The rear of the queue is "<< element <<endl;
    return true;
  }
  else{
    cout <<"Queue Underflow" <<endl;
    return false;
  }
}

template<class Type>
void Queue<Type>::display()
{
  int i;
  if(!isEmpty()){
    cout<<"Elements in the queue are "<<endl;
    for(i=front; i<=rear; i++)
      {cout<<data[i]<<" ";}
      cout<<endl;
  }
  else{
    cout<<"Queue is empty"<<endl;
  }
}

int main() {
  int i;
  Queue<int> intQueue;
  cout<<"\nFor integer values :"<<endl;
  intQueue.enqueue(5);
  intQueue.enqueue(10);
  intQueue.enqueue(15);
  intQueue.enqueue(20);
  intQueue.display();
  intQueue.dequeue(i);
  intQueue.display();
  intQueue.peekFront(i);
  intQueue.peekRear(i);


  char j;
  Queue<char> charQueue;
  cout<<"\nFor character values :"<<endl;
  charQueue.enqueue('A');
  charQueue.enqueue('B');
  charQueue.enqueue('C');
  charQueue.enqueue('D');
  charQueue.display();
  charQueue.dequeue(j);
  charQueue.display();
  charQueue.peekFront(j);
  charQueue.peekRear(j);

  double k;
  Queue<double> doubleQueue;
  cout<<"\nFor double values :"<<endl;
  doubleQueue.enqueue(1.2);
  doubleQueue.enqueue(2.2);
  doubleQueue.enqueue(3.2);
  doubleQueue.enqueue(4.2);
  doubleQueue.display();
  doubleQueue.dequeue(k);
  doubleQueue.display();
  doubleQueue.peekFront(k);
  doubleQueue.peekRear(k);

  return 0;
}
