#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a;
	    scanf("%d",&a);
	    if(a%2==0 && a%7==0){
	        printf("Alice\n");
	    }
	    else if(a%2!=0 && a%9==0){
	        printf("Bob\n");
	    }
	    else{
	        printf("Charlie\n");
	    }
	}
	return 0;
}

