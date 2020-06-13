#include <stdio.h>
#include <stdlib.h>


void arrayInsert(int myArray[], int *countOfElements, int newElement, int newLocation){
    for (int i=*countOfElements; i>=newLocation; i--) {
        myArray[i] = myArray[i-1];
    }
    myArray[newLocation-1] = newElement;
    *countOfElements = *countOfElements + 1;
}


int main(){
    //receiving the array from the user
    int countOfElements;
    printf("\nInsert the count of elements: ");
    scanf("%d",&countOfElements);
    
    //creating the array
    int *myArray = (int*)malloc(countOfElements*sizeof(int));
    
    //filling the array of 0s
    for (int i=0; i<countOfElements; i++) {
        myArray[i] = 0;
    }
    
    int newElement;
    printf("\n Insert the elements to be inserted: ");
    scanf("%d", &newElement);
    int newLocation;
    printf("\n Inswert the location to be inserted in: ");
    scanf("%d", &newLocation);
    
    //calling the inserter function
    arrayInsert(myArray, &countOfElements, newElement, newLocation);
    
    //viewing the result
    for (int i=0; i<countOfElements; i++) {
        printf(" %d ", myArray[i]);
    }
    
    

    return 0;
}
