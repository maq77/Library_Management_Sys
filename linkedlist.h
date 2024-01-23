#ifndef LinkedList_H
#define LinkedList_H
#ifndef Node_H
#define Node_H
#include<bits/stdc++.h>
using namespace std;


template <class T>
class Node{ //// Class Node with Template
public:
T data;
Node<T>* next;
Node(T data);
};

template<class T>
Node<T>::Node(T data){

this->data = data;
next = NULL;

};

/////////////////////////////////////////////////End of Class Node with Template
template <class T>
class LinkedList{ ///////////////////////Class Linked List with Template
public:
    Node<T> *head,*tail;
    int size=0;
    LinkedList();
    void push(T data);
    void push_at(T data, int index);
    void print();
    T &at(int n);
    void delete_node(int index);
    Node<T>* Node_at(int n);


};
////////////////Constructor
template <class T>
LinkedList<T>::LinkedList(){
head = NULL;
tail = NULL;

}
template <class T>
////////////////////////////// Insertation
void LinkedList<T>::push(T data){

        Node<T> *tmp = new Node<T>(data);
        tmp->data = data;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
        size++;

}
////////////////////////////// Insert At Specific Location
template <class T>
void LinkedList<T>::push_at(T data, int index ){
Node<T> *temp;
temp->data = data;
if(index == 0){
    temp->next = head;
    head = temp;
    size++;
}
else if(index > 0 && index < size-1){
    Node<T> *temp_prev=Node_at(index-1);
    temp->next = temp_prev->next;
    temp_prev->next = temp;
    size++;
}
else if(index == size-1){
    Node<T> *temp_last=tail;
    temp_last->next = temp;
    temp->next = NULL;
    tail = temp;
    size++;
}


}

////////////////////////////// Printing All LinkedList
template <class T>
void  LinkedList<T>::print(){

         Node<T> *tmp;
         tmp = head;
         while(tmp != NULL){
            cout<<tmp->data<<endl;
            tmp = tmp->next;
         }
}
////////////////////////////// return Data of Node
template <class T>
T &LinkedList<T>::at(int n){
        Node<T> *temp = head;
         if(n==0){
            return temp->data;
         }
         try{
         if(n>size-1){
            throw (n);
         }
         }
         catch(int num){
         cout<<"Out of Range !"<<endl;
         cout<<"Size of Linked List is "<<size<<endl;
         }


         for(int i=0;i<n;i++){
            temp = temp->next;
         }
         return temp->data;

       }
///////////////////////////////// Deletion of a Node
template <class T>
void LinkedList<T>::delete_node(int index){
       Node<T> *temp = Node_at(index);
       Node<T> *temp_next = temp->next;
       Node<T> *temp_prev = Node_at(index-1);
       if(index==0){
        head = temp->next;
        return;
       }
       else if(index == size-1){
        tail = temp_prev;
        temp_prev->next = NULL;
        return;
       }
       else{
       temp_prev->next = temp_next;
       }
       delete temp;
       size--;
       }
////////////////////////////////Return Node
template<class T>
Node<T>*  LinkedList<T>::Node_at(int n){
          Node<T>* temp = head;
         if(n==0){
            return temp;
         }
         try{
         if(n>size-1){
            throw (n);
         }
         }
         catch(int num){
         cout<<"Out of Range !"<<endl;
         cout<<"Size of Linked List is "<<size<<endl;
         }


         for(int i=0;i<n;i++){
            temp = temp->next;
         }
         return temp;



       }

///////////////////////////////End of Linked List with Template
#endif
#endif



