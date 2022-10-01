#include <iostream>
using namespace std;

struct data_siswa{
        string nama_depan;
        string nama_belakang;
        int nim;
        int umur;
    }ds1;
int main(){
    cin>>ds1.nama_depan;
    cin>>ds1.nama_belakang;
    cin>>ds1.nim;
    cin>>ds1.umur;

    cout<<ds1.nama_depan<<" "<<ds1.nama_belakang<<" "<<ds1.nim<<" "<<ds1.umur;
}