#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

void github()
{
    char url[] = "https://github.com/anlabibofficial/simple_c_note";  

    char command [200];
    sprintf(command, "start %s",url);

    system(command);
}


int main ()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
 int color = BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY; 
 int textAttributes = FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_INTENSITY; 
SetConsoleTextAttribute(hConsole, color | textAttributes);
system("cls");

int number2=1;
while (number2 != 0)
{
printf("                                       _     ___   ____ ___ _   _    \n");
printf("                                      | |   / _ \\ / ___|_ _| \\ | |    \n");
printf("                                      | |  | | | | |  _ | ||  \\| |  \n");
printf("                                      | |__| |_| | |_| || || |\\  |  \n ");
printf("                                     |_____\\___/ \\____|___|_| \\_|   \n\n\n\n");


    printf("                         **************************************************\n");
    printf("                         *      Welcome to the Simple Notepad using C     *\n");
    printf("                         *                                                *\n");
    printf("                         *          Please Login to continue.             *\n");
    printf("                         **************************************************\n");

   char password[15];
   char unlock[]="labibnote";

   printf("                          Enter your password: ");
   gets(password);

   system("cls");
   if (strcmp(password,unlock)==0)
{

    int operations, numbers=1;

    printf("      ************************************\n");
    printf("      *                                  *\n");
    printf("      *  WELCOME to the Simple Notepad   *\n");
    printf("      *  Programmed with C.              *\n");
    printf("      *  Developer: Labib                *\n");
    printf("      *                                  *\n");
    printf("      ************************************\n");



    printf("                 ______ ______\n");
    printf("               _/      Y      \\_\n");
    printf("              // ~~ ~~ | ~~ ~  \\\\\n");
    printf("             // ~ ~ ~~ | ~~~ ~~ \\\\\n");
    printf("            //________.|.________\\\\\n");
    printf("           `----------`-'----------'\n");
    printf("\n");

    while (numbers != 0)      //cycle
    {
    printf("\n\n    [1] Write\n");
    printf("    [2] View Notes\n\n");
    printf("    [3] GitHub\n");
    printf("    [0] Exit\n\n");

    printf("    Choose an option: ");

   scanf("%d",&operations);

     system("cls");
   getchar ();

   switch (operations)
{
    case 1:
{
   FILE *newfile;
   char main[100000];

    printf("                         Start writing your note here\n\n");

    printf("     ____\n");
    printf("    |    |\n");
    printf("    |    |\n");
    printf("    |    |\n");
    printf("    |____|\n");
    printf("     \\__/\n");
    printf("      \\/===================  ");


   fgets(main, sizeof(main), stdin);


   newfile=fopen("mainfile.txt","w");

   fprintf(newfile, "%s\n", main);     //putted data

   if (newfile==NULL)
   {
    printf("Note written failed.");
   }

   else
   {
      printf("\n.......................................................................................................................\n");
      printf("\n\n\n  Your Note saved successfully.\n");
      int lenght = strlen(main);

      int wordcount;
      int wci=0;
     while (main[wci] != '\0')
     {
        if (main[wci] == ' ')
        {
            wordcount++;
        }
        wci++;
     }
     wordcount= wordcount+1;
     printf("  Total Words: %d\n",wordcount);           //counting words
     printf("  Total Character: %d\n\n",lenght-1);           //counting characters.

   }
   fclose(newfile);  //closed file

break;
}

case 2:
    {

    FILE *output;
    char out[100000];
    output=fopen("mainfile.txt","r");

   fgets(out, sizeof(out), output);    //scan data from file

   printf(".......................................................................................................................\n\n");
   printf("  Note: %s\n",out);
   printf("\n.......................................................................................................................\n\n");


   fclose(output);

break;

    }

    case 3:
    {
          github();
          break;  
    }

    case 0:
    numbers=0;
    break;

    default:
            printf("  INVALID Input\n");
            break;

}
    printf("\t\t\t\t\t           _ _   \n");
    printf("\t\t\t\t\t          (_) |  \n");
    printf("\t\t\t\t\t  _____  ___| |_ \n");
    printf("\t\t\t\t\t / _ \\ \\/ / | __|\n");
    printf("\t\t\t\t\t|  __/>  <| | |_ \n");
    printf("\t\t\t\t\t \\___/_/\\_\\_|\\__|\n");
        printf("\n  DO YOU WANT TO EXIT? (0) or RETURN TO MAIN MENU? (1): ");
        scanf("%d", &numbers);
        system("cls");

}
printf("\n\n  Thank you for using the Simple note project.\n\n");
     printf("  Credits:\n");

     printf("  AL- Nahian Labib\n");

        return 0;
}

else 
{
printf("                                              ___  ____  ____ ____  _      \n");
printf("                                             / _ \\|  _ \\/ ___/ ___|| |         \n");
printf("                                            | | | | |_) \\___ \\___ \\| |        \n");
printf("                                            | |_| |  __/ ___) |__) |_|         \n");
printf("                                             \\___/|_|   |____/____/(_)       \n");

   printf("\n\n                                         Sorry, Password Incorrected!!!\n\n\n\n\n\n\n");

    printf("\n  Enter Password again: ");
        scanf("%d", &number2);
        system("cls");
}
}
}
