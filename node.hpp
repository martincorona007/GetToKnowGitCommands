#ifndef NODE_HPP
#define NODE_HPP
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
typedef int KindData;
struct nodeType{
    KindData info;
    nodeType* link;
};
class node{

private:
    nodeType* head;

public:
    node();
    ~node();
    //deleted
    void deleteLast();
    void deleteFirst();
    //insert
    void insertFirst(int);
    void insertLast(int);
    void insertBeforeOfX(int,int);
    void insertAfterOfX(int,int);
    void destroylist();


    void display();
    bool isEmpty();

};
#endif //NODE_HPP
