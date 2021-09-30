/* -------------------------------------------------------------
   contoh ini telah di-compile pada sistem operasi Linux 
   dengan compiler gcc. nama file jumlah_ganjil.c
   perintah compile : gcc jumlah_ganjil.c -o jumlah_ganjil        
   jika tidak ada kesalahan, program dapat dijalankan dengan 
   memberikan perintah:

   ./jumlah_ganjil

   #dwi sakethi 10 oktober 2018         
   ------------------------------------------------------------- */

// menyertakan library untuk memasukkan data dan mencetak
// data ke layar
#include<iostream>
#include <stdio.h>
using namespace std;

// program bahasa C harus memiliki fungsi main
int main()
{
   int bilangan;
   int sisa_pembagian;
   
   // mencetak judul
   cout<<"Program Bilangan Ganjil/Genap";

   // menanyakan suatu bilangan
   cout<<"\nMasukkan suatu bilangan: ";cin>>bilangan;
   
   // menghitung sisa pembagian
   sisa_pembagian = bilangan % 2;
   
   // mencek apakah sisa pembagian sama dengan 0
   if (sisa_pembagian==0)
      {
	     cout<<("\nBilangan genap");
      }
   else   
      {
	     cout<<("\nBilangan ganjil");
      }
      
  // karena int main, maka harus ada return
  return 1;   
}
