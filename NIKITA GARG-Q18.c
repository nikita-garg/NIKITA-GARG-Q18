#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int bt[10],at[10],n,i,j,temp,st[10],ft[10],wt[10],tat[10],pid[10];
    float awt=0,atat=0,totwt=0, tottat=0;
    printf("Enter the number of processes : ");
	scanf("%d",&n);
	printf("Enter process ID for each process : ");
  	for(i=0;i<n;i++)
  	scanf("%d",&pid[i]);
  	printf("Enter the burst time : ");
  	for(i=0;i<n;i++)
  	scanf("%d",&bt[i]);
  	printf("Enter the arrival time : ");
  	for(i=0;i<n;i++)
  	scanf("%d",&at[i]);
  	
  	printf("Process ID \t Burst time \t Arrival time\n");
  	for(i=0;i<n;i++)
	printf("\t%d\t\t %d\t\t %d\n", pid[i],bt[i],at[i]);
	
  	for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(bt[i]<bt[j])
            {
                temp=at[i];
                at[i]=at[j];
                at[j]=temp;
                
                temp=bt[i];
                bt[i]=bt[j];
                bt[j]=temp;
                
                temp=pid[i];
                pid[i]=pid[j];
                pid[j]=temp;
            }
        }
        
        for(i=0; i<n; i++)
    	{
        	if(i==0)
            	st[i]=at[i];
        	else
            	st[i]=ft[i-1];
        	wt[i]=st[i]-at[i];
        	ft[i]=st[i]+bt[i];
        	tat[i]=ft[i]-at[i];
        	totwt+=wt[i];
        	tottat+=tat[i];
    	}

    awt=totwt/n;
    atat=tottat/n;
    printf("\nProcess ID\t Arrival time\t Burst time\t Waiting time\t Turnaround time");
    for(i=0;i<n;i++)
        printf("\n%d\t\t %d\t\t %d\t\t %d\t\t %d",pid[i],at[i],bt[i],wt[i],tat[i]);
    printf("\nAverage Waiting time : %.2f",awt);
    printf("\nAverage Turnaroundtime : %.2f",atat);
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
