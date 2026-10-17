#include <stdio.h>

int main() {
    // চলকগুলো ঘোষণা করা
    double num1, num2, product;

    // ব্যবহারকারীর কাছ থেকে প্রথম সংখ্যা নেওয়া
    printf("প্রথম সংখ্যাটি লিখুন: ");
    scanf("%lf", &num1);

    // ব্যবহারকারীর কাছ থেকে দ্বিতীয় সংখ্যা নেওয়া
    printf("দ্বিতীয় সংখ্যাটি লিখুন: ");
    scanf("%lf", &num2);

    // সংখ্যা দুটি গুণ করা
    product = num1 * num2;

    // ফলাফল প্রদর্শন করা
    printf("গুণফলটি হলো: %.2lf\n", product);

    return 0;
}
