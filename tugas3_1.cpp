#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int uamas, harga[100], jumbar[100], subtot[100], hartot, uakem;
    string nama[100];
    cout<<"============================="<<endl;
    cout<<"-------Toko Siapa ya?--------"<<endl;
    cout<<"============================="<<endl;
    int totbar;
    cout<<"Jumlah Barang: ";cin>>totbar;
    cout<<endl;
    for (int i=0;i<totbar;i++){
        cout<<"Nama Barang   : ";cin>>nama[i];
        cout<<"Jumlah Barang : ";cin>>jumbar[i];
        cout<<"Harga Barang  : ";cin>>harga[i];

        subtot[i] = harga[i]*jumbar[i];
        cout<<"-----------------------------"<<endl;
        cout<<"Total         :"<<subtot[i]<<endl;
        hartot+=subtot[i];
    }
    cout<<endl;
    cout<<"Uang diterima : ";cin>>uamas;
    cout<<endl;
    cout<<"____________________________________________________"<<endl;
    cout<<" No    Nama Barang    Jumlah barang    harga barang"<<endl;
    for (int i=0;i<totbar;i++){
        cout<<setw(2)<<i+1<<setw(12)<<nama[i]<<setw(15)<<jumbar[i]<<setw(17)<<harga[i]<<endl;
    }
    cout<<"____________________________________________________"<<endl;
    cout<<"JUMLAH TOTAL"<<setw(35)<<hartot<<endl;

    cout<<endl;
    cout<<endl;
    uakem = uamas-hartot;
    cout<<"Uang diterima  ; "<<uamas<<endl;
    cout<<"Uang Kembalian : "<<uakem<<endl;

}