#pragma once

void OrdenarIntArray(int nums[]) {
	int arrayLength = (sizeof(nums) / sizeof(*nums)) - 1;
	int menorNum;
	int mayorNum;
	for (int k = 0; k <= arrayLength - 1; k++) {		//loopear todos los elemenos del array "nums" index - 1 para balancear la suma en el segundo for loop
		while (nums[k] > nums[k + 1]) {					//mientras que el valor en el index k sea mayor que su index sucesor ejecuta el segundo for loop
			for (int i = 0; i <= arrayLength - 1; i++) {//loopear todos los elementos del array "nums" y su index - 1 para balancear la suma en este loop
				if (nums[i] > nums[i + 1]) {			//si el valor del index i es mayor que su index sucesor
					menorNum = nums[i + 1];				//el menor numero sera el sucesor del index i
					mayorNum = nums[i];					//el mayor numero sera el index i
					nums[i] = menorNum;					//Replace values
					nums[i + 1] = mayorNum;
				}
			}
		}
	}
}
