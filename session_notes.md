### Assess progress
Write a program that takes a number as input and prints wether it's odd or even
- To know if they get conditionals, basic operators, datatypes and printing

### Loops
Q. How to do controlled automation  
ie. say, take n as input, find the sum of first n natural numbers  
A. Use the equation n(n+1)/2

Q1. For input n, print the first n natural numbers.  
Q2. Find n!   
A. Both need some form of automatic instruction giving mechanism. **Loops**

#### while
while [condition is true]  
-   perform this action

Demonstrate using Q1, Q2 and other questions in README

#### for
for ( [initialization] ;  [condition] ; [iterative statement])
-   Perform action

Demonastrate parallel with while, using same examples

### Arrays
Lets say use use a loop get a bunch of inputs, but you are required to find something about them which involves some operation on all of them, together (like, find min, max, average)  
You need some way to define an arbitrary number of variables during runtime. How? **Arrays**

Q1. Find min, max and average of n (give constant first, then take n as input as well) input numbers  
Q2. Do fibonacci but save each value (demonstrate a very basic form of caching, ie. save output to be used later)  
Q3. Input n numbers between 1 to 30, find frequency of each number.

### Functions
Q. For t test cases, print first n natural numbers for input n   
Possible to do with a loop, but emphasize on modularity and use functions instead

Use a minute to explain.
- Abstraction: Caller doesn't have to worry about function definition
- Modularity: Freedom of editing. Function can be edited without editing main code
- Repeatition: If one has to repeate the same lines of codes multiple times.
- Contract: Explain parameter, parameter types and return type

Convert a bunch of previous questions to function questions
(maybe ask them to write just functions first)

#### recursion
Just brief overview. Use fibonacci/factorial as example

### Strings
Emphasize that strings are just a list of characters. Demonstrate  
Show char[] as well as strings separately
Use ```<string>``` header

Q. Draw an n sided pyramid using '*'s  
Q. Write a program that reverses a string

### Pointers
Start talking about checking the equivalence of 2 strings. Extend to equivalence of arrays. (also sneak in string.compare)  
Demonstrate a pass by reference function


### GCC and linux
If enough participants have a linux machine, demonstrate basic linux commands such as cd and ls, then show gcc

End with a brief mention of dual boot. Dual boot will be taken in a separate session