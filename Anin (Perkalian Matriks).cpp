#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
//mendeklarasikan array dan variabel
int A[2][2], B[2][2], C[2][2];

cout << "Masukkan Nilai A11 : ";
cin >> A[0][0];
cout << "Masukkan Nilai A12 : ";
cin >> A[0][1];
cout << "Masukkan Nilai A21 : ";
cin >> A[1][0];
cout << "Masukkan Nilai A22 : ";
cin >> A[1][1];

cout << "Masukkan Nilai B11 : ";
cin >> B[0][0];
cout << "Masukkan Nilai B12 : ";
cin >> B[0][1];
cout << "Masukkan Nilai B21 : ";
cin >> B[1][0];
cout << "Masukkan Nilai B22 : ";
cin >> B[1][1];

//menghitung nilai array
C[0][0] = (A[0][0] * B[0][0]) + (A[0][1] * B[1][0]);
C[0][0] = (A[0][0] * B[0][1]) + (A[0][1] * B[1][1]);
C[0][0] = (A[1][0] * B[0][0]) + (A[1][1] * B[1][0]);
C[0][0] = (A[1][0] * B[0][1]) + (A[1][1] * B[1][1]);

cout << "Nilai Matriks C adalah: " << endl;
cout << " [ " <<C[0][0]<< " " <<C[0][1]<<" ]"<< endl;
cout << " [ " <<C[1][0]<< " " <<C[1][1]<<" ]"<< endl;

	system ("PAUSE");
	return 0;
}
