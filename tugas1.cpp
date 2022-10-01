#include <iostream>
using namespace std;
int main()
{
      int i, j, masuk;
      cout << "Masukkan jumlah baris: ";
      cin >>masuk;  
      int num1 = masuk / 2 * 3;
      cout << "Panah kanan" << endl;
      for (i = 0; i < masuk; i++)
      {
            for (j = 0; j < masuk; j++)
            {                 
                  if (i == masuk / 2 || j - i == masuk / 2 || i + j == num1)
                        cout << "*";
                  else
                        cout << " ";
            }
            cout << "\n";
      }
       
      cout << "Panah kiri" << endl;
      for (i = 0; i < masuk; i++)
      {
            for (j = 0; j < masuk; j++)
            {                 
                  if (i == masuk / 2 || i - j == masuk / 2 || i + j == masuk / 2)
                        cout << "*";
                  else
                        cout << " ";
            }
            cout << "\n";
      }
      return 0;
}