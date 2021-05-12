    // Header berisi fungsi-fungsi soal (Implementasi LinkedList)
#include <iostream>
#include <string>

using namespace std;

const int banyakSoal= 30 ;     

string soal[banyakSoal] {"Badan Kelengkapan Himatif FMIPA Unpad yang memiliki fungsi legislasi, pengawasan, aspirasi, advokasi, dan budgeting adalah...","DPA Himatif FMIPA Unpad beranggotakan maksimal ... persen dari jumlah Anggota Penuh Himatif FMIPA Unpad setiap angkatan...","Departemen yang bertujuan untuk membantu dan memperluas wawasan Anggota Himatif FMIPA Unpad untuk meningkatkan prestasi akademiknya adalah...","Departemen yang memiliki tugas untuk menentukan konsep pengaderan agar dapat membentuk karakter regenerasi Himatif yang hebat kedepannya adalah...","Badan yang bertanggungjawab dalam urusan administrasi Himatif FMIPA Unpad adalah...","Departemen yang mengurus berbagai hal yang berkaitan dengan kegiatan keagamaan bagi anggota Himatif FMIPA Unpad adalah...","Departemen yang bergerak dibidang kewirausahaan adalah...","Biro yang menangani hal–hal yang berhubungan dengan segala informasi, dokumentasi, dan publikasi Himatif FMIPA Unpad adalah...","Biro yang memfasilitasi Badan Eksekutif Himatif untuk berkembang di bidang keorganisasian serta menjaga dan meningkatkan kinerja BE Himatif adalah...","Badan Kelengkapan (BK) Himatif FMIPA Unpad yang berfungsi sebagai lembaga yuridikatif adalah..."};   // Isi soal-soal 
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
