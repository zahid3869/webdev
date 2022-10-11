#include<stdio.h>

struct persion
{
 int age;
 float salary;//global


};
int main()

{
  struct persion persion1={27,4563.457};
  struct persion persion2,persion3;

  persion2.age=45;
  persion2.salary=4737.4568;

  persion3=persion2;


}
