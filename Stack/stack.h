#pragma once
#define maxSize 100

template<class Type>
class Stack{
  private:
    int topElement;
    Type data[maxSize];

  public:
    Stack(int topElement = -1):topElement(topElement){};
    // ~Stack() {delete *data;};

    bool isEmpty();     
    bool isFull();      
    bool push(Type element);
    bool pop(Type &element);          
    bool peek(Type &element);    
    void display();   
    
};


