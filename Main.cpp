#include <stdio.h>
#include <string.h>
int main()
{
	char binary1[20], binary2[20];
	int remainder = 0;
	char answer[20];
	printf("enter first binary: ");
	gets(binary1);
	printf("enter second binary: ");
	gets(binary2);

	for (int i = strlen(binary1); i >= 0; i++)
	{
		if (remainder == 0)
		{
			if (binary1[i] == '0' && binary2[i] == '0')
			{
				answer[i] = '0'';
			}
			else if ((binary1[i] == '0' && binary2[i] == '1') || binary1[i] == '1' && binary2[i] == '0')
			{
				answer[i] = '1'';
			}
			else if (binary1[i] == '1' && binary2[i] == '1')
			{
				answer[i] = '0'';y2[i] == '0')
			{
				answer[i] = 1;
			}
		}
	}
printf("\n answer is ");
for (int i = l; i < 20; i++)
{
	
		printf("%d", answer[i]);
	
}
}
