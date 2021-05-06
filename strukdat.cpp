#include <iostream>
#include <string>
using namespace std;

// Mending make string / char[] ??

// Deklarasi-deklarasi
const int banyakSoal= 10 ;      // Diisi jumlah soalnya (digunakan untuk batas stack)
string soal[banyakSoal] {"Siapa nama kahim yang menjabat di tahun ini?","Siapa nama Wakahim tahun ini?"};   // Isi soal-soal 
string opsiA[banyakSoal] {"Andre","Attila"}; // Isi opsi A dari tiap soal (Pastiin urutannya sama misal ["OpsiA soal 1","OpsiA soal 2",...])
string opsiB[banyakSoal] {"Indah","Anjay"};
string opsiC[banyakSoal] {"Saddam","Evan"};
string opsiD[banyakSoal] {"Bagas","Anki"};
string jawaban[banyakSoal] {"C","D"} ; // Isi dengan opsi yang benar dari tiap soal

struct nodeQueue{
    int priortiy;               // Priority
    int tema;                   // Tema ke -n
    string namaTema;            // Nama tema nya (ex = "Sejarah Himatif")
    nodeLinkedList* paketSoal;  // LinkedList dari soal 
    nodeQueue* next;
};

struct nodeLinkedList{
    int noSoal;           // Soal ke -n
    string soal;          // Soalnya (ex = "Siapa nama kahim sekarang ?")
    string opsiA;         // isi dari opsi A (ex = "Andre")
    string opsiB;         // isi dari opsi B (ex = "Windu")
    string opsiC;         // isi dari opsi C (ex = "Indah")
    string opsiD;         // isi dari opsi D (ex = "Saddam")
    char   jawaban;       // jawaban yang benar (ex = "d")
};

struct nodeStack{
    int tema[3];                // banyak tema
    int points[banyakSoal];     // berisi jumlah perolehan points
    int TOP;
};

typedef nodeQueue* nQPtr;       // Pointer nodeQueue

struct Queue{
    nQPtr head;
    nQPtr tail;
};

Queue Q;

void createQueue(Queue& Q) {
    Q.head = nullptr;
    Q.tail = nullptr;
}



int  main(){

}