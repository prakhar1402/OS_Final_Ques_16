#include<stdio.h>
int main(){
    int no,remaining_processes,tq;
    int time_diff,arr_time,burst_time;
    int waiting_time=0,turnaround_time=0;
    printf("Enter the number of processes: ");
    scanf("%d",&no);
    int arrival_time[no],burst[no],time_remain[no];
    remaining_processes=no;
    printf("\nEnter the arrival time difference between processes: ");
    scanf("%d",&arr_time);
    time_diff=arr_time;
    printf("\nEnter the burst time of each process: ");
    scanf("%d",&burst_time);
    printf("\nEnter the time quantum: ");
    scanf("%d",&tq);
    printf("\nAverage turnaround time of all processes is : %f\n",turnaround_time*1.0/no);
    printf("\nAverage waiting time of all processes is : %f\n",waiting_time*1.0/no);
}
