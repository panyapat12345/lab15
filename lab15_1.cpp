#include <iostream>
using namespace std;

template <typename T1>
void show(const T1 a[], int n){
	for(int i = 0; i < n; i++)		cout << a[i] << " ";
	cout << endl;
}

template <typename T>
void insertionSort(T d[],int N){
	T s;
	for(int i = 1; i < N; i++){
		s = d[i];
		for(int j = i; j>=0; j--){
			if(j == 0)				d[0] = s;
			else if(s > d[j-1])		d[j] = d[j-1];
			else if(s <= d[j-1]){
				d[j] = s;
				break;
			}							
		}
		cout << "Pass " << i << ":" ;
		show(d, N);
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