#include<stdio.h>

//INTRODUCTION TO VARIABLES 

// int main() {
//     int var = 4;
//     var = 5;
//     printf("%d", var);
//     return 0;
// }

// int main() {
//     int var1, var2, var3, var4;
//     var1 = var2 = var3 = var4 = 5;
//     printf("%d", var1);
//     printf("%d", var2);
//     printf("%d", var3);
//     printf("%d", var4);
// }


//VARIABLE NAMING CONVENTIONS
//RULES FOR NAMING A VARIABLE: 1) Don't start variable name with a digit.
//                             2) Beginning with underscore(_) is valid but not recommended.
//                             3) C language is case-sensitive. Uppercase and Lowercase letters are different.
//                             4) Special characters(@, #, %, ^, &, * etc) are not allowed.
//                             5) White or blank spaces are not allowed.
//                             6) Don't use keywords to name your variables.
//                             7) It is recommended not to use loooooonnnnnnggggg names for your variables.


//BASIC OUTPUT FUNCTION - printf()

//EXAMPLES:   printf("Hello World");
//            printf("%d", i);                          // %d is the placeholder for variable
//            printf("%d %d", var1, var2);
//
// int main() {
//     int thirteen = 13;
//     int five = 5;
//     int nine = 9;
//     int result = (thirteen + five) / nine;
//     printf("The result of the expression (%d + %d) / %d is %d", thirteen, five, nine, result);
// }

//FUNDAMENTAL DATA TYPES - INTEGER

    //Size of an integer depends upon the machine - 2 bytes or 4 bytes       // 1 byte = 8 bits
    //We can find the size of an integer programmatically using sizeof operator(sizeof is a unary operator not a function)
    
    //EXAMPLE of sizeof operator: 
    // int main() {
    //     printf("%d", sizeof(int));  //Output: 4
    //     return 0;
    // }

    //RANGE: Range is upper and lower limit of some set of data. Example: {0,1,2,3,4} Range = 0 to 4
 
    //4 bit data : 0000 (minimum value)  //WE USE BINARY SYSTEM BECAUSE COMPUTER ONLY UNDERSTANDS BINARY NUMBER SYSTEM
    //             1111 (maximum value)

    //RANGE OF 4 bit data: 0000 to 1111
    //                        0 to 15

    //Another way to calculate the maximum value is by using a formula : (2^n - 1) where n = no. of bits
    //So, for 4 bit data, n = 4 so, maximum value is (2^4 - 1) = 15

    //For signed range(2's complement range), minimum value is -2^(n-1) and maximum value is +2^(n-1) - 1 


    //RANGE OF INTEGER 

    //For 2 bytes integer (2 bytes = 16 bits) 
        //Unsigned integer range = 0 to 65535           //(2^16 - 1) = 65535
        //Signed integer range = -32768 to +32767       // -(2^(16 - 1)) = -2^15 = -32768   +(2^(16-1)-1) = +32767

    //For 4 bytes integer (4 bytes = 32 bits) 
        //Unsigned integer range = 0 to 4294967295           //(2^32 - 1) = 4294967295
        //Signed integer range = -2147483648 to +2147483647       // -(2^(32 - 1)) = -2^31 = -2147483648 +(2^(32-1)-1) = +2147483647


    //MODIFIERS USED FOR INTEGER(short, long, unsigned, signed)

        //LONG AND SHORT
            //sizeof(short int) <= sizeof(int) <= sizeof(long int)

            // int main() {
            //     printf("Size of short int = %d\n", sizeof(short int));
            //     printf("Size of integer   = %d\n", sizeof(int));
            //     printf("Size of long  int = %d\n", sizeof(long int));
            //     return 0;
            // }

        
        //UNSIGNED AND SIGNED
            //NOTE: DEFAULT INTEGER IS SIGNED INTEGER RANGE. (i.e. allows both +ve and -ve values)

// #include<limits.h>

            //Signed Integer
            // int main() {
            //     printf("%d %d", INT_MIN, INT_MAX);  //Range is INT_MIN to INT_MAX
            // }

            // Unsigned Integer
            // int main() {
            //     unsigned int minimum = 0;
            //     unsigned int maximum = UINT_MAX;
            //     printf("%u %u", minimum, maximum);  //Range is 0 to UINT_MAX
            // }

            //Short Signed Integer                     //size of short signed integer is 2 bytes
            // int main() {
            //     printf("%d %d", SHRT_MIN, SHRT_MAX); //Range is SHRT_MIN to SHRT_MAX
            // }

            //Short Unsigned Integer                   //size of short unsigned integer is 2 bytes
            // int main() {
            //     short unsigned maximum = USHRT_MAX;        
            //     printf("0 %u", maximum);               //Range is 0 to USHRT_MAX
            // }


            //LONG LONG INTEGER
                //if sizeof(long int) = 4 bytes then sizeof(long long int) = 8 bytes
                //if sizeof(long int) = 8 bytes then sizeof(long ling int) = 8 bytes
            
                // int main() {
                //     printf("%d", sizeof(long long int));
                // }

            
    //%d is used for "signed integer"
    //%u is used for "unsigned integer"
    //%ld is used for "long integer or long signed integer"
    //%lu is used for "long unsigned integer"
    //%lld is used for "long long integer or long long signed integer"
    //%llu is used for "long long unsigned integer"
    

