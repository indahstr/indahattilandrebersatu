#ifndef STACK_POINTS_H
#define STACK_POINTS_H

// Header berisi fungsi-fungsi stack perolehan point
#include <QString>
#include <QtGlobal>

using namespace std;

struct stackNode{
    qint16 tema;
    qint16 pts;
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

void createNodeStack (pointerStack& New, qint16 tema, qint16 pts){
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

qint16 getPoint(Stack Top,qint16 tema){
    qint16 point=0;
    pointerStack Temp = Top;
    if(isEmpty(Top)){
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

#endif // STACK_POINTS_H
