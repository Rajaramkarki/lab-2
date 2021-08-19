#pragma once
#define maxSize 30

template<class Type>
class Queue{
private:
  Type data[maxSize];
  int front;
  int rear;
public:
  Queue(int front=-1,int rear=-1):front(front),rear(rear){};

  bool isEmpty();              
  bool isFull();               
  bool enqueue(Type element);     
  bool dequeue(Type &element);             
  bool peekFront(Type &element);            
  bool peekRear(Type &element);       
  void display();      
};