//EXCEEDING THE VALID RANGE OF DATA TYPES
    //What happens if you exceed the range of signed and unsigned integer?

    //UNSIGNED
    // int main() {
    //     unsigned int var = 4294967296;       //Unsigned integer max value is 4294967295
    //     printf("%u", var);                   //returns 0
    // }

    //SIGNED
    // int main() {
    //      int var = 2147483648;               //Signed integer max value is 2147483647
    //     printf("%d", var);                   //returns -2147483648
    // }

    //Take a look at signed-unsigned.png for signed unsigned range representation.


//FUNDAMENTAL DATA TYPES - CHARACTER

    // int main() {
    //     char variableName = 'k';                      //Inside single quotes
    //     printf("%c", variableName);
    // }

    //ASCII code
    // int main() {
    //     char name = 78;
    //     printf("%c\n", name);                                                      
    //     printf("%d", name);
    // }

    //SIZE OF CHARACTER
    //Size of character is 1 byte = 8 bits

    //RANGE OF CHARACTER
    //Range of character is :
            //Signed Character: Range = -128 to 127
            //Unsigned Character: Range = 0 to 255


            // int main() {
            //     char var = 129;
            //     char varnegative = -127;    //signed character
            //     printf("%c\n", var);
            //     printf("%c", varnegative);
            // }


//FUNDAMENTAL DATA TYPES - FLOAT, DOUBLE AND LONG DOUBLE (FLOATING TYPES)
    //Used for representing factorial numbers. Eg: 0.85, 3.14, 6.4618864646846


    //Size of this data type also depends on the type of the system
        // int main() {
        //     printf("%d\n", sizeof(float));                // 4bytes = 32bits
        //     printf("%d\n", sizeof(double));               // 8bytes = 64bits
        //     printf("%d", sizeof(long double));            // 16bytes = 128bits
        // }

    //USE of float, double and long double                    //DEFAULT IS 7 bits from the start(excluding decimal(.)) 
        // int main() {
        //     float var1 = 3.1415926535897932;        
        //     double var2 = 3.1415926535897932;
        //     long double var3 = 3.141592653589793213456;
        //                                                         //precision depends 
        //     printf("%.16f\n", var1);        
        //     printf("%.16lf\n", var2);
        //     printf("%.21Lf\n", var3);
        //     printf("%d", sizeof(var3));
        // }

        // int main() {
        //     int var1 = 4/9;
        //     printf("%d\n", var1);
            
        //     float var2 = 4/9;
        //     printf("%.2f\n", var2);

        //     float var3 = 4.0/9.0;       //default is double
        //     printf("%.2f\n", var3);

        //     float var4 = 4.0f/9.0f;     //now it's float
        //     printf("%.2f\n", var4);
        // }


//IMPORTANT QUESIONS - SET 1

    // int main() {
    //     printf("%d\n", printf("%s", "Hello World"));  //printf not only prints the content on the screen but     also returns the no. of characters it successfully prints on the output screen. (HELLO WORLD = 11 characters)
    //     //So the output is Hello World11
    // }


//    int main() {
//        printf("%s\n", "Hello");
//        printf("%10s", "Hello");        //means string has to be 10 characters total so adds white space to get enough 10 character
//    }


//CONSTANTS IN C
    //We can define constants in C using #define or the const keyword

    //#define: Syntax: #define NAME value  (no semi-colon at the end)
    //const:   Syntax: const data_type variable_name = value;

//BASIC INPUT FUNCTION - scanf()
    //Example:
//    int main() {
//    	int n;
//    	printf("Enter a number: ");
//		scanf("%d", &n);
//		printf("\nThe nubmer you've entered is %d", n);
//	}
	
	
//OPERATORS
	//Arithmetic Operator: + - * / %
	//Increment Operator: ++ --
	//Relational Operator: == != <= >= < >
	//Logical Operator: && || !
	//Bit-wise Operator: & ^ | ~ >> <<
	//Assignment Operator: =  +=  -=  *=  /=  %=  <<=  >>=  &=  ^=  |=
	//Other Operators: ?: & *(pointer) sizeof() ,(comma operator)

	//Pre increment vs Post increment (Pre decrement vs Post decrement)
//		int main() {
//			int a = 5;
//			int b = 5;
//			int x = ++a;
//			int y = b++;
//			printf("%d\n", x);	//6
//			printf("%d", y);    //5
//			return 0;
//		}
		
	//PRE-INCREMENT  (++a) : First increment by 1 then assign it into the variable.
	//Post-INCREMENT (a++) : First assign the value into the variable then increment by 1

	
	