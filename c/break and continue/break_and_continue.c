#include <stdio.h>

int main(int argc, char **argv)
{
    /*so in last code session ie 3_loop_execution_control we saw/learned/operated on loop ie for,while and 
     * do-while loop.
     * 
     * Now we will look  in to Break and Continue statement.So what are break and continue statement actually?
     * 
     * BREAK STATEMENT:
     *#The break statement ends the loop immediately when it is encountered. 
     *Its syntax is:
        break;
    
     * The break statement is almost always used with if...else statement inside the loop.
     * the break statement is used to exit the loop irrespective of whetherthe condition is true or false.
     * Whenever a break is encountered inside the loop,the control is sent outside the loop
     * 
     * Example:
     * for(int i=0;i<100;i++)
     * {    
     *   printf("%d\n",i);
     *   if(i==5;
     *    {
     *      break;
     *    }
     * }*/
     //running code:
     for(int i=0;i<100;i++)
     {
         printf("%d\n",i);
         if(i==5)
         {
             break;
             
         }
     }
     //op:
     //0
     //1
     //2
     //3
     //4
     //5
     
     
     /*
     * CONTINUE STATEMENT:
     * T#he continue statement skips the current iteration of the loop and continues with the next iteration. 
     * Its syntax is:
        continue;
        
    * The continue statement is almost always used with the if...else statement.
    * The control is taken to next iteration thus skipping everything below "continue" inside the loop for that
    * iteration.
    * 
    * let us take a look at an example
    * Example:
    * int skip=5;
    * for(int i=0;i<10;i++)
    * {
    *   if(i!=skip)
    *   {
    *       continue;
    *   }
    *   else
    *   {
    *       printf("%d\n",i);
    *   }
    * }
    * 
    * 
    * SO BASICALLY WHAT BREAK STATEMENT DOES IS IT TERMINATES THE LOOP WHEN ITS ENCOUNTERED IN THAT LOOP 
    * WHEREAS CONTINUE STATEMENT RATHER THAN TERMINATING THE LOOP WHEN ITS ENCOUNTER IT JUST SKIP THE CODE
    * BELOW IT AND SENDS THE POINTER OF COMPILER/CODE TO NEXT ITERATION OF THAT LOOP .
    * 
    * */
    int skip=5;
    for(int i=0;i<10;i++)
    {
      if(i!=skip)
      {
        continue;
      }
      else
      {
           printf("%d\n",i);
      }  
    }
    //or the other way to write code above is
    printf("\n");
    printf("\n");
    for(int i=0;i<10;i++)
    {
      if(i==skip)
      {
          printf("%d\n",i);
        
      }
      else
      {
           continue;
      }  
      
    }
    return 0;
}
