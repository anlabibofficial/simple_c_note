#include <stdio.h>
int main ()
{
    int operations, numbers=1;

    printf("      ************************************\n");
    printf("      *                                  *\n");
    printf("      *  WELCOME to the Simple Notepad   *\n");
    printf("      *  Programmed with C.              *\n");
    printf("      *  Developer: Labib                *\n");
    printf("      *                                  *\n");
    printf("      ************************************\n");



    printf("             .     .    \n");
    printf("              \\   /     \n");
    printf("            `  .-.  '   \n");
    printf("           -- (   ) --  \n");
    printf("            `  `-'  '   \n");
    printf("              /   \\     \n");
    printf("             '     '    \n");
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

    printf("                                       ||\n");
    printf("                                       ||\n");
    printf("                                       ||\n");
    printf("                                    /______\\\n");
    printf("                                     /    \\\n");
    printf("                                      /  \\\n");
    printf("                                       /\\ \n");
    printf("\n----------------------- ");


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
printf("\n---------------------------------------------------\n");
        printf("\nDO YOU WANT TO EXIT? (0) or Continue? (1): ");
        scanf("%d", &numbers);
        system("cls");

}
printf("\n\nThank you for using the Simple note project.\n\n");
     printf("Credits:\n");

     printf("AL- Nahian Labib\n");

        return 0;
}
