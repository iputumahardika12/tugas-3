#include <iostream>
#include <windows.h>
using namespace std;

int data[10], input[10];
int n;

void insertion_sort()
{
 	 int temp, k, l;
 	 for(k=1;k<=n;k++)
 	 {
  	  	  temp = data[k];
  	  	  l = k -1;
		while(data[l]>temp && l>=0)
 	    {
   	   	   data[l+1] = data[l];
   	   	   l--;
		}
  
  	  data[l+1] = temp;
 	 }
}

main()
{
	system("color f6");
	cout << "\t\t\t\t\t-------------------------------------" << endl;
    cout << "\t\t\t\t\t|\tI PUTU MAHARDIKA            |" << endl;
    cout << "\t\t\t\t\t|\t18050623008                 |" << endl;
      cout << "\t\t\t\t\t|\tD3 MANAJEMEN INFORMATIKA    |" << endl;
    cout << "\t\t\t\t\t-------------------------------------" << endl;
    cout<<endl;
 	 cout << "Masukkan jumlah data:";
 	 cin >> n;
 	 cout << endl;
 	 for(int k=1; k<=n; k++)
 	 {
  	  	  cout << "Masukkan data ke-" << k << ": ";
  	  	  cin >> data[k];
  	  	  input[k] = data[k];
 	 }

  insertion_sort();
 
 	 cout << "\nData Setelah diurutkan" << endl;
 	 cout << "------------------------" << endl;
 	 for(int k=1; k<=n; k++)
 	 {
		cout << data[k] << " ";
 	 }
 	 cout << endl;
 	 system("pause");
}
