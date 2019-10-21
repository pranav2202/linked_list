#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0;i<n;i++){
			cin>>arr[i];
		}
		int i=0;
		
		for (i = 1;i<n;i++){
		int key  = arr[i+1];
			int temp = 0;
			while (key<arr[i]) {
				temp = arr[i];
				arr[i+1] = temp;
				arr[i] = arr[i+1];
			//	key = arr[i+1];
			}
		}
		for (int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	return 0;
}
