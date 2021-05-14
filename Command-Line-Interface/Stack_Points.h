// Header berisi fungsi-fungsi stack perolehan point 
#include <iostream>
#include <string>

using namespace std;

struct stackNode{
    int tema;
    int pts;
    stackNode* next;
};

using pointerStack = stackNode*;
using Stack = pointerStack;


bool isEmpty(Stack Top){
    if(Top == nullptr){
        return true;
    }else {
        return false;
    }
}

void createStack(Stack& Top){
    Top = nullptr;
}

void createNodeStack (pointerStack& New, int tema, int pts){
    New = new stackNode;
    New->tema = tema;
    New->pts = pts;
    New->next = nullptr;
}

void push (Stack& Top, pointerStack New){
    if(isEmpty(Top)){
        Top = New;
    }else {
        New->next=Top;
        Top=New;
    }
}

int getPoint(Stack Top,int tema){
    int point=0;
    pointerStack Temp = Top;
    if(isEmpty(Top)){
        cout<<"Error : Stack Point Kosong!";
    }else {
        do {
            if(Temp->tema == tema){
                point+= Temp->pts;
            }
            Temp = Temp->next;
        } while (Temp != nullptr);
    }
    return point;
}