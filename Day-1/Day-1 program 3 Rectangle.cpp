//1.Rectangle  2L + 2W= 2(W+L) --> perimter Area LxW


#include<stdio.h>

int main(){
	int L,W;
	printf("Enter the value of L:\n");
	scanf("%d",&L);
	printf("Enter the value of W:\n");
	scanf("%d",&W);
//	int ans=2*L + 2*W;
	int ans = 2*(L+W);
	printf("Rectangle perimeter=%d\n",ans);
	printf("Rectangle Aera = %d",L*W);
	
}
