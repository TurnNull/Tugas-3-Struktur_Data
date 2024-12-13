#include <iostream>
#include <conio.h>
using namespace std;

int n;
void dMenu(){
  system("cls");
  cout<<"Aplikasi Sorting Bubble"<<"\n";       
  cout<<"1. Masukan data"<<"\n";            
  cout<<"2. Tampilkan data "<<"\n";            
  cout<<"3. Sorting asc "<<"\n";           
  cout<<"4. Sorting dsc"<<"\n";            
  cout<<"5. Exit"<<"\n";           
  cout<<"Masukan angka : ";        
}

void mPertama(string pesan){
  system("cls");
  cout<<"hallo saya menu "<<pesan;
  getch();
}

void tukar(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void tampilArray() {
  // 
}

void tampilAsc() {
  // 
}

void tampilDsc() {
  // 
}

int main() {
  char pl;
  int data[100]; 
  do {
    dMenu();
    pl=getch();
  switch (pl) {
    case '1':
      /* code */
      system("cls");
      cout<<"Masukan panjang data : ";
      cin>>n;
      for(int i = 1; i <= n; i++) {
        cout << "Masukan data ke ["<< i <<"] : ";
        cin >> data[i];
      }
      getch();
      break;
    case '2':
      /* code */
      break;  
    case '3':
      mPertama("ke- tiga");
      /* code */
      break;  
    case '4':
      mPertama("ke- empat");
      /* code */
      break;  
    case '5':
      /* code */
      break;
    default:
      system("cls");
      cout<<"Pilihan Tidak Tersedia";
      getch();
      break;
    }
  } while (pl!='5');
    return 0;
}