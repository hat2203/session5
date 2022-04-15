//tinh trung binh cong cac so le o vi tri chan
# include <stdio.h>
int main(){
	int n;
	printf ("nhap n=");
	scanf ("%d",&n);
	int arr[n];
	for (int i=0; i<n; i++){
		scanf ("%d", &arr[i]);
		
	}
	int d=0;
	int s=0;
	float tbc;
	for (int i=0; i<n;i++){
		if (i%2==0 && arr[i]%2 !=0){
			s+=arr[i];
			d++;
		}
	}
	tbc=(float)s/d;
	printf ("trung binh cong la : %0.2f",tbc);
}
