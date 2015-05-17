/*
#Problem Statement
	The Utopian Tree goes through 2 cycles of growth every year. 
	The first growth cycle occurs during the spring, when it doubles in height. 
	The second growth cycle occurs during the summer, when its height increases by 1 meter.
	Now, a new Utopian Tree sapling is planted at the onset of spring. Its height is 1 meter. 
	Can you find the height of the tree after N growth cycles?

#Input Format

	The first line contains an integer, T, the number of test cases.
	T lines follow; each line contains an integer, N, that denotes the number of cycles for that test case.

#Constraints
	1≤T≤10 
	0≤N≤60

#Output Format

	For each test case, print the height of the Utopian Tree after N cycles. 
	Each line thus has to contain a single integer, only.

#Sample Input

	3
	0
	1
	4

#Sample Output

	1
	2
	7

*/

#include <stdio.h>


int main(void){
	int test_cases;

	

	scanf("%d", &test_cases);

	int tree_height[test_cases];
	int number_of_cycles[test_cases];

	for(int i = 0; i < test_cases; i++){
		// Tree height is always 1 when planted at the onset of spring
		tree_height[i] = 1;

		// The numbers of cyles for this tree
		scanf("%d", &number_of_cycles[i]);
		int j;
		for(j = 0; j < number_of_cycles[i]; j++){
			switch(j % 2){
				case 0:
					tree_height[i] *= 2;
				break;

				case 1:
					tree_height[i] += 1;
				break;
			}
		}
	}

	for(int i = 0; i < test_cases; i++){
		printf("%d\n", tree_height[i]);
	}
}
