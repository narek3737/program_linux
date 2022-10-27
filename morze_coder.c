//only coder for morze alphabet for english alphabet
//UPPERCASE and lowercase dont matter
//
//

#include <stdio.h>

int strleng(char strin[])
{
        int len;
        len = 0;
        while(strin[len] !='\0')
        {
                ++len;
        }

        return len;
}



void coder(char a)
{

	if (a == 'a' || a == 'A') printf(".- ");
	if (a == 'b' || a == 'B') printf("-... ");
	if (a == 'c' || a == 'C') printf("-.-. ");
	if (a == 'd' || a == 'D') printf("-.. ");
	if (a == 'e' || a == 'E') printf(". ");
	if (a == 'f' || a == 'F') printf("..-. ");
	if (a == 'g' || a == 'G') printf("--. ");
	if (a == 'h' || a == 'H') printf(".... ");
	if (a == 'i' || a == 'I') printf(".. ");
	if (a == 'j' || a == 'J') printf(".--- ");
	if (a == 'k' || a == 'K') printf("-.- ");
	if (a == 'l' || a == 'L') printf(".-.. ");
	if (a == 'm' || a == 'M') printf("-- ");
	if (a == 'n' || a == 'N') printf("-. ");
	if (a == 'o' || a == 'O') printf("--- ");
	if (a == 'p' || a == 'P') printf(".--. ");
	if (a == 'q' || a == 'Q') printf("--.- ");
	if (a == 'r' || a == 'R') printf(".-. ");
	if (a == 's' || a == 'S') printf("... ");
	if (a == 't' || a == 'T') printf("- ");
	if (a == 'u' || a == 'U') printf("..- ");
	if (a == 'v' || a == 'V') printf("...- ");
	if (a == 'w' || a == 'W') printf(".-- ");
	if (a == 'x' || a == 'X') printf("-..- ");
	if (a == 'y' || a == 'Y') printf("-.-- ");
	if (a == 'z' || a == 'Z') printf("--.. ");
	if (a == ' ') printf("/ ");

}

int main(void)
{
	int len;
	char txt[100];
	printf("Enter the text:");
	scanf("%[^\n]%*c", txt);
	len = strleng(txt);
	printf("%s\n", txt);
	printf("length is: %d\n", len);
	for(int i = 0; i < len; i++)
	{
		coder(txt[i]);
	}
	printf("\n");

	return(0);
}
