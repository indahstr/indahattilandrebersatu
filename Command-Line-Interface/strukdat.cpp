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
    int npmUser,point;
    linkedList head = nullptr;
    pointerLL NewLL = nullptr;
    char answer;
    
    createDataMhs(pohon,NewTree);
    createSoal(head,NewLL);
    pointerLL curr = head; // Penunjuk soal
    
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
        if(answer == curr->jawaban){
            point++;
        }curr = curr->next;
        system("cls");
    }
    cout<<point;

    
    

}