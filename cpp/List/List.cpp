#include <iostream>

class Node
{
public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = nullptr;
    }

    Node (int data){
        this->data= data;
        this->next = nullptr;
    }
};

class List
{
public:
    Node* head;
    List (){
      this->head = nullptr; 
    }
};

void delete_list(Node* head){
    while(head){
        Node* tmp = head;
        head = head->next;
        delete tmp;
    }
}

void print_list(Node* head){
   while(head != nullptr){
       std::cout << head->data << std::endl;
       head = head->next;
   }
}

void insertNodeAtTail(Node* head, int data){
    Node* tmp = head;
    while(tmp->next){
        tmp = tmp->next;
    }
    // Create a new done with data
    Node* newNode = new Node(data);
    tmp->next = newNode;
}

void insertAtBegining(Node* head, int data){

}

void insertNodeAtPos(Node* head, int pos, int data){

}

void deleteNodeAtTail(Node* head){

}

void deleteNodeAtBegining(Node* head){

}

void deleteNodeAtPos(Node* head, int pos){

}

void printListReverse(Node* head){

}

void reverseList(Node* head){

}


int main(int argc, char *argv[])
{
   //List* list = new List();
   
    Node* head = new Node();


   // Create a node
   Node* newNode = new Node(1);

   head->next = newNode;



   // Create anothe node
   Node* newNode2 = new Node(2);

   newNode->next = newNode2;

   // Create another node
   Node* newNode3 = new Node(3);
   newNode2->next = newNode3;

   // print all the nodes
   //std::cout << head->data << std::endl; //head doesn't have any data
   print_list(head);

   insertNodeAtTail(head, 4);

   print_list(head);



   

   // delete all the nodes
   delete_list(head);
   


    return 0;
}


