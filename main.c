#include <stdio.h>

// exo 1
int main() {
    printf("Hello, World!\n");
    return 0;
}

// exo 2
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum: %d\n", num1 + num2);
    return 0;
}

// exo 3
int main() {
    float length, width;
    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);
    printf("Area: %.2f\n", length * width);
    return 0;
}

// exo 4
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swapped: a = %d, b = %d\n", a, b);
    return 0;
}

// exo 5
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);
    return 0;
}

// exo 6
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
        printf("%d is the largest\n", a);
    else if (b >= c)
        printf("%d is the largest\n", b);
    else
        printf("%d is the largest\n", c);
    return 0;
}

// exo 7
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
        printf("%d is positive\n", num);
    else if (num < 0)
        printf("%d is negative\n", num);
    else
        printf("The number is zero\n");
    return 0;
}

// exo 8
int main() {
    int num, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    printf("Factorial: %d\n", fact);
    return 0;
}

// exo 9
int main() {
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}

// exo 10
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}

// exo 11
int main() {
    int arr[5];
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

// exo 12
int main() {
    int arr[5], max, min;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    max = min = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}

// exo 13
int main() {
    int arr[5], sum = 0;
    float avg;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    avg = sum / 5.0;
    printf("Sum: %d, Avg: %.2f\n", sum, avg);
    return 0;
}

// exo 14
int main() {
    int arr[5], temp;
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5 / 2; i++) {
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
    printf("Reversed array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

// exo 15
int main() {
    int arr1[5], arr2[5], merged[10];
    printf("Enter 5 numbers for array 1: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter 5 numbers for array 2: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < 5; i++) {
        merged[i] = arr1[i];
        merged[i + 5] = arr2[i];
    }
    printf("Merged array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}

// exo 16
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Length: %lu\n", strlen(str) - 1);
    return 0;
}

// exo 17
void concat(char* str1, char* str2) {
    while (*str1) str1++;
    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

int main() {
    char str1[100], str2[50];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    concat(str1, str2);
    printf("Concatenated: %s\n", str1);
    return 0;
}

// exo 18
#include <string.h>
int isPalindrome(char str[]) {
    int start = 0, end = strlen(str) - 1;
    while (start < end) {
        if (str[start] != str[end]) return 0;
        start++;
        end--;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if (isPalindrome(str)) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }
    return 0;
}

// exo 19
#include <ctype.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}

// exo 20
#include <string.h>
int main() {
    char str[100], ch;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character: ");
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) count++;
    }
    printf("'%c' appears %d times\n", ch, count);
    return 0;
}

// exo 21
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD: %d\n", gcd(a, b));
    return 0;
}

// exo 22
int power(int base, int exp) {
    int result = 1;
    for (int i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int base, exp;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    printf("%d^%d = %d\n", base, exp, power(base, exp));
    return 0;
}

// exo 23
int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial: %d\n", factorial(num));
    return 0;
}

// exo 24
int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is prime\n", num);
    } else {
        printf("%d is not prime\n", num);
    }
    return 0;
}

// exo 25
int sumDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d\n", sumDigits(num));
    return 0;
}

// exo 26
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    printf("First element: %d\n", *ptr);
    ptr++;
    printf("Second element: %d\n", *ptr);
    ptr += 2;
    printf("Fourth element: %d\n", *ptr);
    return 0;
}

// exo 27
void swap(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}

// exo 28
int strLength(char* str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Length: %d\n", strLength(str));
    return 0;
}

// exo 29
void reverseArr(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Before reverse: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverseArr(arr, 5);
    printf("After reverse: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

// exo 30
#include <stdlib.h>
int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int* arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}

// exo 31
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s;
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Enter roll: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Name: %s", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    return 0;
}

// exo 32
struct Student {
    char name[50];
    int marks[5];
};

int main() {
    struct Student s[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Enter name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        printf("Enter marks for 5 subjects: ");
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            scanf("%d", &s[i].marks[j]);
            sum += s[i].marks[j];
        }
        printf("Total marks: %d, Average: %.2f\n", sum, sum / 5.0);
    }
    return 0;
}

// exo 33
struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Employee e[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter details for employee %d\n", i + 1);
        printf("Enter name: ");
        fgets(e[i].name, sizeof(e[i].name), stdin);
        printf("Enter age: ");
        scanf("%d", &e[i].age);
        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
        getchar();
    }
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s", e[i].name);
        printf("Age: %d\n", e[i].age);
        printf("Salary: %.2f\n", e[i].salary);
    }
    return 0;
}

