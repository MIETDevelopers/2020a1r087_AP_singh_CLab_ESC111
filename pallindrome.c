//NAME. 	AMRIT PAL SINGH   
//BRANCH. 	C.S.E A1
//ROLL NO.  087

// c Program to check whether a given string is a Palindrome.
//pallindrome : its a word which spells same if we read it from right or left side.
//e.g. NITIN, MADAM, MAM, VOLOV etc.
#include<stdio.h>//header files used to start any c function.
#include<string.h>// as we use string functions in the program.
int main(){
    char a[50], b[50];//here a is for original input and b is to copy that input
                      //50 represents the no. of letter we could enter as a word. 
                      //it can be changed as per requirements of the user.
                      //in this program we could enter upto 49 letter's word.
                      

    printf("Enter a String: \n"); //will ask the user to write a string or word.
    gets(a);// gets could intake the spaces between the user input.

    strcpy(b, a);   //strcpy() is a function which is used to copy string.
    strrev(b);      //strrev() is a function which is used to reverse a string.

    if (strcmp(a, b) == 0)  // strcmp() is used  to compare strings.
    {
        printf("The String is Palindrome. \n");//if the world is a pallindrome. 
    }
    else{
        printf("The string is not a Palindrome. \n");//if the word is not an pallindrome.
    }
return 0;// to enter the new input, or to clear the screen for new input.
}

