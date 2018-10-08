//Name: Amar Raut
//programming language- C LANGUAGE
//REASON:- C language is my favourite language.It is a base of every language,I believe that if anyone who masters in c & c++ then he/she can learn any language. 
//Even in competitive exams like GATE C language has the maximum weightage than the other subjects.Most of the compilers and kernel are developed in c/c++ language because it is sticks to machine.

#include <stdio.h>

int main()
{
  int c, input; 
  printf("Enter a number\n");
  scanf("%d", &input);
  if (input == 2)
    printf("Prime number.\n");
  else
  {
    for (c = 2; c <= input - 1; c++)
    {
      if (input % c == 0)
        break;
    }
    if (input != c)
      printf("Not prime.\n");
     else
       printf("Prime number.\n");
  }
  return 0;
}

/*
---#include<stdio.h>
{
explain:- this statement is a preprocessor or header,all the .h standard(stdio input output) libraries are loaded in to program or we can say that all system libraries are copied in a source file. #include is directive which is reponsible for loading libraries from a stdio folder.there are some other preprocessors like #define,#undef,#ifdef,#ifndef,#if,#else etc.preprocessor instructs the compiler to do required pre-processing before the actual compilation.
}

---int main()
{
explain:- In "int main()" "int" is a return type of function means what value will be return by function,main() is a indication of starting a main function. at the time of execution program starts execution from a main function so all the functions which are going to call must be called from a main function.
As execution starts from main function the "activation record" pushed on to the stack. this happens with the every function which is being called, Activation record is a snapshot of the current executing function.we can observe the need of activation record in the backtracking programs and recursions.
}

---int c, input;
{
explain:- this line indicates the declaration of the variables,Declaration means allocating memory for variables."int" is Integer data type which reserves a 16 bits(2 byte) memory for a variable this varies from compiler to compiler. "limit" and "input" are identifiers for reserved memory location,which consumes 2 bytes of each.
}

---printf("Enter a number\n");	---printf("Prime number.\n");	---printf("Not prime.\n");
{
explain:- printf() is a function which is used to write on a standard output device.The first type is made up of characters that will be printed on the screen.the other type having format specifier and string which will be printed on screen.The printf( ) function returns the number of characters actually printed. A negative return value indicates that an error has taken place.\n is a backslash character constant which will print take pointer on next line and then execute next instruction.
"Enter a number\n" is a argument passed to the printf which will print line "Enter a number".";"indicats end of statement.
}

---scanf("%d", &input);
{	
explain:- above statement is used for take input from standard input device.The scanf( ) function returns the number of data items successfully assigned a value. If
an error occurs, scanf( ) returns EOF."%d" is for taking integer as a input, as it is integer then it will read only 2 bytes of data from memory address which is provied as argument to scanf function. "&limit" provides address of itselt as an argument.
}

---if (input == 2)	---if (input % c == 0)
{
explain:-above statement is conditional statement."If" expression evaluates to true (anything other than 0), the statement or block that forms the target of if is executed; otherwise, the statement or block that is the target of else will be executed, if it exists. in above statement "limit == 2" is a condition is satisfies then it will return 1 and execute block of if statements.otherwise skip if part execute else part if it is present.
}

---else
{
explain:-condition of "if" statement not true then else statement executes.there is no existance of "else" without "if".
}

---for (c = 2; c <= input - 1; c++)
{
explain:-above statement is looping statement. "for" loop having three arguments initialization,condition and increment or decrement.for(;;) shows infinite looping.
for excuting it starts from initializing statement and then goes for checking for condition if condition satisfies then enters in a loop and after executing statement increments value and again goes for condition checking if true continues process if false then comes out of loop.
}

--- break
{
explain:- this statement will lead to fall out from loop.
}
---return 0;
{
explain:- value returning to function. after execution of this statement the "activation record" popped out from stack.
}


Algorithm:-
step 1:-take input from user.
step 2:-compare if it is equal to 2 if yes then go to step 3 else go to step 4.
step 3:- print "prime number". 
step 4:- check if entered number is divisible by from 2 to (input-1) if yes break from loop go to step 5 otherwise increment value of 'c'.
step 5:- check if input and 'c' not equal then go to step 6 else step 7.
step 6:- print "not prime".
step 7:- print "not prime".

complexity:-
 
SPACE COMPLEXITY:-O(2) constant.
TIME COMPLEXITY:- O(n-1) or O(n). (if we consider for condition checking it takes constant time	)



*/
