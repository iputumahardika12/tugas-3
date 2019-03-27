#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

main()
{
    system("color f6");
    int n,k,l,z,pos,tampung;
    int nilai[20];

     cout << "\t\t\t\t\t-------------------------------------" << endl;
    cout << "\t\t\t\t\t|\tI PUTU MAHARDIKA            |" << endl;
    cout << "\t\t\t\t\t|\t18050623008                 |" << endl;
      cout << "\t\t\t\t\t|\tD3 MANAJEMEN INFORMATIKA    |" << endl;
    cout << "\t\t\t\t\t-------------------------------------" << endl;

    cout<<"Masukan banyak inputan : ";
    cin>>n;
    cout<<"======================="<<endl;
    for (int k=0; k<n; k++)
    {
        cout<<"Nilai ke "<<(k+1)<<" : ";
        cin>>nilai[k];
    }
   cout<<endl;
   cout<<"Sebelum Sorting"<<endl;
   cout<<"====================="<<endl;
   for (int k=0; k<n; k++)
   {
        cout<<nilai[k]<<endl;
   }
   cout<<endl;

for (int k=0; k<n-1;++k)
 {
  pos=k;
  for (int l=k+1; l<n;++l)
    {
        if (nilai[l]<nilai[pos])
        {
            pos=l;
        }
    }
  if (pos !=k)
    {
        tampung=nilai[pos];
        nilai[pos]=nilai[k];
        nilai[k]=tampung;
    }
  cout<<"langkah ke "<<k+1<<endl;
  cout<<"-----------------------"<<endl;
    for (int z=0; z<n;++z)
    {
        cout<<nilai[z]<<endl;
    }
  cout<<endl;
 }

    cout<<"Setelah sorting : \n";
    cout<<"======================="<<endl;
    for (int k=0; k<n;++k)
    {
        cout<<nilai[k]<<endl;
    }

getch();
}
