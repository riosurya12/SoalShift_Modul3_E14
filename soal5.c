#include <dirent.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main (int argc, char **argv)
{
//
    char novel_filename[] = "novel.txt";

    FILE *novel = fopen (novel_filename, "r");

    char saya[128];
    while (fgets (saya, 128, novel))
	if (strstr (saya, "saya"))
	    fprintf (output, "%s", saya);
    char fina[128];
    while (fgets (fina, 128, novel))
	if (strstr (fina, "Fina"))
	    fprintf (output, "%s", fina);
    char Ifah[128];
    while (fgets (Ifah, 128, novel))
	if (strstr (ifah, "Ifah"))
	    fprintf (output, "%s", ifah);

     fclose (novel);
     return 0;
}
