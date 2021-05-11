#include <iostream>
#include <string>
#include "NPM.h"

using namespace std;

// Cout-cout cuma buat debug



int main(){
    cout<<"Program Runnin'";        

    // Variables
    Tree pohon = nullptr;
    pointerTree New = nullptr;
    
    createDataMhs(pohon,New);
    inOrder(pohon);
}