    // Header berisi fungsi-fungsi soal (Implementasi LinkedList)
#include <iostream>
#include <string>

using namespace std;

const int banyakSoal= 30 ;

string soal[banyakSoal] {"Badan Kelengkapan Himatif FMIPA Unpad yang memiliki fungsi legislasi, pengawasan, aspirasi, advokasi, dan budgeting adalah...","DPA Himatif FMIPA Unpad beranggotakan maksimal ... persen dari jumlah Anggota Penuh Himatif FMIPA Unpad setiap angkatan...","Departemen yang bertujuan untuk membantu dan memperluas wawasan Anggota Himatif FMIPA Unpad untuk meningkatkan prestasi akademiknya adalah...","Departemen yang memiliki tugas untuk menentukan konsep pengaderan agar dapat membentuk karakter regenerasi Himatif yang hebat kedepannya adalah...","Badan yang bertanggungjawab dalam urusan administrasi Himatif FMIPA Unpad adalah...","Departemen yang mengurus berbagai hal yang berkaitan dengan kegiatan keagamaan bagi anggota Himatif FMIPA Unpad adalah...","Departemen yang bergerak dibidang kewirausahaan adalah...","Biro yang menangani hal–hal yang berhubungan dengan segala informasi, dokumentasi, dan publikasi Himatif FMIPA Unpad adalah...","Biro yang memfasilitasi Badan Eksekutif Himatif untuk berkembang di bidang keorganisasian serta menjaga dan meningkatkan kinerja BE Himatif adalah...","Badan Kelengkapan (BK) Himatif FMIPA Unpad yang berfungsi sebagai lembaga yuridikatif adalah...","Sebelum Himpunan Mahasiswa Teknik Informatika terbentuk, para mahasiswa baru angkatan 2012 dan 2013 berada dalam Himpunan...","Mengapa Mahasiswa Teknik Informatika tidak mendirikan himpunan sejak tahun pertama?","Angkatan 2012 melakukan koordinasi dengan angkatan 2013 dan mengadakan beberapa kali rapat musyawarah persiapan pembentukan himpunan, sehingga terbentuklah...","Tim yang baru terbentuk setelah mengadakan beberapa kali rapat musyawarah persiapan pembentukan himpunan diketuai oleh...","Tugas tim yang baru terbentuk setelah mengadakan beberapa kali rapat musyawarah persiapan pembentukan himpunan adalah...","Kapan diselenggarakannya Musyawarah Besar I?","Kapan Himpunan Mahasiswa Teknik Informatika terbentuk?","Salah satu bentuk tugas tim yang baru terbentuk setelah mengadakan beberapa kali rapat musyawarah persiapan pembentukan himpunan adalah...","Tim yang baru terbentuk setelah mengadakan beberapa kali rapat musyawarah persiapan pembentukan himpunan membuat rancangan aturan yang disebut...","Salah satu hasil Mubes I adalah...","Teknik Informatika merupakan bidang ilmu yang mempelajari...","Hackathon adalah...","Lomba capture the flag adalah mengharuskan peserta/tim untuk...","UI/UX Competition mengharuskan peserta/tim untuk...","UX adalah proses mendesain suatu produk melalui pendekatan...","UI adalah bagian dari UX yang berupa tampilan...","Hacker adalah rogrammer yang terampil yang menggunakan pengetahuan informatika mereka untuk mengatasi...","Crack adalah aktivitas pembobolan suatu...","Trojan Horse adalah malware yang sering menyamar sebagai...","Malware adalah software yang dirancang untuk menyebabkan..."};   // Isi soal-soal 
string opsiA[banyakSoal] {"DPA","20","Departemen PTI","Departemen PTI","Biro ADK","Departemen PTI","Departemen Kewirausahaan","Biro ADK","Biro ADK","Mubes","Himpunan Mahasiswa Statistika","Merasa nyaman di Himpunan Matematika","Tim Pelopor","Kang Calvin Cahya Montolalu","Mempersiapkan keperluan untuk himpunan baru","22 Desember 2013","20 Desember 2013","Memilih basecamp himpunan","Regulasi Informatika","Warna Himpunan","Seluk beluk komponen mesin bermotor","Lomba hacking kepada perusahaan","Lomba hacking kepada perusahaan","Melakukan hacking kepada perusahaan","Program","Kode di balik layar suatu program","Kode suatu program","Sistem untuk mengetes keamanannya","Salah satu bentuk hack","Ram komputer penuh"}; // Isi opsi A dari tiap soal (Pastiin urutannya sama misal ["OpsiA soal 1","OpsiA soal 2",...])
string opsiB[banyakSoal] {"Departemen Kaderisasi","5","Departemen Agama","Departemen Kaderisasi","Departemen Kaderisasi","Departemen Miba","Departemen Keuangan","Biro Sarpras","Biro Sarpras","Departemen ADK","Himpunan Mahasiswa Matematika","Tidak berkeinginan mendirikan himpunan sendiri","Tim Pendiri Himpunan Muda","Teh Indah Sutriyatno Dolay","Membuat regulasi revisi","25 Desember 2013","25 Desember 2013","Membuat logo Program Studi Informatika","Juklak","Kepala Prodi","Logika dalam smartphone","Kompetisi pemrograman jangka panjang","Mengambil file/string yang disebut “Flag”","Mengambil sebuah file/string yang disebut “Flag”","User interface","Visual design sebuah sistem","Desain suatu program","Software berbayar secara ilegal","Virus suatu system","virus komputer berpindah sistem"};
string opsiC[banyakSoal] {"Departemen Miba","10","Departemen Miba","Departemen Miba","Departemen Miba","Departemen Keagamaan","Departemen Miba","Biro Medinfo","Biro Medinfo","Biro PO","Himpunan Mahasiswa Ilmu Komputer","Menghadapi kendala birokrasi","Tim Perintis","Kang Faishal Wahiduddin","Mubes dengan himpunan matematika","15 Desember 2013","15 Desember 2013","Berkontribusi dalam ospek fakultas","AD/ART","Regulasi Informatika","Cara merangkai smartphone","Lomba hack secara estafet","Lomba hack secara estafet","Mendesain UI/UX sistem atau produk","Pengguna/User","Kode hasil hack sebuah sistem","Kode untuk suatu perusahaan","Kode untuk menguji security system","System RAM komputer","Komputer tidak dapat menyala"};
string opsiD[banyakSoal] {"Biro Keuangan","15","Departemen Keilmuan","Departemen Keilmuan","Biro Keuangan","Departemen Kerohanian","Departemen Keilmuan","Biro Keuangan","Biro PO","DPA","Himpunan Mahasiswa Aktuaria","Tidak disetujui Himpunan Matematika","Tim Koordinasi Informatika","Kang Zahran Wahiduddin","Pemilihan wakil untuk mendalami birokrasi","13 Desember 2013","22 Desember 2013","Merancang aturan himpunan yang akan terbentuk","Tata Tertib Himpunan","Ketua Himatif","Teknologi Komputer dan Proses Logika","Kompetisi untuk hack dan crack","Mengambil sebuah bendera di dalam CPU","Mengambil sebuah bendera di dalam CPU","Programmer","Sistem program berupa 3D grafik","Masalah suatu sistem atau program","Kode program suatu perusahaan","Software/perangkat lunak yang sah","Kerusakan pada komputer, server, atau network"};
char jawaban[banyakSoal] {'A','C','D','B','A','C','A','C','D','A','B','C','C','C','A','A','D','D','C','D','D','B','B','C','C','B','D','B','D','D'} ; // Isi dengan opsi yang benar tiap soal

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

void createSoal(linkedList& head, pointerLL New){
    for(int i=0; i<banyakSoal;i++){
        if(i<10){
            createNodeLL(New,1,i+1,soal[i],opsiA[i],opsiB[i],opsiC[i],opsiD[i],jawaban[i]);
        }else if(i >= 10 && i<20){
            createNodeLL(New,2,i+1,soal[i],opsiA[i],opsiB[i],opsiC[i],opsiD[i],jawaban[i]);
        }else {
            createNodeLL(New,3,i+1,soal[i],opsiA[i],opsiB[i],opsiC[i],opsiD[i],jawaban[i]);
        }
        insertLast(head,New);
    }
}

void traverseSoal(linkedList head){
    pointerLL temp = head;
    while(temp!=nullptr){
        cout<<temp->noSoal<<".\t"<< temp->soal<<'\n'<<temp->opsiA<<'\n'<<temp->opsiB<<'\n'<<temp->opsiC<<'\n'<<temp->opsiD<<"\nJawaban : "<<temp->jawaban<<"\n\n";
        temp=temp->next;
    }
}
