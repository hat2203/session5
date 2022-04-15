// tinh trung binh cong cua cac so le trong mang n
# include <stdio.h>
int main (){
	int n;
	printf ("nhap n=");
	scanf ("%d", &n);
	
	int arr[n];
	for (int i=0; i<n; i++){
		scanf ("%d", &arr[i]);
		
	}
	int d=0;
	float tbc=0;
	int s=0;
	for (int i=0; i<n; i++){
		if (arr[i]%2 != 0){
			s+=arr[i];
			d++;
			
		}
	}	tbc = (float)s/d ;

	printf ("trung binh cong cac so le trong mang la: %0.2f",tbc);
	
}
