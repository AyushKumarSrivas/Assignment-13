More on Recursion in C Language

1. Write a recursive function to calculate sum of first N natural numbers
2. Write a recursive function to calculate sum of first N odd natural numbers
3. Write a recursive function to calculate sum of first N odd natural numbers
4. Write a recursive function to calculate sum of squares of first n natural numbers
5. Write a recursive function to calculate sum of digits of a given number
6. Write a recursive function to calculate factorial of a given number
7. Write a recursive function to calculate HCF of two numbers
8. Write a recursive function to print first N terms of Fibonacci series
9. Write a program in C to count the digits of a given number using recursion.
10. Write a program in C to calculate the power of any number using recursion.

Solution:-

1. #include <stdio.h>

int sumOfNaturalNumbers(int n) {
    if (n == 1)
        return 1;
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n = 10;
    printf("Sum of first %d natural numbers is %d\n", n, sumOfNaturalNumbers(n));
    return 0;
}

2. #include <stdio.h>

int sumOfOddNumbers(int n, int current) {
    if (n == 0)
        return 0;
    return current + sumOfOddNumbers(n - 1, current + 2);
}

int main() {
    int n = 10;
    printf("Sum of first %d odd natural numbers is %d\n", n, sumOfOddNumbers(n, 1));
    return 0;
}

3. #include <stdio.h>

int sumOfEvenNumbers(int n, int current) {
    if (n == 0)
        return 0;
    return current + sumOfEvenNumbers(n - 1, current + 2);
}

int main() {
    int n = 10;
    printf("Sum of first %d even natural numbers is %d\n", n, sumOfEvenNumbers(n, 2));
    return 0;
}

4. #include <stdio.h>

int sumOfSquares(int n) {
    if (n == 1)
        return 1;
    return n * n + sumOfSquares(n - 1);
}

int main() {
    int n = 5;
    printf("Sum of squares of first %d natural numbers is %d\n", n, sumOfSquares(n));
    return 0;
}

5. #include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int n = 1234;
    printf("Sum of digits of %d is %d\n", n, sumOfDigits(n));
    return 0;
}

6. #include <stdio.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n = 5;
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}

7. #include <stdio.h>

int hcf(int a, int b) {
    if (b == 0)
        return a;
    return hcf(b, a % b);
}

int main() {
    int a = 56, b = 98;
    printf("HCF of %d and %d is %d\n", a, b, hcf(a, b));
    return 0;
}

8. #include <stdio.h>

void fibonacci(int n, int a, int b) {
    if (n == 0)
        return;
    printf("%d ", a);
    fibonacci(n - 1, b, a + b);
}

int main() {
    int n = 10;
    printf("First %d terms of Fibonacci series are: ", n);
    fibonacci(n, 0, 1);
    printf("\n");
    return 0;
}

9. #include <stdio.h>

int countDigits(int n) {
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

int main() {
    int n = 12345;
    printf("Number of digits in %d is %d\n", n, countDigits(n));
    return 0;
}

10. #include <stdio.h>

int power(int base, int exp) {
    if (exp == 0)
        return 1;
    return base * power(base, exp - 1);
}

int main() {
    int base = 2, exp = 3;
    printf("%d to the power of %d is %d\n", base, exp, power(base, exp));
    return 0;
}
