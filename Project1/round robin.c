#include <stdio.h>
#include "utility.h"
#include "process.h"
#include "stat.h"

// Algorithm for round robin
int round_robin(process_s *process)
{
    int turnaroundtime = 0, responsetime = 0, waitingtime = 0, idletime = 0;
    int i = 0, process_completed = 0, previous_process = 0;
    float idle_quanta = 0;
    process* proc = NULL;
    int currentturnaround
    
    printf("\n Round Robin Process...\n\n");
    
    
    while(1)
    {
        idle_quanta = 0;
        
        //when all the processes have been completed break the loop
        if (process_completed == p->size)
            break;
        
        // if there is no process to run then the quanta will be idle
        if(process == NULL)
        {
            printf("timeslice %d: idle", i);
            idletime += 1;
        }
        else
        {
            // get the CPU, NOTE: remainingtime should be added
            if(process->run_time == process-remainingtime)
                responsetime += i - process->arrival_time;
            
            if(process->run_time == process->remainingtime)
                process_completed++;
            
            previous_process = process->pid;
            
            printf("timeslice %d: idle", i);
            process->remainingtime -= 1;
            
            //if process is completed, then idle time recorded
            if(task->remainingtime <= 0)
            {
                process_completed++;
                idlequanta = 1;
                process->remainingtime = 0;
                turnaroundtime += i - process->arrival_time;
                currentturnaround = i - process->arrival_time;
                waitingtime += currentturnaround - process-run_time;
            }
            
            // task id and remaing run time
            print("PID: %d, Remaining runtime: %d", process->pid, process->remainingtime);
            
            // check if cpu is idle
            if(idlequanta)
            {
                print("cpu was idle for %f amount of time", idlequanta)
                idletime += idlequanta;
            }
            
        } // else statement
        i++;
        printf("\n");
    }// while loop
}

