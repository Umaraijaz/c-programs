#include <stdio.h>
struct student {
  char name[60];
  int rollNum;
  char address[75];
  float marks;
} s[100];

int main() {
  int i, n;
  printf("Enter no of students:");
  scanf("%d", & n);
  printf("Enter student information:\n");
  for (i = 0; i < n; ++i) {
    s[i].rollNum = i + 1;
    printf("\nFor roll number%d: \n", s[i].rollNum);
    printf("Enter Name: ");
    scanf("%s", s[i].name);
    printf("Enter Address: ");
    scanf("%s", s[i].address);
    printf("Enter marks: ");
    scanf("%f", &s[i].marks);
  }
  printf("\nPrint student Information:\n");
  for (i = 0; i < n; ++i) {
    printf("\nRoll number: %d\n", i + 1);
    printf("First name: ");
    puts(s[i].name);
    printf("Address: ");
    puts(s[i].address);
    printf("Marks: %.1f", s[i].marks);
    printf("\n");
  }
  return 0;
}
