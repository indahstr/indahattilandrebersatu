    // Header berisi fungsi-fungsi soal (Implementasi LinkedList)
#include <iostream>
#include <string>

using namespace std;

const int banyakSoal= 10 ;     

string soal[banyakSoal] {"Siapa nama kahim yang menjabat di tahun ini?","Siapa nama Wakahim tahun ini?"};   // Isi soal-soal 
string opsiA[banyakSoal] {"Andre","Attila"}; // Isi opsi A dari tiap soal (Pastiin urutannya sama misal ["OpsiA soal 1","OpsiA soal 2",...])
string opsiB[banyakSoal] {"Indah","Anjay"};
string opsiC[banyakSoal] {"Saddam","Evan"};
string opsiD[banyakSoal] {"Bagas","Anki"};
string jawaban[banyakSoal] {"C","D"} ; // Isi dengan opsi yang benar tiap soal

struct LLNode{
    int     tema;
    int     noSoal;           
    string  soal;          
    string  opsiA;         
    string  opsiB;         
    string  opsiC;         
    string  opsiD;         
    char    jawaban;       
    LLNode* next;
};

using pointerLL = LLNode*;
using linkedList = pointerLL;

void createNodeLL(pointerLL& New,int tema,int noSoal,string soal,string opsiA,string opsiB,string opsiC,string opsiD,char jwb){
    New = new LLNode;
    New->tema = tema;
    New->noSoal = noSoal;
    New->soal = soal;
    New->opsiA = opsiA;
    New->opsiB = opsiB;
    New->opsiC = opsiC;
    New->opsiD = opsiD;
    New->jawaban = jwb;
    New->next = nullptr;
}

void insertLast(linkedList& head, pointerLL New){
    if(head == nullptr){
        head=New;
    }else {
        pointerLL tmp=head;
        while(tmp->next != nullptr){
            tmp = tmp->next;
        }
        tmp->next = New;
    }
}