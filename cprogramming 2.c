Operators:
	1)Arithematic ops:
		+,-,*,/ and %
		a=10,b=3;
		a/b=3
		a%b=1
	2)Logical ops:
		and &&
		or ||
		not !
exp1 exp2 exp1&&exp2 exp1||exp2 !exp1
T	  T     T         T        F
T     F     F         T        F
F     T     F         T        T
F     F     F         F        T
3)Relational ops:
< <= > >= == !=
4)Assignment ops:
=
+=, -=, *=, /=, %= //compound assignment
a+=b------->a=a+b
5)sizeof()
used to find the size of datatype
6)Conditional op or ternary op
exp1?exp2:exp3;
---
if(exp1)
exp2;
else
exp3
7)increment decrement op
a=10;
++a ---//pre
a++ ---//post
--a==
a-- //

8)Bit wise op


& and
| or
^ xor
~ complement
<< left shift
>> right shift

a b a&b a|b a^b
0	0	0	0	0
0	1	0	1	1
1	0	0	1	1
1	1	1	1	0
9) comma(,)




control statements:(Selective statement)
(decision making statements):
	1)simple if statement
	2)if else statement
	3)nested if else statement
	4)else if ladder
	5)switch statement
	
	
1)
if(exp)
statement;

or
if(exp)
{
st1;
st2;
....stn;
}


2)
if(exp)
true-block-statements;
else
false-block-statements;


3)
if(exp1)
{
if(exp2)
st1;
else
st2;
}
else
st3;

4)
if(exp1)
st1;
else if(exp2)
st2;
else if(exp3)
st3;
else
st4;

5)
switch(exp)
{
case exp1:
	st1;
break
case exp2:
	st2;
break;
......
......
......
case expn:
stn;
break;
}

