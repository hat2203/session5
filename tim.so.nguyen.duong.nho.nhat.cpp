 // tim so nguuyen duong nho nhat trong mang n
 # include <stdio.h>
int main (){
	int n;
	printf ("nhap n=");
	scanf ("%d",&n);
	int arr[n];
	for (int i=0; i<n; i++){
		scanf ("%d",& arr[i]);
	}
	int mind=0;
	for (int i=0; i<n; i++)
		if (arr[i]>0){
			mind= arr[i];
			break;
		}
		if (mind != 0){
			for (int i=0; i<n; i++)
			if(arr[i]>0 && arr[i]<mind)
				mind=arr[i];
				printf ("so nguyen duong nho nhat la : %d", mind);

		}else {
			printf ("khong co phan tu duong trong mang");
		}
	
}
