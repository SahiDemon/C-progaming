
#include <stdio.h>

int main() {
  cchar empName;
  int baseSalary,total;
  printf("Type a name: \n");
  scanf("%s", &empName);
  printf("Type a number: \n");
  scanf("%d", &baseSalary);

  if(baseSalary <= 5000) {
    total = baseSalary + (5 / 100) * 100;
    printf("%c", empName);
    printf(" your salary is: %d", total);

  }else if(baseSalary >= 5000){
    total = baseSalary + (10 / 100) * 100;
    printf("%c", empName);
    printf(" your Salary is: %d", total);

  }else if(baseSalary <= 10000){
    total = baseSalary + (15 / 100) * 100;
    printf("%c", empName);
    printf(" your Salary is: %d", total);
  }
}
