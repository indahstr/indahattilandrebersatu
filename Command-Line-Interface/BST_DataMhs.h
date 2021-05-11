// Header berisi binary search tree Npm-Nama
#include <iostream>
#include <string>

using namespace std;

string dataNama[3]{"Andre Nathaniel A.","M. Attila An Naufal","Indah Sutriyati"}; // isiin Nama mahasiswaa (Sesuaiin sm dataNPM urutannya)
int dataNpm[3]{42,48,40};

struct treeNode{
    int npm;
    string nama;
    treeNode *Left;
    treeNode *Right;
};

using pointerTree = treeNode*;
using Tree  = pointerTree;

void createNodeTree(pointerTree& New, int npm, string nama){
    New = new treeNode;
    New->Left = nullptr;
    New->npm = npm;
    New->nama = nama;
    New->Right = nullptr;
}

void insertBST(Tree& root,pointerTree New){
    if (root == nullptr){
        root = New;
    }else if (New->npm < root->npm){
        insertBST(root->Left, New);
    }else {
        insertBST(root->Right,New);
    }
}

void inOrder(Tree& root){                    // Nanti mau diubah
    if(root!=nullptr){
        inOrder(root->Left);
        cout<<"\nNPM\t:"<<root->npm<<"\t\tNama\t: "<<root->nama<<endl;
        inOrder(root->Right);
    }
}

string cariNamaMhs(Tree& root, int npm){
    if(root != nullptr){
        if(root->npm == npm){
            return root->nama;
        }
        if(root->npm < npm){
            return cariNamaMhs(root->Right,npm);
        }else {
            return cariNamaMhs(root->Left,npm);
        }
    }
    return "noName";
}


void createDataMhs(Tree& root,pointerTree New){
    for(int i=0;i<3;i++){
        createNodeTree(New,dataNpm[i],dataNama[i]);
        insertBST(root,New);
    }
}

