// Compile with `gcc foo.c -std=c99 -lpthread`, or use the makefile

#include <pthread.h>
#include <stdio.h>

int i = 0;

// Note the return type: void*
void* incrementingThreadFunction(){
    // TODO: increment i 1_000_000 times
   for (int inc = 0; inc < 1000000; inc++){
		i++; 
	}
 return NULL;

}

void* decrementingThreadFunction(){
    // TODO: decrement i 1_000_000 times
	for (int inc = 0; inc < 1000000; inc++){
		i--;
	}	
    return NULL;
}


int main(){
    // TODO: declare incrementingThread and decrementingThread (hint: google pthread_create)
	pthread_t incrementingThread;
	pthread_t decrementingThread;  	
    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);
    
    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);
    
    printf("The magic number is: %d\n", i);
    return 0;
}

