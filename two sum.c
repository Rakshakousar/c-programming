#include<stdio.h>

int main(void)
{
	int nums[] = {2,7,11,15};
	int n = sizeof(nums) / sizeof(ums[0]);
	int target = 9;
	
	int found = 0;
	
	for (int i = 0; i<n-1 && !found; i++)
	{
		for (int j = i + 1; j<n;j++)
		{
			if nums[i]+ nums[j] ==target)
			{
				printf{"target:%d\n",target}
				printf("indices:[%d,%d\n]",i,j)
				printf("values:%d+ %d + %d=\n"
					nums[i],nums[j],target)
				found = 1;
				break;
				
			}
		}
	}
	if(!found)
		printf("no two numbers add up to %d.\n",target);
}

