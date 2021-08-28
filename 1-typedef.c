#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Person {
  char name[64];
  int age;
};

typedef struct Person Person;

void test02() {
  // *是修饰p1的，所以这里的p1是char *类型，而p2是char类型
  char *p1, p2;
  // p5 p6都是char*类型
  char *p5, *p6;

  typedef char * PCHAR;
  // 这里的p1、p2都是char*类型
  PCHAR p3, p4;
}

int main() {
  Person p = {"aaa", 10};
  printf("%s", p.name);
  return EXIT_SUCCESS;
}
