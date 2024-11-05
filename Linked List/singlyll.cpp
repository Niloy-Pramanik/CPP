#include<iostream>
using namespace std;

struct node{
    int num;
    node *next;
};

struct node *head=NULL;

void insert_Node(int n){
    struct node *new_node= new node;
    new_node->num=n;
    new_node->next=head;
    head=new_node;
}

void display_all_Nodes(){

    struct node *temp=head;
    while(temp !=NULL){
        cout<<temp->num<<" ";
        temp=temp->next;
    }
    cout<<endl;


}
int main(){
    insert_Node(1);
    insert_Node(3);
          insert_Node(5);

          insert_Node(7);
            insert_Node(9);
              insert_Node(11);
                insert_Node(10);
                display_all_Nodes();

      

                return 0;
}
