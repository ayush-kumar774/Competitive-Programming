//https://atcoder.jp/contests/abc158/tasks/abc158_c
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int a , b ;
    cin >> a >> b ;
    for(int i = 1; i <= 1250; i++)
    {
        int c = i * 0.08 ;
        int d = i * 0.1 ;
        if(c == a){
            if(d == b)
            {
                cout << i << endl ;
                break;
            }
            else {
                cout << -1 << endl ;
                break;
            }
        }
        // cout << c <<  endl ;
        // cout << d << endl ;
    }
}
// // Program for the given question. It is SRT(Shortest Remaining Time) process scheduling.

// #include <bits/stdc++.h>
// using namespace std;
// // wt -> Waiting Time
// // tat -> Turn Around Time
// // bt -> Burst Time
// // art -> Arrival Time



// //structure for every process
// struct Process 
// {
//     int pid; // Process ID
//     int bt; // Burst Time
//     int art; // Arrival Time
// } proc[100];

// void findTurnAroundTime(Process proc[], int n, int wt[], int tat[]) 
// {
//     for (int i = 0; i < n; i++)
//     tat[i] = proc[i].bt + wt[i];
// }

// //This function will find waiting time of all process

// void findWaitingTime(Process proc[], int n, int wt[]) 
// {
//     int rt[n];
//     for (int i = 0; i < n; i++)
//      rt[i] = proc[i].bt;
//     int complete = 0, t = 0, minm = 999999999; // we are assigning huge value to minm so we could find the smallest number easily.
//     int shortest = 0, finish_time;
//     bool check = false;
//     while (complete != n)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if ((proc[j].art <= t) && (rt[j] < minm) && rt[j] > 0)
//             {
//                 minm = rt[j];
//                 shortest = j;
//                 check = true;
//             }
//         }
//         if (check == false)
//         {
//             t++;
//             continue;
//         }   
//         // decrementing the remaining time
//         rt[shortest]--;
//         minm = rt[shortest];
//         if (minm == 0)
//         minm = 99999999; // we are assigning huge value to minm so we could find the smallest number easily.
//         // If a process gets completely executed
//         if (rt[shortest] == 0)
//         {
//             complete++;
//             check = false;
//             finish_time = t + 1;
//             // Calculate waiting time
//             wt[shortest] = finish_time - proc[shortest].bt - proc[shortest].art;
//             if (wt[shortest] < 0)
//                 wt[shortest] = 0;
//         }
//         // Increment time
//         t++;
//     }
// }

// // calculate average time and print the data
// void findavgTime(Process proc[], int n) 
// {
//     int wt[n], tat[n], total_wt = 0,
//     total_tat = 0;

//     // calling findWaitingTime function 

//     findWaitingTime(proc, n, wt);

//     // calling findTurnAroundTime function to find turn around time for all processes
//     findTurnAroundTime(proc, n, wt, tat);

//     // It will print all the details .
//     cout << "Processes " << " Burst time " << " Waiting time " << " Turn around time" << " Arriving Time \n" ;
//     for (int i = 0; i < n; i++)
//     {
//         total_wt = total_wt + wt[i];
//         total_tat = total_tat + tat[i];
//         cout << " " << proc[i].pid << "\t\t" << proc[i].bt << "\t\t " << wt[i] << "\t\t " << tat[i]  << "\t\t " << proc[i].art << endl;
//     }
//     cout << "\nAverage waiting time = " << (float)total_wt / (float)n; cout << "\nAverage turn around time = " << (float)total_tat / (float)n;
// }

// int main()
// {
//     int n ;
//     cout << "Enter number of processes:- ";
//     cin >> n ; // It will be used to create process structures.
//     for(int i = 0; i < n; i++)
//     {
//         proc[i].pid = i+1 ;
//         cout << "Enter Arrival Time for process " << proc[i].pid << " :- " ;
//         cin >> proc[i].art;
//         cout << "Enter Burst Time for process " << proc[i].pid << " :- " ;
//         cin >> proc[i].bt ;
//     }
//     findavgTime(proc, n);
//     return 0;
// }
