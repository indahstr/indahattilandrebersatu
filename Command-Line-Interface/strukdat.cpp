#include <iostream>
#include <string>
#include "BST_DataMhs.h"
#include "LinkedList_Soal.h"
#include "Stack_Points.h"

using namespace std;

// Cout-cout cuma buat debug



int main(){
    cout<<"Program Runnin'\n";        

    // Variables
    Tree pohon = nullptr;
    pointerTree New = nullptr;
    
    createDataMhs(pohon,New);
    inOrder(pohon);

    cout<<"\nNAMA NPM 48 \t: "<<cariNamaMhs(pohon,48);
}