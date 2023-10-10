#ifndef NODE_H
#define NODE_H

class Node {
public:
    Node(int data);
    ~Node();

    int getData();
    Node* getNext();
    void setNext(Node* next);

private:
    int data;
    Node* next;

    // Add private members and methods as needed
};

#endif