// exo 34
struct Rectangle {
    int length;
    int width;
};

int area(struct Rectangle rect) {
    return rect.length * rect.width;
}

int main() {
    struct Rectangle rect = {10, 5};
    printf("Area: %d\n", area(rect));
    return 0;
}

// exo 35
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date d;
    printf("Enter day: ");
    scanf("%d", &d.day);
    printf("Enter month: ");
    scanf("%d", &d.month);
    printf("Enter year: ");
    scanf("%d", &d.year);
    printf("Date: %02d-%02d-%04d\n", d.day, d.month, d.year);
    return 0;
}

// exo 36
int main() {
    FILE* file = fopen("hello.txt", "w");
    if (file == NULL) {
        printf("File creation failed\n");
        return 1;
    }
    fprintf(file, "Hello, World!\n");
    fclose(file);
    printf("File created\n");
    return 0;
}

// exo 37
int main() {
    FILE* file = fopen("hello.txt", "r");
    if (file == NULL) {
        printf("File not found\n");
        return 1;
    }
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    return 0;
}

// exo 38
#include <ctype.h>
int countWords(FILE* file) {
    int count = 0;
    char ch;
    int inWord = 0;
    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {
            if (!inWord) {
                inWord = 1;
                count++;
            }
        } else {
            inWord = 0;
        }
    }
    return count;
}

int main() {
    FILE* file = fopen("sample.txt", "r");
    if (file == NULL) {
        printf("File not found\n");
        return 1;
    }
    int wordCount = countWords(file);
    fclose(file);
    printf("Words: %d\n", wordCount);
    return 0;
}

// exo 39
int main() {
    FILE* file = fopen("hello.txt", "a");
    if (file == NULL) {
        printf("File not found\n");
        return 1;
    }
    fprintf(file, "Appended text\n");
    fclose(file);
    printf("Text appended\n");
    return 0;
}

// exo 40
int main() {
    FILE *source, *dest;
    char ch;
    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Source file not found\n");
        return 1;
    }
    dest = fopen("dest.txt", "w");
    if (dest == NULL) {
        printf("Destination file not found\n");
        fclose(source);
        return 1;
    }
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }
    fclose(source);
    fclose(dest);
    printf("File copied\n");
    return 0;
}

// exo 41
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

// exo 42
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

// exo 43
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int target = 4;
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = linearSearch(arr, size, target);
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }
    return 0;
}

// exo 44
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 4, 5, 8};
    int target = 4;
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = binarySearch(arr, size, target);
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }
    return 0;
}

// exo 45
int main() {
    int arr[] = {5, 1, 4, 2, 8, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int freq[size];
    for (int i = 0; i < size; i++) {
        freq[i] = -1;
    }
    for (int i = 0; i < size; i++) {
        if (freq[i] == -1) {
            int count = 1;
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count;
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
    return 0;
}

// exo 46
#define N 4
int board[N][N];

int isSafe(int row, int col) {
    for (int i = 0; i < col; i++) {
        if (board[row][i] == 1) return 0;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) return 0;
    }
    for (int i = row, j = col; j >= 0 && i < N; i++, j--) {
        if (board[i][j] == 1) return 0;
    }
    return 1;
}

int solveNQueens(int col) {
    if (col >= N) return 1;
    for (int i = 0; i < N; i++) {
        if (isSafe(i, col)) {
            board[i][col] = 1;
            if (solveNQueens(col + 1)) return 1;
            board[i][col] = 0;
        }
    }
    return 0;
}

void printBoard() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}

int main() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            board[i][j] = 0;
        }
    }
    if (solveNQueens(0)) {
        printf("Solution:\n");
        printBoard();
    } else {
        printf("No solution\n");
    }
    return 0;
}

// exo 47
void fibonacci(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}

// exo 48
void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    towerOfHanoi(n - 1, from, aux, to);
    printf("Move disk %d from %c to %c\n", n, from, to);
    towerOfHanoi(n - 1, aux, to, from);
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}

// exo 49
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void printPrimes(int start, int end) {
    printf("Primes between %d and %d: ", start, end);
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter range: ");
    scanf("%d %d", &start, &end);
    printPrimes(start, end);
    return 0;
}

// exo 50
#define MAX 100
void sieveOfEratosthenes(int n) {
    int prime[MAX];
    for (int i = 0; i <= n; i++) {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = 0;
            }
        }
    }
    printf("Primes up to %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (prime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    sieveOfEratosthenes(n);
    return 0;
}