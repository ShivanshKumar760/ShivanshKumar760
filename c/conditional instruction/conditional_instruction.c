#include <stdio.h>
//Simple Calculator
int main() {
    /* 
     * 1.sometimes we need to watch comedy videos on youtube if the day is sunday
     * 2.sometimes we need to order resturant food from outside if its a specaial ocassion 
     * or friend or family member bday like maa,papa or your own bday
     * 3.you might buy an umbrella if its raining outside and you have money
     * 4.you order a meal if cicken tikka masala or sahi paneer your favroite food is listed
     * on menu
     * 
     * all these are  decision whuch depend on on a condition being met
     * 
     * In C programmming language too,we must be able to execute instruction on a condition(s)
     * being met
     * 
     * 
     * DECISSION MAKING INSTRUCTION IN C
     * THERE ARE TWO WAYS TO EXECUTE CODING STATEMENT BASED ON CONFITION
     * 1.IF-ELSE IF-ELSE LADDER STATEMENR
     * 2.SWITCH STATEMMENT
     * 
     * IF-ELSE STATEMENT
     * THE SYNTAX OF if-else is:
     
      * 
      * if(condition is to be checked)\
      * {
      
       * statement_if_condition_true_to_be_executed;
      
      * }
      * else
      * {
      
       * statement_if_condition_false_to_be_executed;
    
     * }
     * code example:
     * int a;
     * a=23;
     * if(a>20)
     * {
     *  printf("a is greater than 20");
     * }
     * else
     * {
     *  printf("not");
     * }
     * 
     * 
     *RELATIONAL OPERATOR IN C
     *relational operator in c are used to evaluate condition(true or false) inside the if 
     *satement.Some example are/of relational operator are:-
     * ==(equals),>=(greater than or equal to),>(greter than),<(less than),<=(less than or equal to)
     * !=(not equal to)
     * 
     * important note :-'=' is used for assignment whereas '==' is used for equality check or comparision
     *
     * the condition can be any valid expresion.In C a  non-zero value is considered to be true.
     * 
     * 
     * LOGICAL OPERATORS
     * &&(AND),||(OR),!(NOT) ARE THREE LOGICAL OPERATOR IN C.THEY ARE USE TO  PROVIDE LOGIC TO OUR C 
     * PROGRAMS.
     * 
     * USAGE OF LOGICAL OPERATORS:
     * 1.&&-->AND--is true when both the condition are true
     
      * EXAMPLE:
      * "1&&0----is evaluated as false"
      * "1&&1-----is evaluated as true"
      * "0&&0-----is evaluated as false"
    *
    * 2.||-->OR--is true when any one of the condition is true
     
      * EXAMPLE:(1||0---1(true)),(1||1---1),(0||0---0(false))
    *
    * 3.!-->NOT--returns true if given false and false if given true
      
       * EXAMPLE:!(3==3)---evaluates to false or !(3>20)---evaluates to true
    *
    * 
    * as the number of condition increases,the level of indentattion increases.This reduces 
    * readablity logical operators come to rescue in such cases
    * 
    * else-if-clause:
    * Instead of using multiple if statement,we can also use else-if along with if thus forming an
    * if-else-if-else ladder
    * 
    * SYNTAX:
    * if{
    * ............;
    * }
    * else if
    * {
    * .................;
    * }
    * else
    * {
    * ...........;
    * }
    * 
    * using if else-if-else reduces indents 
    * the last "else" is optional
    * also there can be any number of "else if"
    * 
    * last "else" is executed only if all statement above fails
    * 
    * OPERATOR PRECEDENCE:
    * PRIORITY                                 OPERATOR
    * 1ST                                      !
    * 2ND                                      *,/,%
    * 3RD                                      +,-
    * 4TH                                      <,>,<=,>=
    * 5TH                                      ==,!=
    * 6TH                                      &&
    * 7TH                                      ||
    * 8TH                                      =
    * 
    * 
    * CONDITIONAL OPERATOR:
    * A short hand "if-else" can be written using the conditional or ternary operators:
    * 
    * syntax:
    * conditions?expression-if-true;expression-if-false
    * 
    * here ? and ; are ternary operators
    * 
    * SWITCH CASE CONTROL INSTRUCTION:
    * 
    * switch case is used when we have to make a choice between number of alternatives for given
    * variable.
    * 
    * 
    * SYNTAX:
    * switch(variable_pass)
    * {
    * Case c1:
    * code;
    * 
    * Case c2:
    * code;
    *                           #c1,c2,c3 ---->constants
    *                            #code--->any  valid c code
    * 
    * Case c3;
    * code;
    * 
    * 
    * default:
    * code;
    * 
    * }
    * 
    * the value of variable passed is matched against c1,c2,c3.....if it matches any of 
    * these case,that case along with all subsequent "case" and "default" 
    * statement are executed.
    * 
    * EXAMPLE:
    * 
    * switch(ch)    
    {
        case '+':
            result=num1+num2;
            break;
             
        case '-':
            result=num1-num2;
            break;
         
        case '*':
            result=num1*num2;
            break;
             
        case '/':
            result=(float)num1/(float)num2;
            break;
             
        case '%':
            result=num1%num2;
            break;
        default:
            printf("Invalid operation.\n");
    }*/
 

 
 

        int fno;
        int sno;
        //i//nt rst;
       char opr;
       printf ( "Enter First Number: ");
       scanf("%d", &fno);
       printf ("Enter Second Number: ");
       scanf("%d", &sno);
       printf ("Type Operator : ");
       scanf(" %c", &opr);
       if(opr=='+')
       {
           printf("%d",fno+sno);
       }
       else if(opr=='-')
       {
           printf("%d",fno-sno);
       }
       else if(opr=='*')
       {
           printf("%d",fno*sno);
           
       }
       else if(opr=='/')
       {
           printf("%d",fno/sno);
       }
       return 0;
}
