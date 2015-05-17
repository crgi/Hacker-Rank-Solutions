/*

Problem Statement

	Given two integers, L and R, find the maximal value of A xor B, where A and B satisfy the following condition:
	L≤A≤B≤R

Input Format

	The input contains two lines; L is present in the first line and R in the second line.

Constraints

	1≤L≤R≤103

Output Format

	The maximal value as mentioned in the problem statement.

Sample Input

	10
	15

Sample Output

	7
*/

#include <stdio.h>

int max_xor(int left_limit, int right_limit){
	// We can initialize max to zero because I don't think the results can ever be negative
	int max = 0;

	for(int i = left_limit; i <= right_limit; i++){
		for(int j = i; j <= right_limit; j++){
			int XOR = i ^ j;

			//printf("%d ^ %d: %d\n", i, j, XOR);
			//m = max(m, i ^ j);

			if(XOR > max){
				max = XOR;
			}
		}
	}

	return max;
}

int main(void){
	int left_limit;
	int right_limit;
	int result;

	//printf("%s\n", "Enter the left and right limits: ");
	scanf("%d%d", &left_limit, &right_limit);

	result = max_xor(left_limit, right_limit);

	printf("%d\n", result);
}
