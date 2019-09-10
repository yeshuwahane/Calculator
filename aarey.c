#include<stdio.h>
int main(){
  int a[5];
  int b[5];
  char c=' ';
  for(int i=1;i<=5;i++){
    printf("Enter a number to add to memory 1 :  ");
    scanf("\n%d",&a[i]);
  }
  for(int i=1;i<=5;i++){
    printf("Enter a number to add to memory 2 :  ");
    scanf("\n%d",&b[i]);
  }
  printf("Enter what mathmetical operation to perform : ");
  //scanf("%c",&c);

  switch (c) {
    case '*': for(int i=1;i<=5;i++){
      printf("\n%d",a[i]*b[i]);
    }break;
    case '%': for(int i=1;i<=5;i++){
      printf("\n%d",a[i]%b[i]);
    }break;
    case '-': for(int i=1;i<=5;i++){
      printf("\n%d",a[i]-b[i]);
    }break;
    case '+': for(int i=1;i<=5;i++){
      printf("\n%d",a[i]+b[i]);
    }break;
    case '/': for(int i=1;i<=5;i++){
      printf("\n%d",a[i]/b[i]);
    }break;
  }
  return 0;
}
