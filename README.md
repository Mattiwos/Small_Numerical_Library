# A Small Numerical Library
Description:
	The small numberical library contains arcSin, arcCos, arcTan, and Log made with using addition, subtraction, multiplication, and division which a computer typically has unless its a specal-purpose processor. In order to test library accuracy there is a test harness program meant to compare math.h libary with my library. The instruction to run test program is shown below:
## How To Run Program
```
make
```
- Used to build program
```
./mathlib-test [-flag]
```
- Used to run test harness to test math library
```
-a: to run all tests.
-s: to run arcsin tests.
-c: to run arccos tests.
-t: to run arctan tests.
-l: to run log tests.

```
- Available flags.
---

## How to use Makefile
```
make
**or**
make all
```
- Used to build Program
```
make clean
```
- Used to removes all files that compiler generated.
