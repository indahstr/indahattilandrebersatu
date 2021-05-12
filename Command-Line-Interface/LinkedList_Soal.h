    // Header berisi fungsi-fungsi soal (Implementasi LinkedList)
#include <iostream>
#include <string>

using namespace std;

const int banyakSoal= 30 ;     

string soal[banyakSoal] {"Badan Kelengkapan Himatif FMIPA Unpad yang memiliki fungsi legislasi, pengawasan, aspirasi, advokasi, dan budgeting adalah...","DPA Himatif FMIPA Unpad beranggotakan maksimal ... persen dari jumlah Anggota Penuh Himatif FMIPA Unpad setiap angkatan...","Departemen yang bertujuan untuk membantu dan memperluas wawasan Anggota Himatif FMIPA Unpad untuk meningkatkan prestasi akademiknya adalah...","Departemen yang memiliki tugas untuk menentukan konsep pengaderan agar dapat membentuk karakter regenerasi Himatif yang hebat kedepannya adalah...","Badan yang bertanggungjawab dalam urusan administrasi Himatif FMIPA Unpad adalah...","Departemen yang mengurus berbagai hal yang berkaitan dengan kegiatan keagamaan bagi anggota Himatif FMIPA Unpad adalah...","Departemen yang bergerak dibidang kewirausahaan adalah...","Biro yang menangani hal–hal yang berhubungan dengan segala informasi, dokumentasi, dan publikasi Himatif FMIPA Unpad adalah...","Biro yang memfasilitasi Badan Eksekutif Himatif untuk berkembang di bidang keorganisasian serta menjaga dan meningkatkan kinerja BE Himatif adalah...","Badan Kelengkapan (BK) Himatif FMIPA Unpad yang berfungsi sebagai lembaga yuridikatif adalah...","Sebelum Himpunan Mahasiswa Teknik Informatika terbentuk, para mahasiswa baru angkatan 2012 dan 2013 berada dalam Himpunan...","Mengapa Mahasiswa Teknik Informatika tidak mendirikan himpunan sejak tahun pertama?","Angkatan 2012 melakukan koordinasi dengan angkatan 2013 dan mengadakan beberapa kali rapat musyawarah persiapan pembentukan himpunan, sehingga terbentuklah...","Tim yang baru terbentuk setelah mengadakan beberapa kali rapat musyawarah persiapan pembentukan himpunan diketuai oleh...","Tugas tim yang baru terbentuk setelah mengadakan beberapa kali rapat musyawarah persiapan pembentukan himpunan adalah...","Kapan diselenggarakannya Musyawarah Besar I?","Kapan Himpunan Mahasiswa Teknik Informatika terbentuk?","Salah satu bentuk tugas tim yang baru terbentuk setelah mengadakan beberapa kali rapat musyawarah persiapan pembentukan himpunan adalah...","Tim yang baru terbentuk setelah mengadakan beberapa kali rapat musyawarah persiapan pembentukan himpunan membuat rancangan aturan yang disebut...","Salah satu hasil Mubes I adalah...","Teknik Informatika merupakan bidang ilmu yang mempelajari...","Hackathon adalah...","Lomba capture the flag adalah...","UI/UX Competition adalah...","UX adalah...","UI adalah...","Hacker adalah...","Crack adalah...","Trojan Horse adalah...","Malware adalah..."};   // Isi soal-soal 
string opsiA[banyakSoal] {"DPA","20","Departemen PTI","Departemen PTI","Biro ADK","Departemen PTI","Departemen Kewirausahaan","Biro ADK","Biro ADK","Mubes","Himpunan Mahasiswa Statistika","Merasa nyaman di himpunan mahasiswa matematika","Tim Pelopor","Kang Calvin Cahya Montolalu","Mempersiapkan segala hal untuk berdirinya himpunan","22 Desember 2013","20 Desember 2013","Memilih basecamp himpunan","Regulasi Informatika","Warna Himpunan","Seluk beluk komponen mesin bermotor","Lomba yang mengharuskan peserta melakukan hacking kepada salah satu perusahaan","Lomba yang mengharuskan peserta melakukan hacking kepada salah satu perusahaan","Lomba yang mengharuskan peserta melakukan hacking kepada salah satu perusahaan","Proses menulis basis kode suatu program","Tampilan kode di balik layar suatu program","Penulis kode suatu program","Kegiatan membobol suatu sistem untuk mengetes keamanannya","Salah satu bentuk crack","Salah satu bentuk crack"}; // Isi opsi A dari tiap soal (Pastiin urutannya sama misal ["OpsiA soal 1","OpsiA soal 2",...])
string opsiB[banyakSoal] {"Departemen Kaderisasi","5","Departemen Agama","Departemen Kaderisas","Departemen Kaderisasi","Departemen Miba","Departemen Keuangan","Biro Sarpras","Biro Sarpras","Departemen ADK","Himpunan Mahasiswa Matematika","Tidak memiliki keinginan untuk mendirikan himpunan sendiri","Tim Pendiri Himpunan Muda","Teh Indah Sutriyatno Dolay","Membuat regulasi revisi untuk himpunan mahasiswa ilmu komputer","25 Desember 2013","25 Desember 2013","Membuat logo Program Studi Informatika","Juklak","Kepala Prodi","Proses logika dalam mengoperasikan bahasa teknologi","Kegiatan kompetisi pemrograman yang berlangsung untuk beberapa jam hingga beberapa hari","Kompetisi hacking yang dimana mengharuskan seorang/tim untuk mengambil sebuah file/string yang sudah disembunyikan sistem yang dimana disebut dengan istilah “Flag”","Kompetisi hacking yang dimana mengharuskan seorang/tim untuk mengambil sebuah file/string yang sudah disembunyikan sistem yang dimana disebut dengan istilah “Flag”","Kegiatan hack user interface","Bagian dari UX yang berupa tampilan visual design sebuah sistem","Orang yang bertugas untuk membuat desain suatu program","Aktivitas pembobolan suatu software berbayar secara ilegal","Virus yang merusak suatu system secara eksplisit","Virus yang merusak suatu system secara eksplisit"};
string opsiC[banyakSoal] {"Departemen Miba","10","Departemen Miba","Departemen Miba","Departemen Miba","Departemen Keagamaan","Departemen Miba","Biro Medinfo","Biro Medinfo","Biro PO","Himpunan Mahasiswa Ilmu Komputer","Menghadapi kendala birokrasi juga kesadaran akan sedikitnya pengalaman","Tim Perintis","Kang Faishal Wahiduddin","Bermusyawarah dengan himpunan matematika","15 Desember 2013","15 Desember 2013","Berkontribusi dalam ospek fakultas","AD/ART","Regulasi Informatika","Cara merangkai smartphone dan teknologi ponsel lainnya","Lomba hack secara estafet","Lomba hack secara estafet","Kompetisi desain antarmuka sistem/produk yang berorientasi kepada kenyamanan  dan kemudahan pengguna(user) dalam menggunakan sistem/produk tersebut","Proses mendesain suatu produk melalui pendekatan pengguna","Bagian dari UX yang berupa tampilan kode hasil hack sebuah sistem","Seseorang yang menulis kode untuk suatu perusahaan","Aktivitas untuk membuat suatu source code untuk menguji security system","Virus yang merusak system computer dengan membuat RAM menjadi penuh","Virus yang merusak system computer dengan membuat RAM menjadi penuh"};
string opsiD[banyakSoal] {"Biro Keuangan","15","Departemen Keilmuan","Departemen Keilmuan","Biro Keuangan","Departemen Kerohanian","Departemen Keilmuan","Biro Keuangan","Biro PO","DPA","Himpunan Mahasiswa Aktuaria","Tidak disetujui pihak Himpunan Mahasiswa Matematika untuk mendirikan himpunan mahasiswa sendiri","Tim Koordinasi Informatika","Kang Zahran Wahiduddin","Memilih perwakilan untuk mempelajari birokrasi","13 Desember 2013","22 Desember 2013","Membuat rancangan aturan-aturan himpunan teknik informatika yang akan terbentuk nanti","Tata Tertib Himpunan","Ketua Himatif","Bagaimana menggunakan teknologi komputer untuk menangani masalah pengolahan data dengan proses logika","Kegiatan kompetisi untuk memperlihatkan kemampuan hack dan crack","Kompetisi hacking yang dimana mengharuskan seorang/tim untuk mengambil sebuah bendera yang sudah disembunyikan di dalam komputer","Kompetisi hacking yang dimana mengharuskan seorang/tim untuk mengambil sebuah bendera yang sudah disembunyikan di dalam komputer","proses mendesain suatu produk melalui pendekatan programmmer","Tampilan visual sebuah sistem program yang berupa grafik","Programmer yang terampil yang menggunakan pengetahuan informatika mereka untuk mengatasi masalah suatu sistem atau program","Kegiatan menulis kode program","Malware yang sering menyamar sebagai software/perangkat lunak yang sah","Software yang dirancang untuk menyebabkan kerusakan pada komputer, server, klien, atau network"};
string jawaban[banyakSoal] {"A","C","D","B","A","C","A","C","D","A","B","C","C","C","A","A","D","D","C","D","D","B","B","C","C","B","D","B","D","D"} ; // Isi dengan opsi yang benar tiap soal

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
