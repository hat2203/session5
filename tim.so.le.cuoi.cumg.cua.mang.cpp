// tim so le cuoi cung cua mang
#include <stdio.h>
int main (){
	int n;
	printf ("nhap n=");
	scanf ("%d", &n);
	int arr[n];
	for (int i=0; i<n;i++){
		scanf ("%d", &arr[i]);
		
	}
	int lc=0;
	for (int i=n-1; i<n; i--){
		if (arr[i]%2 != 0){
		lc=arr[i];
	break;
		}
		
}
		printf ("so le cuoi cung cua mang la : %d", lc);
}
