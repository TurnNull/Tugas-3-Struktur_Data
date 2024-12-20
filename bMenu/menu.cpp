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

void masukArray(int data[100]) {
  system("cls");
  cout<<"Masukan panjang data : ";
  cin>>n;
  for(int i = 1; i <= n; i++) {
    cout << "Masukan data ke ["<< i <<"] : ";
    cin >> data[i];
  }
  getch();
}

void tampilArray(int data[100]) {
  system("cls"); 
  cout << "Data yang telah dimasukkan: " << endl;
  for (int i = 1; i <= n; i++) {
      cout << "data[" << i << "] = " << data[i] << endl;
  }
  getch();
}

void bubbleSortAsc(int data[100]) {
  system("cls");
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i; j--) {
      if (data[j] < data[j-1]) {
          tukar(&data[j], &data[j-1]);
      }
    }
  }

  for (int i = 0; i+1 <= n; i++) {
    cout << "data[" << i << "] = " << data[i] << endl;
  }
  getch(); 
}

void bubbleSortDsc(int data[100]) {
  system("cls");
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= n-i; j++) {
      if (data[j] < data[j+1]) {
          tukar(&data[j], &data[j+1]);
      }
    }
  }

  for (int i = 1; i+1 <= n+1; i++) {
    cout << "data[" << i << "] = " << data[i] << endl;
  }
  getch(); 
}

int main() {
  int data[100];
  char pl; 
  do {
    dMenu();
    pl=getch();
  switch (pl) {
    case '1':
      masukArray(data);
      break;
    case '2':
      tampilArray(data);
      break;  
    case '3':
      bubbleSortAsc(data);
      break;  
    case '4':
      bubbleSortDsc(data);
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