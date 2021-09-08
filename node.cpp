#include "node.hpp"

node::node(){
    head=NULL;
}
node::~node(){
    delete head;
}
//Delete
void node::deleteLast(){
    nodeType* Q=new nodeType;
    nodeType* T=new nodeType;
    Q=head;
    if(head->link==NULL){
        head=NULL;
    }else{
        while(Q->link!=NULL){
            T=Q;
            Q=Q->link;
        }
        T->link=NULL;
    }
    delete Q;
}
void node::deleteFirst(){
    nodeType* Q=new nodeType;
    Q=head;//pointer Q point to likedList's first
    head=Q->link;//head point to Q for delete the first node
    delete Q;//delete
}

//Insert
void node::insertAfterOfX(int x, int data){
    nodeType* Q=new nodeType;//newNode
    nodeType* T=new nodeType;//pointer to the new node, witch going to add to the list
    int BAND;
    Q=head; BAND=1;
    while((Q->info!=x)&&(BAND==1)){//checking the info different of x in each node
        if(Q->link!=NULL){//pointing to the end of the list
            Q=Q->link;//pointer to the next node
        }else{
            BAND=0;//if the data x is not found return 0
        }
    }
    if(BAND==1){
        T->info=data;//add new value with X
        T->link=Q->link;//                             -> Q [ |-]->
        Q->link=T;//   Pointer  to Q [ |-]->  T [ |-]->
    }else{
        printf("node not found \n");
    }
}
void node::insertBeforeOfX(int x,int dato){
    nodeType* Q=new nodeType;//newNode
    nodeType* X=new nodeType;//pointer to node between T and Q (dato)
    nodeType* T=new nodeType;//pointer to the node with (data) before X
    int BAND;
    Q=head; BAND=1;
    while((Q->info!=x)&&(BAND==1)){//checking the info different of x in each node
        if(Q->link!=NULL){//pointing to the end of the list
            T=Q;//pointer to the node with (data) before X
            Q=Q->link;//pointer to the next node
        }else{
            BAND=0;//if the data x is not found return 0
        }
    }
    if(BAND==1){
        X->info=dato;//add new value with X
        if(head==Q){//checking if head is equals to Q
            X->link=head;//X point to List's head
            head=X;//add new node to the list
        }else{
            T->link=X;//T point to X->
            X->link=Q;//              | dato |-|> X point to Q
        }
    }else{
        printf("node not found\n");
    }
    //  printf("X %i ",*X);
    //printf("\nT %i ",*T);
    //printf("\nQ %i ",*Q);
}
void node::insertLast(int data){
    //  nodeType* newNode=new nodeType;//p
    //  nodeType* Temp=new nodeType;//r
    nodeType* T=new nodeType;//point to the end of the list
    nodeType* Q=new nodeType;//newNode


    T=head;//point to the list
    Q->info=data;//new node
    Q->link=NULL;//new node ->null

    if(head==NULL){
        head=Q;//add a new node
    }else{
        while(T->link!=NULL){// T pass until found NULL
            T=T->link;// next next next
        }
        T->link=Q;//point to the end of the list

    }
    //  printf("first %i ",*first);
    //  printf("new node %i ",*newNode);
    //  printf("last %i ",*last);
}
void node::insertFirst(int data) {
    nodeType* newNode=new nodeType;
    newNode->info=data;
    newNode->link=head;
    head=newNode;
//printf("head %i ",*head);
//printf("new node %i ",*newNode);
}

//order

bool node::isEmpty(){

    return (head==NULL);
}
void node::display() {

    nodeType* current=head;//current as aux start with the first node
    while(current!=NULL){
        printf(" [%i|-]->",current->info);

        //printf(" [%i|—]→",current->info);
        current=current->link;
    }
}
void node::destroylist() {
    delete head;

}
