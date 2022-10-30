#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

// Complete the solve function below.

// Please either make the string static or allocate on the heap. For example,
// static char str[] = "hello world";
// return str;
//
// OR
//
// char* str = "hello world";
// return str;
//
int gcd(int a, int b) {
    int temp;
    while(a%b != 0){
        temp = a%b;
        a = b;
        b = temp;
    }
    return b;
}
char* solve(int a, int b, int c) {
    if(c <= fmax(a,b) && c%gcd(a,b) == 0){
        return "YES";
    }
    return "NO";
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* t_endptr;
    char* t_str = readline();
    int t = strtol(t_str, &t_endptr, 10);

    if (t_endptr == t_str || *t_endptr != '\0') { exit(EXIT_FAILURE); }

    for (int t_itr = 0; t_itr < t; t_itr++) {
        char** abc = split_string(readline());

        char* a_endptr;
        char* a_str = abc[0];
        int a = strtol(a_str, &a_endptr, 10);

        if (a_endptr == a_str || *a_endptr != '\0') { exit(EXIT_FAILURE); }

        char* b_endptr;
        char* b_str = abc[1];
        int b = strtol(b_str, &b_endptr, 10);

        if (b_endptr == b_str || *b_endptr != '\0') { exit(EXIT_FAILURE); }

        char* c_endptr;
        char* c_str = abc[2];
        int c = strtol(c_str, &c_endptr, 10);

        if (c_endptr == c_str || *c_endptr != '\0') { exit(EXIT_FAILURE); }

        char* result = solve(a, b, c);

        fprintf(fptr, "%s\n", result);
    }

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}