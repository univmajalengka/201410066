#include<iostream>
using namespace std;
int main()
{
    cout<<"Tugas Membuat Kalkulator Sederhana"<< endl;

	cout<<"Pilih Menu : "<<endl;
	cout<<"1. Pertambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Sisa Hasil Bagi"<<endl;

    int  a,b,c, menu;
	float d,e,f;

    //masukan pemilihan operasi
    cout <<"Pilih/Masukan Operasi :  ";
	cin>>menu;
     //keluaran hasil  pemilihan operasi 
    cout <<"Anda Memilih Operasi :  "<< menu;
	if(menu==1){
         //Pertambahan
        cout<<"\n\nIni adalah Operasi pertambahan(+)"<< endl;
        cout <<"a :  ";
		cin>>a;
         cout <<"b :  ";
		cin>>b;
         //operasi pertambahan
		c=a+b;
		cout<<"hasil >>"<<a<<"+"<< b <<"="<<c;
	}else if(menu==2){
        //pengurangan
        cout<<"\n\nIni adalah Operasi Pengurangan (-)"<< endl;
        cout <<"a :  ";
		cin>>a;
        cout <<"b :  ";
		cin>>b;
       //proses pengurangan 
		c=a-b;
        //keluaran
			cout<<"hasil >>"<<a<<"-"<< b <<"="<< c;
    }
      else if(menu==3){
         //perkalian
		cout<<"\n\nIni adalah Operasi Perkalian (*)"<< endl;
        cout <<"a :  ";
		cin>>a;
        cout <<"b :  ";
		cin>>b;
         //proses perkalian
		c=a*b;
         //keluaran
	   cout<<"hasil >>"<<a<<"*"<< b <<"="<< c;
      }
      else if(menu==4){
         //pembagian
		cout<<"\n\nIni adalah Operasi pembagian (/)"<< endl;
        cout <<"a :  ";
		cin>>a;
        cout <<"b :  ";
		cin>>b;
         //proses pembagian
		c=a/b;
         //keluaran
		cout<<"hasil >>"<<a<<"/"<< b<<"="<< c;
    }else if(menu==5){
         //sisa hasil bagi  
		cout<<"\n\nIni adalah Operasi Sisa Hasil Bagi (%)"<< endl;
        cout <<"a :  ";
		cin>>a;
        cout <<"b :  ";
		cin>>b;
        //proses
		c=a%b;
         //keluaran
		cout<<"hasil >>"<<a<<"%"<< b<<"="<< c;
	}else{
		cout<<"Menu Tidak Ada";
	}
	return false;
}

