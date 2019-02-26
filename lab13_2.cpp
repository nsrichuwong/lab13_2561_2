#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double a[][N]){
	for(int i = 0;i < N;i++){
		cout << "Row " << i+1 << ": ";
		for(int j = 0;j < N;j++) cin >> a[j][i];
	}
}

void findLocalMax(const double b[][N], bool c[][N]){
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N;j++){
			if(b[i][j] >= b[i-1][j] && b[i][j] >= b[i][j-1] && b[i][j] >= b[i+1][j] && b[i][j] >= b[i][j+1]){
				c[i][j] = true;
			}else{
				c[i][j] = false;
			}
		}
	}
}

void showMatrix(const bool d[][N]){
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N;j++){
			if(i == 0 || i == (N-1) || j == 0 || j == (N-1)) cout << "0" << " ";
			else cout << d[i][j] << " ";
		}
		cout << "\n";
	}
}
