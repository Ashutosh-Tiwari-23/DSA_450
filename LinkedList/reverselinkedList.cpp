#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node *next;

        Node(int data)
            :data{data}, next{nullptr} {}
};

// Recursive function to reverse the linked list
Node *reverseList(Node *head){
    
}