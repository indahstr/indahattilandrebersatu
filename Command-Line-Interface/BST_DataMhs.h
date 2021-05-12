// Header berisi binary search tree Npm-Nama
#include <iostream>
#include <string>

using namespace std;

string dataNama[68]{"Andre Nathaniel A.","M. Attila An Naufal","Indah Sutriyati","Ariq Hakim Ruswadi","Rommel Malik Kusnadi",
                  "Affan Rifqy Kurniadi","Aulia Rahmanita","Alfadli Maulana Siddik","Hali Putri Aisyah","Rangga Putra",
                   "Anggie Forestry","Wafi Fahruzzaman","Rizky Mahardika Hariyanto","Faiq Muhammad","Della Fauziyyah Husna",
                   "Rihlan Lumenda Suherman","Nawang Ilmi Adzani","Nanda Raihan Sukma","Muhammad Daffa Alifiandi","Mohammad Keenan Febriansyah",
                   "Zhillan Thafhan Ahda","Muhammad Zidan Khairan","Andaru Danurdara Wibisana","Rifqi Akmal Fauzi","Osmond Haylim",
                   "Rheza Pandya Andhikaputra"," Jonathan Victor Goklas","Raihan Fadhlal Aziz","Mu'az Abdul Rohim","Harta Rama",
                   "Ananda Shaquille Farell","Adnan Rafiyansyah Majid","Fauzan Azmi Dwicahyo","Ahmad Yahya Salim","Irfan Kamal",
                   "Rafa Azka Ulinnuha","Anna Safira Dila","Naufal Fahrezi","Laura Azra Aprilyanti","Azka Ghafara Putra Agung",
                   "Pujo Prayogo","Rifqy Kurnia Sudarman","Alvaro Dwi Oktaviano","Johanes Bagus Prasetyo","Ade Dwi Fatwa Sembiring",
                   "Amalia Nur Fitri","Muhammad Nabil Fikri Sudjarpadi Putra","Kharisma Fitri Nurunnisa Siahaan","Rafiansyah Rasyid Wikawang","Fikri Arkani Salim",
                   "Wildan Hanif Musyaffa","Fasya Nurina Izzati","Calvin Calfi Montolalu","Wafa Tsabita","Rafi Alauddin",
                   "Bismo Panji Kusumo","Amariel Danendra Dagna","Deani Puteri Virdiana","Alya Raisa Hidayat","Andyka Baswara Putra",
                   "Zahran Hanif Fathanmubin","Muhamad Davio Athallah","Muhammad Ariiq Rakha Shafa","Hanifan Ayusti Khairunnisa","Muthia Azzahra",
                   "Abraham Javier Sebastian Situmorang","Satriyatama Tristan Suharjono","Akmal Lutfi Muzzaki"}; // isiin Nama mahasiswaa (Sesuaiin sm dataNPM urutannya)
int dataNpm[68]{42,48,40,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,41,43,44,45,46,47,49,50,
              51,52,53,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69}; //npm 54 udah pindah sejak dulu

struct treeNode{
    int npm;
    string nama;
    treeNode *Left;
    treeNode *Right;
};

using pointerTree = treeNode*;
using Tree  = pointerTree;

void createNodeTree(pointerTree& New, int npm, string nama){
    New = new treeNode;
    New->Left = nullptr;
    New->npm = npm;
    New->nama = nama;
    New->Right = nullptr;
}

void insertBST(Tree& root,pointerTree New){
    if (root == nullptr){
        root = New;
    }else if (New->npm < root->npm){
        insertBST(root->Left, New);
    }else {
        insertBST(root->Right,New);
    }
}

void inOrder(Tree& root){                    // Nanti mau diubah
    if(root!=nullptr){
        inOrder(root->Left);
        cout<<"\nNPM\t:"<<root->npm<<"\t\tNama\t: "<<root->nama<<endl;
        inOrder(root->Right);
    }
}

string cariNamaMhs(Tree& root, int npm){
    if(root != nullptr){
        if(root->npm == npm){
            return root->nama;
        }
        if(root->npm < npm){
            return cariNamaMhs(root->Right,npm);
        }else {
            return cariNamaMhs(root->Left,npm);
        }
    }
    return "noName";
}


void createDataMhs(Tree& root,pointerTree New){
    for(int i=0;i<3;i++){
        createNodeTree(New,dataNpm[i],dataNama[i]);
        insertBST(root,New);
    }
}

