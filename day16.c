/*Write a c program to print 10 numbers between 1 and 2 (excluding 2)
For Example, your output should be like this.
1   1.00
2   1.10
3   1.20
4   1.30
5   1.40
6   1.50
7   1.60
8   1.70
9   1.80
10   1.90
*/
#include<stdio.h>
void main(){
	float i;
	int  count;
	i=1.0;
	count=1;
	while(i<2){
		printf("\n%d   %.2f",count,i);
		i=i + 0.1;
		count++;
	}
}

