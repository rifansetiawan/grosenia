#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main() {
   
   int i, j, length,choice,key;
   scanf("%d", &key);
   char msg[100];
   gets(msg);
   fflush(stdin);
   length = strlen(msg);

      char ch;
      for(int i = 0; msg[i] != '\0'; ++i) {
         ch = msg[i];
         //encrypt for lowercase letter
         if (ch >= 'a' && ch <= 'z'){
            ch = ch + key;
            if (ch > 'z') {
               ch = ch - 'z' + 'a' - 1;
            }  
            msg[i] = ch;
         }
         //encrypt for uppercase letter
         else if (ch >= 'A' && ch <= 'Z'){
            ch = ch + key;
            if (ch > 'Z'){
               ch = ch - 'Z' + 'A' - 1;
            }
            msg[i] = ch;
         }
      }
      printf("Encrypted message: %s", msg);
   getchar();
   return 0;
}