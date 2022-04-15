// kiem tra x co thuoc mang n
# include <stdio.h>
int main (){
	int n;
	printf ("nhap n=");
	scanf ("%d", &n);
	int arr [n];
	for (int i=0; i<n; i++){
		scanf ("%d", &arr[i]);
	}
	int x;
	printf ("nhap x=");
	scanf ("%d", &x);
	int j=0;
	for (int i=0; i<n; i++){
		if (arr[i]==x){
			printf ("%d thuoc mang ", x);
			j++;
		}
	}
	if (j==0)
	printf ("khong co phan tu nao");
}
