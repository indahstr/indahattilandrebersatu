// Versi CLI dari Quiz_Himatif. 
// Buat ngasih gambaran penggunaan Struktur Data nya
#include <iostream>
#include <string>
#include <windows.h>
#include "BST_DataMhs.h"
#include "LinkedList_Soal.h"
#include "Stack_Points.h"
#include "misc.h"

using namespace std;





int main(){
    
    cout<<"Program Run\n";        

    // Variables
    Tree pohon = nullptr;
    pointerTree NewTree = nullptr;
    string nPm,password;
    int npmUser;
    linkedList head = nullptr;
    pointerLL NewLL = nullptr;
    char answer;
    Stack Top = nullptr;
    pointerStack NewStack = nullptr;

    
    createDataMhs(pohon,NewTree);
    createSoal(head,NewLL);
    pointerLL curr = head; // Penunjuk soal
    createStack(Top);
    
    // inOrder(pohon); // buat ngecek pohon
    // traverseSoal(head); // buat ngecek soal

    cout<<"\nNPM\t: ";cin>>nPm;
    cout<<"PASS\t: ";password=getpass(true);

    npmUser = stoi(nPm.substr(nPm.size()-2));
    if(nPm != password){
        system("cls");
        cout<<"Password salah! Harap hubungi Asesor!!";
        Sleep(2300);
        return 0;
    }

    if(cariNamaMhs(pohon,npmUser)=="noName"){
        system("cls");
        cout<<"Username tidak terdaftar! Harap hubungi Asesor!!";
        Sleep(2300);
        return 0;
    }else{
    
    system("cls");
    cout<<"\n\nNPM\t: "<<npmUser<<"\nNama\t: "<<cariNamaMhs(pohon,npmUser)<<'\n';
    cout<<R"(
    Selamat Datang di Quiz_Himatif!
    
    Quiz ini akan berisi quiz seputar pertanyaan Himatif.
    Quiz ini akan terdiri dari 3 bab utama dengan tiap bab
    berisi 10 soal.
    
    (Isilah jawaban menggunakan Abjad dari Jawaban))";
 


    } Sleep(6000);
    system("cls");
    
    while(curr != nullptr){
        cout<<"\n\n"<<curr->noSoal<<". "<< curr->soal<<"\n\tA. "<<curr->opsiA<<"\n\tB. "<<curr->opsiB<<"\n\tC. "<<curr->opsiC<<"\n\tD. "<<curr->opsiD<<"\n\nJawab : ";cin>>answer; 
        if(int(answer)>=97 && int(answer)<=100){
            answer = int(int(answer)-32  );
        }
        if(answer == curr->jawaban){
            createNodeStack(NewStack,curr->tema,5);
            push(Top,NewStack);
        }else {
            createNodeStack(NewStack,curr->tema,0);
            push(Top,NewStack);
        }
        curr = curr->next;
        system("cls");
    }

    cout<<R"(
        Selamat!! Anda Telah Menyelesaikan seluruh 30 Soal Quiz_Himatif!
        
        Skor Anda : )";
    cout<<"\n\n\tBadan Kelengkapan Himatif: "<<getPoint(Top,1)<<"\n\tSejarah Himatif\t\t: "<<getPoint(Top,2)
        <<"\n\tTeknik Informatika\t: "<<getPoint(Top,3)<<"\n\n\tTotal Skor\t: "<<(getPoint(Top,1)+getPoint(Top,2)+getPoint(Top,3))/3 * 2<<"\n\n\tNama\t: "<<cariNamaMhs(pohon,npmUser)<<"\n\tNPM\t: 1408102000"<<npmUser<<"\n\n";


    Sleep(5000);
    return 0;

    

    
    

}