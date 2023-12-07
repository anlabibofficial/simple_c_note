#include <stdio.h>
int main ()
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
      printf("\n\n\nYour Note saved successfully.");
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
   printf("Your Note: %s\n",out);
   printf(".......................................................................................................................");


   fclose(output);

break;

    }
    case 0:
    numbers=0;
    break;

    default:
            printf("INVALID Input\n");
            break;

}
        printf("\nDO YOU WANT TO EXIT? (0) or Continue? (1): ");
        scanf("%d", &numbers);
        system("cls");

}
printf("\n\nThank you for using the Simple note project.\n\n");
     printf("Credits:\n");

     printf("AL- Nahian Labib\n");

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
}
}
