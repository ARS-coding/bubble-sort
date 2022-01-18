//
//  main.c
//  c
//
//  Created by Ali Rıza Şahin on 16.01.2022.
//

#include <stdio.h>
#include <stdlib.h>

// bubble sort algorithm
int main() {
    // declare the iterables and an array of 15 random integers between 1 and 100
    int i, x, y, z, numbers[16];
    srand(0); // seed the random number generator
    
    // create the array of random numbers
    for(i = 0; i <= 15; i++) {
        int biggestNumber = 100, lowestNumber = 1;
        
        // this is the formula to create a random number within the specified range
        int randomNumber = (rand() % (biggestNumber - lowestNumber + 1)) + lowestNumber;
        
        numbers[i] = randomNumber; // set the individual array slot to the generated random number
    }
    
    // sort the array of integers from small to big numbers by going through the array for 15 times
    for(x = 0; x <= 15; x++) {
        for(y = 0; y <= 14; y++) {
            int currentNumber = numbers[y];
            int nextNumber = numbers[y + 1];
            
            if(currentNumber > nextNumber) {
                numbers[y] = nextNumber;
                numbers[y + 1] = currentNumber;
            }
        }
    }
    
    // check if numbers were sorted in an ascending way
    for(z = 0; z <= 15; z++) {
        printf("%d\n", numbers[z]);
    }
    
    return 0;
}
