#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINES 5000
char *lineptr[MAXLINES];

int readlines(char *lineptr[], int maxlines);
void writelines(char *lineptr[], int nlines);
int customgetline(char s[], int lim);
void customqsort(void *lineptr[], int left, int right);
char *alloc(int n);

int main(void) {
    int nlines;

    if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
        customqsort((void **)lineptr, 0, nlines-1);
        writelines(lineptr, nlines);
        return 0;
    } else {
        printf("error: input too big to sort\n");
        return 1;
    }
}

#define MAXLEN 1000

int customgetline(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

char *alloc(int n) {
    return (char *)malloc(n * sizeof(char));
}

int readlines(char *lineptr[], int maxlines) {
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;
    while ((len = customgetline(line, MAXLEN)) > 0) {
        if (nlines >= maxlines || (p = alloc(len)) == NULL)
            return -1;
        else {
            line[len-1] = '\0'; // Remove newline character
            strcpy(p, line);
            lineptr[nlines++] = p;
        }
    }
    return nlines;
}

void writelines(char *lineptr[], int nlines) {
    for (int i = 0; i < nlines; i++) {
        printf("%s\n", lineptr[i]);
    }
}

void swap(void *v[], int i, int j) {
    void *temp;
    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void customqsort(void *lineptr[], int left, int right) {
    int i, last;
    if (left >= right)
        return;
    swap(lineptr, left, (left + right)/2);
    last = left;
    for (i = left + 1; i <= right; i++)
        if (strcmp((char *)lineptr[i], (char *)lineptr[left]) < 0)
            swap(lineptr, ++last, i);
    swap(lineptr, left, last);
    customqsort(lineptr, left, last - 1);
    customqsort(lineptr, last + 1, right);
}
