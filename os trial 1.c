#include<stdio.h>
int main(){
    int no,remaining_processes,tq;
    int time_diff,arr_time,burst_time;
    int waiting_time=0,turnaround_time=0;
    printf("Enter the number of processes: ");
    scanf("%d",&no);
    printf("\nAverage turnaround time of all processes is : %f\n",turnaround_time*1.0/no);
    printf("\nAverage waiting time of all processes is : %f\n",waiting_time*1.0/no);
}
