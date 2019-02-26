#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int i,j,k;
	for(i = 1;i < N;i++){
		k = i;
		for(int x = 0;x < N;x++){
			if(x == k) cout << "[" << d[x] << "]";
			else cout << d[x] << " ";
		}
		cout << "=> ";
		for(j = i-1;j >= 0;j--){
			if(d[k] > d[j]){
				swap(d,k,j);
				k = j;
			}
		}
		for(int x = 0; x<N; x++){
			if(x==k) cout << "[ " << d[x] << "] ";
			else cout << d[x] << " ";
		}
		cout << endl;
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}