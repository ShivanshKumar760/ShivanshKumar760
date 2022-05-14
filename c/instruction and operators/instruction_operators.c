#include <stdio.h>

int main(int argc, char **argv)
{//type of instrucion-1.type declaration instruction,2.arithematic instruction,3.control instruction
//type declaration-declaring data type to variable
/* Type	             Size (bytes)	                     Format Specifier
int	                at least 2, usually 4	                 %d, %i
char	             1	                                     %c
float	             4	                                     %f
double	             8	                                     %lf
short int	         2 usually	                             %hd
unsigned int        at least 2, usually 4	                 %u
long int	        at least 4, usually 8	                 %ld, %li
long long int	        at least 8	                         %lld, %lli
unsigned long int	    at least 4	                         %lu
unsigned long long int	at least 8	                         %llu
signed char           	1	                                 %c
unsigned char	        1	                                 %c
long double	      at least 10, usually 12 or 16	             %Lf        */
//format specifier are the keyword used to take input of perticular datatype in C
/*type declaration ways:
 * 1.data_type variable_name;
 * 2.data_type variable_name=value;
 * 3.data_type variable_name,variable_n2,variable_n3..............variable_n;
 * 4.dat_type1 variable_name,data_type2 variable_name;*/
 
 
 /*int a;
 int b=10;
 a=b;
 int  i=10;
 int j=i;
 int x,y,z;
 x=y=z=10;
 float n1=1.555;
 float n2=n1+1;
 char c='a';*/
 
 
 
 //ARTHEMATIC OPERATION/ARTHEMATIC INSTRUCTION
 /*The arithmetic instructions define the set of operations performed by the 
  * processor Arithmetic Logic Unit (ALU). The arithmetic instructions 
  * are further classified into binary, decimal, logical, shift/rotate, 
  * and bit/byte manipulation instructions.  */
 
 /*Operator	Description	                                                 Example
+	       Adds two operands.	                                         A + B = 30
−	       Subtracts second operand from the first.	                     A − B = -10
*	       Multiplies both operands.	                                 A * B = 200
/	       Divides numerator by de-numerator.	                         B / A = 2
%	       Modulus Operator and remainder of after an integer division.	 B % A = 0
++	       operator increases the integer value by one.	                 A++ = 11
--	       Decrement operator decreases the integer value by one.	    A-- = 9       */




   int a = 21;
   int b = 10;
   int c ;

   c = a + b;
   printf("Line 1 - Value of c is %d\n", c );
	
   c = a - b;
   printf("Line 2 - Value of c is %d\n", c );
	
   c = a * b;
   printf("Line 3 - Value of c is %d\n", c );
	
   c = a / b;
   printf("Line 4 - Value of c is %d\n", c );
	
   c = a % b;
   printf("Line 5 - Value of c is %d\n", c );
	
   c = a++; 
   printf("Line 6 - Value of c is %d\n", c );
	
   c = a--; 
   printf("Line 7 - Value of c is %d\n", c );
   //NOTE:no operator in c is assumed to be present:
   //int i=ab-------------invalid
   //int i=a*b------------valid
   
   //there is no operator to perform exponentiation in C however wew can use pow(x,y) from <math.h>--we need
   //to include <math.h> as header file
   
   
   // TYPE CONVERSION
   /*AN ARTHEMATIC OPERATION BETWEEN
    *int and int=int
    * int and float=float
    * float and float=float
    * example:
    * 5/2---2 whereas 5.0/2---2.5
    * 2/5----0 whereas 2.0/5--0.4
    * NOTE:
    * int a=3.5; suppose we assign the integer a a value in decimal form ie 3.5 which is actually a float value
    *            in this case 3.5(float) will be demoted to 3(int) or the compiler will ingnor the value after
    *            decimal
    * 
    * float a=8; a will store 8.0 here in this case and also print 8.0*/
    
    /*Operator precedence determines the grouping of terms in an expression and decides how an expression is
 evaluated. 
Certain operators have higher precedence than others; 
 for example, the multiplication operator has a higher precedence than the addition operator.

For example, x = 7 + 3 * 2; here, x is assigned 13, not 20 because operator * has a higher precedence 
than +, so it first gets multiplied with 3*2 and then adds into 7.

Here, operators with the highest precedence appear at the top of the table, 
those with the lowest appear at the bottom. Within an expression, higher precedence operators will be evaluated first.

Category	  Operator	                           Associativity
Postfix	      () [] -> . ++ - -	                   Left to right
Unary	      + - ! ~ ++ - - (type)* & sizeof	   Right to left
Multiplicative	* / %	                           Left to right
Additive	    + -	                               Left to right
Shift	<< >>	                                   Left to right
Relational	< <= > >=	                           Left to right
Equality	== !=	                               Left to right
Bitwise AND	&	                                   Left to right
Bitwise XOR	^	                                   Left to right
Bitwise OR	|	                                   Left to right
Logical AND	&&	                                   Left to right
Logical OR	||	                                   Left to right
Conditional	?:	                                   Right to left
Assignment	= += -= *= /= %=>>= <<= &= ^= |=	   Right to left
Comma	,	                                      Left to right
Example
Try the following example to understand operator precedence in C −

Live Demo*/

   int a1 = 20;
   int b1 = 10;
   int c1 = 15;
   int d1 = 5;
   int e1;
 
   e1 = (a1 + b1) * c1 / d1;      // ( 30 * 15 ) / 5
   printf("Value of (a1 + b1) * c1 / d1 is : %d\n",  e1 );

   e1 = ((a1 + b1) * c1) / d1;    // (30 * 15 ) / 5
   printf("Value of ((a1 + b1) * c1) / d1 is  : %d\n" ,  e1 );

   e1 = (a1 + b1) * (c1 / d1);   // (30) * (15/5)
   printf("Value of (a1 + b1) * (c1 / d1) is  : %d\n",  e1 );

   e1 = a1 + (b1 * c1) / d1;     //  20 + (150/5)
   printf("Value of a1 + (b1 * c1) / d1 is  : %d\n" ,  e1 );
   
   /*CONTROL INSTRUCTION
    * determine the flow of control in a program
    * four types of control instruction in C are
    * 1.sequence control instruction
    * 2.decision control instruction
    * 3.loop control instruction
    * 4.case control instruction
    * 
    * Sequence Control Instructions
These instructions are responsible for executing the instructions one after 
the other, as they appear in the program. 
There are not any checks on the condition or values to control the execution.

For example, a normal program in which all the arithmetic operation like addition, subtraction,
multiplication and division is carried out one after the other. Here there is no check on user option, 
or any other conditions. It will display results of all the operations in the order they appear in the program.

 * 
 * 
 * 
 * 
 * Decision / Selection Control Instructions
This will have set of conditions to execute the instructions within it. 
 * If the condition is true, then it will execute the instructions, 
 * else it will execute other set of instructions. 
 * This type of instructions use if or while statements to make the decision.

For example, suppose user enters the options like 
 * A, S, M or D to indicate addition, subtraction, multiplication and division.
 * Depending on the option entered by the user, the program may add, subtract, multiply or divide the numbers. 
 * Here it will not execute all the operation but only one of them entered by the user.
 * 
 * 
 * 
 * 
 * Loop Control Instructions
There will be certain need for executing a 
 * set of instruction for certain number of times. \
 * This is done by using loop control statement. 
 * These loops will have limited number of iterations or 
 * will have certain conditions which in turn will give iterations for the 
 * instructions to be executed. These instructions will use for loops or while or do/while statements 
 * to get the loop iterations.

For example, suppose we have display 
 * the first 5 entries of name in the array. T
 * his will use for loop to iterate through the array from its beginning till 5th entry to display the names in it. 
 * Similarly, suppose we need to display all names in sorted array where average marks are not more than 35%. 
 * This will use do/while loop to iterate through the array (here we do not know the exact number of iterations) 
 * until the condition is matched.


Case Control Instructions
This is similar to decision control 
 * instructions where condition will be checked for the 
 * execution of the instructions. But this instructions will use switch case statements to check the conditions.

switch  (chrColor){
  case'B':
    printf("This is a BLUE color!"); break;
  case 'R':
    printf("This is a RED color!"); break;
  default:
    printf("This is a NO color!");
  }
These control instructions cannot be executed without control statements. There are 4 types of control statements :
If..Else statement or If..Else If..Else statement
While loop or Do/While loop statements
Switch Case statements
For Loop Statements
These  statements help the instructions to get executed accordingly.*/

 
 
  
   return 0;
   
 
}
 
 
 
 
	
