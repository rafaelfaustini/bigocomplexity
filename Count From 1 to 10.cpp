#include <stdio.h>

int count(int n){
	for(int i=0;i<n;i++){  // Complexity -> O(n)
		printf("%d ",i+1);
	}	
}

int main(){
	count(3);
}
