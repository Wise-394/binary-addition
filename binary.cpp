#include <stdio.h>
#include <string.h>
int main()
{
	char binary1[20],binary2[20];
	int ans[25],length,carry = 0;
	printf("enter first binary:  ");
	gets(binary1);
	printf("enter second binary: ");
	gets(binary2);
	
	// to know how many bits user inputted
	if (strlen(binary1) > strlen(binary2))
	{
		length = strlen(binary1);	
	}
	else 
	{
		length = strlen(binary2);
	}
	
	//solving the binary
	for (int i = length; i >= 0; i--)
	{	if (carry == 0)
		{
			if (binary1[i] == '0' && binary2[i] == '0')
			{
				ans[i+1] = 0;
			}
			else if (binary1[i] == '0' && binary2[i] == '1' || binary1[i] == '1' && binary2[i] == '0' )
			{
				ans[i+1] = 1;
			}
			else if (binary1[i] == '1' && binary2[i] == '1')
			{
				ans[i+1] = 0;
				carry = 1;
			}
		}
		else if (carry == 1)
		{
				if (binary1[i] == '0' && binary2[i] == '0')
			{
				ans[i+1] = 1;
				carry = 0;
			}
			else if (binary1[i] == '0' && binary2[i] == '1' || binary1[i] == '1' && binary2[i] == '0' )
			{
				ans[i+1] = 0;
				carry = 1;
			}
			else if (binary1[i] == '1' && binary2[i] == '1')
			{
				ans[i+1] = 1;
				carry = 1;
			}
		}
	}
	ans[0] = carry;
	printf("answer is: ");
	if(carry == 1)
	{
		printf("%d",carry);
	}
	//printing the binary
	for (int i = 1; i < length + 1; i++)
	{
		printf("%d",ans[i]);
	}
}