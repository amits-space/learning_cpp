# C++ Basics

Practice programs while relearning C++ fundamentals.

## Topics Covered

- Conditionals (if-else, switch)
- Loops (for, while, do-while, nested loops)
- Functions
- Basic algorithms (from ADA class)
- Strings
- Basic math problems
- Arrays (declaration, input, traversal, search, min/max, counting, sorting)
- 2D arrays and matrix operations

## Project Structure

```
learning_cpp/
├── Initial_Lects/        # Early lecture exercises
├── basics/               # Core input/output and arithmetic
├── conditionals/         # Branching logic
├── loops/                # Iteration-based problems
│   └── Nested_Loops/     # Star and number patterns
├── functions/            # Functions and small utilities
├── Basic Algorithms/     # Search and number theory
├── Arrays/               # Array basics and common operations
├── 2d_arrays/            # Two-dimensional arrays and matrices
├── area_of_circle/
├── elector/
└── geo_prog/
```

## Programs

### Initial Lectures

| Program | File | Description |
|---------|------|-------------|
| Demo | `Initial_Lects/demo.cpp` | Reads an integer and prints a greeting |
| Age Calculator | `Initial_Lects/age.cpp` | Checks if age is 18 or older |
| Grade Calculator | `Initial_Lects/grade calculator.cpp` | Assigns letter grade (A–F) from marks |

### Basics

| Program | File | Description |
|---------|------|-------------|
| Odd/Even Checker | `basics/odd-even_checker/odd_even.cpp` | Determines if a number is even or odd |
| Prime Number Checker | `basics/prime/prime.cpp` | Prime check using trial division up to n/2 |
| Prime Number Checker (alternate) | `basics/prime/prime2.cpp` | Prime check by counting factors |
| Factorial | `basics/factorial/factorial.cpp` | Computes factorial of a number |
| Sum of N Numbers | `basics/Sum_of_N_Numbers/sumofn.cpp` | Sum of first n natural numbers |
| Net Salary Calculator | `basics/net_salary/net_sal.cpp` | Net salary from basic pay, allowance %, and deduction % |

### Conditionals

| Program | File | Description |
|---------|------|-------------|
| Leap Year Checker | `conditionals/leap_year/leap_year.cpp` | Checks leap year (4, 100, 400 rules) |

### Loops

| Program | File | Description |
|---------|------|-------------|
| Fibonacci Sequence | `loops/fibseq/fibseq.cpp` | Prints n terms of the Fibonacci sequence |
| Table Generator | `loops/tablegen/tablegen.cpp` | Multiplication table (1–10) for a number |
| Factors | `loops/factors/factor.cpp` | Lists all factors of a number |
| Sum of Factors | `loops/sum_of_factors/sof.cpp` | Lists factors and prints their sum |
| Perfect Number Checker | `loops/perfect_number/perfect_number.cpp` | Checks if sum of factors equals 2n |
| Armstrong Number | `loops/armstrong_number/armstrong.cpp` | Checks if sum of cubes of digits equals the number |
| Palindrome Number | `loops/palindrome_number/palindrome.cpp` | Checks if a number reads the same reversed |
| Digits of a Number | `loops/digits_of_numbers/digits.cpp` | Prints digits of a number (right to left) |
| GCD (Euclidean subtraction) | `loops/GCD/gcd.cpp` | GCD using repeated subtraction |

### Nested Loops (Patterns)

| Program | File | Description |
|---------|------|-------------|
| Number Grid | `loops/Nested_Loops/pattern1.cpp` | 4×4 grid printing sequential numbers |
| Lower Left Triangle | `loops/Nested_Loops/p2.cpp` | Left-aligned lower triangle of `*` |
| Upper Left Triangle | `loops/Nested_Loops/p3.cpp` | Left-aligned upper triangle of `*` |
| Lower Right Triangle | `loops/Nested_Loops/p4.cpp` | Right-aligned lower triangle of `*` |
| Equilateral Triangle | `loops/Nested_Loops/eqtriangle.cpp` | Draws an upside-down triangle pattern |

### Functions

| Program | File | Description |
|---------|------|-------------|
| Calculator | `functions/Calculator/simple_calculator.cpp` | Menu-driven calculator (+, −, ×, ÷) with do-while |
| Reverse Number | `functions/numreverse/numrev.cpp` | Reverses digits of an integer |
| Quadratic Roots | `functions/quadroots/quadroots.c` | Discriminant and roots of ax² + bx + c = 0 (C++ source, `.c` extension) |
| Distance Formula | `functions/Distanceformula/discal.cpp` | Distance between two (x, y) points |
| String Reverse | `functions/str_rev/str_rev.cpp` | Reverses a string character by character |

### Basic Algorithms

| Program | File | Description |
|---------|------|-------------|
| Sequential Search | `Basic Algorithms/sequential_search/seq_search.cpp` | Linear search for a key in an array |
| Euclid's Algorithm | `Basic Algorithms/euclid's algorithm/euc.cpp` | GCD using modulo (Euclidean algorithm) |

### Arrays

| Program | File | Description |
|---------|------|-------------|
| Declare and Print Array (for loop) | `Arrays/print_array/array_print.cpp` | Initialise and print a fixed-size array |
| Print Array (range-based for) | `Arrays/print_array/foreach.cpp` | Print array with range-based for loop |
| Input and Display Array | `Arrays/print_array/inputarray.cpp` | Read n elements and display them |
| Sum of Array Elements | `Arrays/sum_of_elements/sum.cpp` | Sum of all elements in an array |
| Maximum Element | `Arrays/Maximum_of_elements/max.cpp` | Finds maximum element in an array |
| Minimum Element | `Arrays/min_element/min.cpp` | Finds minimum element in an array |
| Linear Search | `Arrays/linear_search/linear_search.cpp` | Search for key; reports index or not found |
| Binary Search | `Arrays/binary_search/bSearch.cpp` | Sorts array (bubble sort) then binary search |
| Bubble Sort | `Arrays/bubble_sort/bubble.cpp` | Sorts an array in ascending order |
| Count Positive and Negative Elements | `Arrays/p&n/p_and_n.cpp` | Counts positive and negative integers in an array |

### 2D Arrays

| Program | File | Description |
|---------|------|-------------|
| Print 2D Array | `2d_arrays/2d_array.cpp` | Declares and prints a 2×3 matrix |
| Matrix Addition | `2d_arrays/matrix_addition/mat_add.cpp` | Adds two m×n matrices |

### Other

| Program | File | Description |
|---------|------|-------------|
| Area of Circle | `area_of_circle/circle.cpp` | Area from radius (π = 3.14) |
| Election Eligibility | `elector/election.cpp` | Two-party election simulator with NOTA |
| Geometric Progression Generator | `geo_prog/gp_generator.cpp` | Prints terms as base^i for i = 1 to n |

## Building and Running

Compile a program with g++ (example):

```bash
g++ -o program.exe path/to/source.cpp
./program.exe
```

On Windows with MSVC, use `cl` or your IDE’s build command instead.

Compiled executables (`*.exe`) are ignored by `.gitignore`.

## Goal

Build strong C++ fundamentals before moving on to data structures and algorithms.
