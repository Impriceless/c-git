#include<stdio.h>

//SPECIAL PROGRAMS IN C - PYRAMID OF STARS

	//int main() {
	//	//FOR n no. of rows, we need 2n-1 no. of columns
	//	
	//	int i, j, n;
	//	
	//	//No of rows
	//	printf("Please enter the no. of rows: ");
	//	scanf("%d", &n);
	//	
	//	//LOOP
	//	for (i = 1; i <= n; i++) {
	//		for (j=1; j<=2*n-1; j++) {
	//			if (j >= n-(i-1) && j <= n+(i-1)) {
	//				printf("*");
	//			}
	//			else printf(" ");
	//		}
	//		printf("\n");
	//	}
	//}


//SPECIAL PROGRAMS IN C - CHECK IF THE NUMBER IS PALINDROME OR NOT

		//int main() {
		//	int number, temp, rem, reverse = 0;
		//	printf("Enter a number: ");
		//	scanf("%d", &number);
		//	
		//	temp = number;
		//	
		//	while (temp != 0) {										//525							//52						//5							
		//		rem = temp%10;										//rem = 525%10 = 5 				//rem = 2					//rem = 5
		//		reverse = reverse*10 + rem;							//reverse = 0*10 + 5 = 5		//reverse = 5*10+2 = 52		//reverse = 52*10+5 = 525
		//		temp /= 10;											//temp = 525/10 = 52			// temp = 5					//temp = 5/10 = 0				so, reverse = 525
		//	}
		//		
		//	if (reverse == number) printf("The number is palindrome");
		//	else printf("The number is not palindrome");
		//	
		//}
		


//SPECIAL PROGRAMS IN C - CHECK IF THE NUMBER IS ARMSTRONG NUMBER OR NOT	
	
	//Order of a number is the no. of digits of a number. Eg: The number, 371 has an order of 3.
	//Armstrong number: An armstrong number of order "n" is a number in which each digits when multiplied by itself n number of times and finally added together returns the same number.
	//EXAMPLE: In the number 371, order is 3. So, 3x3x3 + 7x7x7 + 1x1x1 = 371 so, 371 is an Armstrong number.
	
	//PSEUDO CODE
		//First, find out the no of digits of number to get the order.
		//Multiply each digits count(order) number of times and add them.
		//Check if the number is Armstrong or not.
	
		//int main() {
		//	int number, count, temp, n, result, remainder, multiply=1;
		//	
		//	printf("Enter a number: ");
		//	scanf("%d", &number);
		//	
		//	//TO GET THE ORDER OF A NUMBER
		//	count = 0;
		//	temp = number;
		//	
		//	while (temp != 0) {
		//		temp /= 10;
		//		count++;
		//	}
		//	//count returns the order of the number n
		//	
		//	//Multiply each digit by the order(count) and add them
		//	temp = number;
		//	n = count;
		//	result = 0;
		//	
		//	while (temp!=0) {		
		//		remainder = temp%10;
		//		
		//		while (n != 0) {
		//			multiply = multiply * remainder;
		//			n--;								
		//		}
		//		
		//		result += multiply;
		//		
		//		n = count;
		//		temp /= 10;
		//		multiply = 1;
		//	}
		//	printf("\n%d\n", result);
		//	
		//	//Check if the number is Armstrong or not
		//	if (result == number) printf("The number is Armstrong");
		//	else printf("The number is not Armstrong");
		//}


//SPECIAL PROGRAMS IN C - CHECK IF THE NUMBER IS STRONG OR NOT					
			
		//int main() {
		//	int number, i, factorial = 1, temp, remainder, sum;
		//	
		//	printf("Enter a number: ");
		//	scanf("%d", &number);
		//	
		//	//finding factorial of each digits and adding them 
		//	temp = number;
		//	
		//	while (temp!=0) {
		//		remainder = temp%10; 
		//		
		//		//Finding factorial of each digit
		//		for (i=1; i<=remainder; i++) {
		//			factorial *= i;		
		//		}
		//		
		//		//Summing up the factorial of each digit
		//		sum += factorial;
		//						
		//		factorial = 1;
		//		temp /= 10;	
		//	}
		//	
		//	if (sum == number) printf("The number is strong");
		//	else printf("The number is not strong");
		//}

//SPECIAL PROGRAMS IN C - CHECK IF THE NUMBER IS PRIME OR NOT

	#include<math.h>
	
		//int main() {
		//	int n;
		//	n = ceil(sqrt(3));
		//	printf("%d",n);
		//}	


		//int main() {
		//	int number, temp1, temp2, i;
		//	int count = 0;
		//	
		//	printf("Enter a number: ");
		//	scanf("%d", &number);
		//	
		//	temp1 = ceil(sqrt(number));
		//	temp2 = number;
		//	
		//	for(i=2; i<=temp1; i++) {
		//		if (temp2%i == 0) count = 1;
		//	}
		//	
		//	if ((count == 0 && temp2!=1) || temp2==2) printf("%d is a prime number", temp2);
		//	else printf("%d is not a prime number", temp2);
		//}


//SPECIAL PROGRAMS - FIBONACCI SERIES upto n terms	
		
		//int main() {
		//	int a = 0;
		//	int b = 1;
		//	int i, result, n;
		//	
		//	printf("Enter the number of terms: ");
		//	scanf("%d", &n);
		//	
		//	for (i=1; i<=n; i++) {
		//		printf("%d ", a);
		//		result = a + b;
		//		a = b;
		//		b = result;
		//	}
		//}		


//SPECIAL PROGRAMS - FLOYD'S TRIANGLE
	//Floyd triangle is a right-angled triangular array with natural numbers(starting from 1 in the top)


		//int main() {
		//	int number;
		//	printf("How many rows do you want? ");
		//	scanf("%d", &number);
		//	
		//	int i, j;
		//	int n = 1;
		//	
		//	for (i=1; i<=number; i++) {
		//		for (j=1; j<=i; j++) {
		//			printf("%d ", n);
		//			n++;
		//		}
		//		printf("\n");
		//	}
		//}
		
		
//SPECIAL PROGRAMS IN C - BINARY TO DECIMAL CONVERSION

		//int main() {
		//	int binary, decimal = 0, weight = 1;
		//	int remainder;
		//	printf("Enter the binary number you want to convert into decimal: ");
		//	scanf("%d", &binary);
		//	
		//	int temp = binary;
		//	while (binary!=0) {
		//		remainder = binary%10;
		//		decimal += remainder*weight;
		//		binary /= 10;
		//		weight *= 2;
		//	}
		//	
		//	printf("The decimal number of %d is %d", temp, decimal);
		//}		
		
//SPECIAL PROGRAMS IN C - CALCULATING THE POWER OF A POSITIVE NUMBER

		//int main() {
		//	int number, power, product = 1;
		//	
		//	printf("Enter the number: ");
		//	scanf("%d", &number);
		//	printf("Enter the power: ");
		//	scanf("%d", &power);
		//	
		//	int i;
		//	
		//	for (i=1; i<=power; i++) {
		//		product *= number;
		//	}
		//	
		//	printf("The result of %d^%d is %d", number, power, product);
		//	
		//}
		

//SPECIAL PROGRAMS IN C - CHECK IF THE NUMBER IS PERFECT OR NOT	

		int main() {
			int number;
			printf("Enter a number: ");
			scanf("%d", &number);
			
			int sum = 0, i;
			
			for (i=1; i<number; i++) {
				if(number%i == 0) {
					sum += i;
				}
			}
			if (sum == number) printf("The number is perfect");
			else printf("The number is not perfect");
		}






