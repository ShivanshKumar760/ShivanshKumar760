#include <stdio.h>

int main(int argc, char **argv)
{
    /*
     * Loops in programming come into use when we need to repeatedly execute a block of statements. 
     * For example: Suppose we want to print “Hello World” 10 times. 
     * 
     * why loops?
     * sometimes we want our program to execute few set of instruction over  and over again.For example printing
     * 1 to 100,first 100 even number etc.
     * 
     * hence loop make it easy for programmers to tell computer that a given set of instruction must be executed
     * repeatedly
     *  
     * 
     * TYPES OF LOOPS IN C:
     * 1.FOR LOOP
     * 2.WHILE LOOP.
     * 3.DO-WHILE LOOP
     * 
     * NOW FOR AND WHILE ARE ENTRY LEVEL CHECKING LOOP AND DO  WHILE IS EXIT LEVEL CHECKING LOOP
     * 
     * 
     * The loop in which test condition is checked 
     * in the beginning of the loop are known as entry controlled loop. For Example:for, while loop. 
     * 
     * 
     * 
     * Whereas when statements inside the loop body is executed and 
     * then the condition is checked that loop is known to be as exit controlled loop.for example:do-while
     * 
     * 
     * WE WILL LOOK INTO THESE ONR BY ONE:
     * 1.WHILE LOOP
     * SYNTAX:
     * while(condition)
     * {
     * //code;
     * //code;
     * updation;//it can be increment or decrement
     * }
     * the block inside while will keep executing as long as the condition inside while is true
     * 
     * example:
     * int i=0;
     * while(i<20)
     * {
     * printf("%d",i);
     * i++;
     * }
     * 
     * NOTE:if the condition never become false,then in that case the statement inside the  loop keep getting 
     * executed.Such a loop is known as infinite loop.
     * 
     * NOW FOR UPDATION WE GENERALLY USE 
     * INCREMENT AND DECREMENT OPERATION 
     * 
     * NOW INCREMENT AND DECREMENT OPERATOR ARE OF TWO TYPE:
     * 1.POST
     * 2.PRE
     * NOTE:BOTH POST AND PRE INCREMENT AND DECREMENT OPERATOR ARE UNARY OPERATOR IE THEY WORK ON SINGAL OPRAND
     * 
     * 
     * #INCREMENT:
     * 1.X++------POST INCREMNET OPERATOR
     * 2.++X------PRE INCREMENT OPERATOR
     * 
     * EXAMPLE:-int i;//1
     *          printf("i++=%d",i++);//1//first print i then increment it
     * 
     * int i;//1
     * printf("++i=%d",++i);//2//first increment i and then prints it
     * 
     * #DECREMENT:
     * 1.X--(POST DECREMNET OPERATOR)
     * 2.--X(PRE DECREMENT OPERATOR)
     * 
     * EXAMPLE:-int i;//2
     *          printf("i--=%d",i--);//2//first print i then decrement it
     * 
     * int i;//1
     * printf("--i=%d",--i);//1//first decrement i then prints it*/
     
     int i=1;
    printf("i++=%d",i++);//
    int x=1;
    printf("++x=%d",++x);//2
    
    int i1=2;
    printf("i--=%d",i1--);//
    int x1=2;
    printf("--x=%d",--x1);
    
    /*
     * note:+++ operator does not exist
     * += is compound assignment operator
     * int i=1;
     * i+=1;//i=i+1
     * just like -=,*=,/=,%=....
     * 
     * 
     * DO-WHILE LOOP(EXIT CONTROL LOOP)
     * 
     * 
     * THE SYNTAX OF DO-WHILE LOOP:
     * 
     * do
     * {
     *   //code;
     *   //code;
     *   //updation;
     * }while(condition);
     * 
     * do-while loop work very similar  to while loop .
     * while-checks the condition and then execute the code
     * do-while-executes the code and then checks the condition
     * 
     * do-while loop=while loop which executes at least one times/once
     * 
     * FOR LOOP
     * 
     * THE SYNTAX OF FOR LOOP IN C LOOKS LIKE:
     * 
     * for(int i=0;i<condition/i>condition;updation(i++/i--);
     * {
     *      //code;
     *      //code;
     * }
     * 
     * OR
     * 
     * 
     * for(int i=value;condition;updation of i)
     * {
     *      code;
     * }*/
     
     
     for(int a=0;a<10;a++)
     {
         printf("%d",a);
         printf("\n");
     }
     /*
      * so this how our for loop will execute in C/C++ programs
      * 
      * 
      * so lets undersatnd the parts of for loop by looking the syntax of it:
      * for(intialize;test or condition;updation(inncrement or decrement)
      * {
      *      //code;
      * }
      * 
      * 
      * 1.intialiize--setting a loop counter to an intial value
      *     loop counter is an variable assign to loop which will iterate itself again and again every time a
      *     loop is called.Ex:int i=0//loop counter is i whose intial value is 0 and it will start the loop from 
      *     0(zero) and after that it will update it self in the remaining part of program
      * 
      * 2.test case or condition:to setup a loop we always pass a valid condition for which loop will run till 
      *                         the condition is true if not true then the loop will get terminate,when we pass a 
      *                         it is  passed with respect to loop iterator or loop counter ie we test the loop counter
      *                         under a valid conndition to iterate the loop.Remember we need to pass a valid 
      *                         condition we do not pass a valid condition the loop will go infinite.
      * Ex:
      * for(int i=1;i<10;i++)
      * {
      * 
      *     printf("%d",i);
      * 
      * }
      * o/p:
      * 1 2 3 4 5 6 7 8 9 
      * 
      * now invalid condition;
      * for(int i=1;i>=-10;i++)//now here condition is true but also its invalid in response to update statement 
      * //cause in update we are incrementing so our value of i will always increase and thats why the value of i will
      * //never be i<=-10 and thats why condition will never become false and loop will run infinitely
      * {
      * 
      *     printf("%d",i);
      * 
      * }
      * 
      * 3.updation:can be increment or decrement as per the need of logic/problem/program to be executed.In updation
      *            we update the loop counter.
      * 
      * 
      * Q.To print first n natural number.
      * 
      * Ans:logic behind this is natural no. starts from 1 right?cause whole number starts from 0 so natural no.
      * start from 1,so we will initialize loop counter from and since we need to -print first n natural number we 
      * will take input from user to provide us/program the value of n.And since we need to print till---n we will provide
      * a condition to loop that i<=n.*/
      
      int n;
      printf("enter n:");
      scanf("%d",&n);
      printf("\n");
      for(int i=1;i<=n;i++)
      {
          printf("%d",i);
          printf("\n");
      }
      
      //or the alternate can be:
      int n1;
      printf("enter n:");
      scanf("%d",&n1);
      printf("\n");
      for(n1;n1>=1;n1--)
      {
          printf("%d",n1);
          printf("\n");
          
      }
      
      /*
       * a case of decrementing for loop and how it will work:
       * 
       * for(int i=5;i;i--);
       * {
       * 
       *    printf("%d\n",i);
       * 
       * }
       * 
       * this for loop will keep on running until i becomes 0.
       * 
       * the loop runs in following steps:
       * 
       * 1.i is intialized to 5.
       * 2.the condition  is "i"which means loop will run for non-zero value and as soon as 0 is encounter loop
       * wil terminate
       * 
       * 3.the code is executed
       * 
       * 4.i is decremented
       * 5.condition i is checked and code is executed if its not zero(0).*/
       printf("\n");
       printf("new:");
       printf("\n");
       
       for(int i=5;i;i--)
       {
           printf("%d\n",i);
       }
       /*
        * THE END */
       

   
	return 0;
    
}
