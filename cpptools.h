#pragma once

void OrdenarIntArray(int nums[], int arrayLength) {
	int menorNum;
	int mayorNum;
	for (int i = 0; i <= arrayLength - 1; i++) {//loopear todos los elementos del array "nums" y su index - 1 para balancear la suma en este loop
		if (nums[i] > nums[i + 1]) {	    //si el valor del index i es mayor que su index sucesor
			menorNum = nums[i + 1];	    //el menor numero sera el sucesor del index i
			mayorNum = nums[i];	    //el mayor numero sera el index i
			nums[i] = menorNum;	    //Replace values
			nums[i + 1] = mayorNum;
			for(int x = 0; x <= arrayLength - 1; x++){//Ultimo loop para ver si sigue desordenado, si sigue desordenado reseta el loops
				if(nums[x] > nums[x + 1]){
					i = 0;
				}
			}
		}
	}
}
