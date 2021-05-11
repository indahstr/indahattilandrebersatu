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
Stack Top;


