


/* 
* This example is copied from
* https://www.thegeekstuff.com/2013/06/buffer-overflow/
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char buff[15];
    int pass = 0;

    printf("\nI understand I will never write a program like this\n");

    printf("\n Enter the password : \n");
    scanf("%s",buff);

    if(strcmp(buff, "thesecretpass")) {
        printf ("\n Wrong Password \n");
    } else {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass) {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
    }

    return(0);
}```
Then scroll down and "Create a new branch for this commit and start a pull request. "

Then click "Propose changes"

Write a comment and click on "Create pull request"


At the "top" you see pull requests are increased, click on pull-requests ...

You will see a pull request we made has a red cross beside it. This means it did not pass the checks.

Select the pull-request

You will see something like
