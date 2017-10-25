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
    char fina[128];
    char ifah[128];

    char saya[128];
    while (fgets (buffer, 128, novel))
	if (strstr (buffer, "saya"))
	    fprintf (output, "%s", saya);
    char fina[128];
    while (fgets (buffer, 128, novel))
	if (strstr (buffer, "Fina"))
	    fprintf (output, "%s", fina);
    char ifah[128];
    while (fgets (buffer, 128, novel))
	if (strstr (buffer, "Ifah"))
	    fprintf (output, "%s", ifah);

     fclose (novel);
     return 0;
}
