#include<stdio.h>
#define max_visitors 100

typedef struct
{
	int ages[max_visitors];
	int count;
	int total ages;
}	visitortracker;

void addvisitor(visitortracker*tracker,int age)
{
	if(tracker->count>=max_visitors)
	{
		printf("visitor limit reached.\n");
		return;
	}
	if(age < 0||age > 120)
	{
		printf("invalid age:%d\n",age);
		return;
	}
	tracker->ages[tracker->count]= age;
	tracker->count++;
	tracker->total age +=age;
}
void displaStatstics(const visitortracker*tracker)
{
	if (tracker->count == 0)
	{
		printf("no visitors recorded.\n");
		return;
	}
	int min = tracker->ages[0];
	int max = tracker->ages[0];
	
	for(int i = 1; i<tracker->count; i++)
	{
		if(tracker->ages[i] < min)
			min = tracker->ages[i];
			
		if(tracker->ages[i] > max)
			max = tracker->ages[i];	
	}
	double average = (double)tracker->totalage/tracker->count;
	
	printf("\n visitor count:%\n",tracker->count);
	printf("total age:%d\n",tracker->totalage);
	printf("average age:%.2f\n",average);
	printf("minimum age:%d\n",min);
	printf("maximum age:%d\n",max);
}

int main(void)
{
	visitortracker tracker = {{0},0,0};
	
	int sampleages[] = {18,25,32,40,21};
	int n = sizeof(sampleages)/ sixeof(sampleages[0]);
	
	for(int i = 0; i<n;i++);
		addvisitor(&tracker,sampleages[i]);
	printf("visitorages:");
	for(int i = 0; i<tracker.count;i++);
		printf("%d",tracke.ages[i]);
	displayStatstics(&tracker);
	return 0;	
}
