#include <bits/stdc++.h>
const unsigned int N = 100001;
using namespace std;

struct Workshop
{
        int start_time ;
        int duration ;
        int end_time ;
};

struct Available_Workshops 
{
        int n ;
        Workshop *ws = new Workshop[N];
};

Available_Workshops *initialize(int starts[], int durations[], int no_wss)
{
        Available_Workshops *av_wss = new Available_Workshops();
        av_wss->n = no_wss;

        // Create array of workshops
        for (int i = 0; i < no_wss; i++)
        {
                Workshop wrkshp;
                wrkshp.start_time = starts[i];
                wrkshp.end_time = starts[i] + durations[i];
                wrkshp.duration = durations[i];

                av_wss->ws[i] = wrkshp;
        }

        return av_wss;
}

int CalculateMaxWorkshops(Available_Workshops *ptr)
{
        int max_ws = 1;
        int no_ws = ptr->n;
        Workshop *wrkshps = ptr->ws;
        sort(wrkshps, wrkshps + no_ws);
        Workshop prev = wrkshps[0];
        for (int itr = 1; itr < no_ws; itr++)
        {
                Workshop current = wrkshps[itr];
                if (current.start_time >= prev.end_time)
                {
                        max_ws++;
                        prev = current;
                }
        }
        return max_ws;
}

bool operator<(Workshop const &a, Workshop const &b)
{
        return a.end_time < b.end_time;
}


int main(int argc, char *argv[])
{
        int n; // number of workshops
        cin >> n;
        // create arrays of unknown size n
        int *start_time = new int[n];
        int *duration = new int[n];

        for (int i = 0; i < n; i++)
        {
                cin >> start_time[i];
        }
        for (int i = 0; i < n; i++)
        {
                cin >> duration[i];
        }

        Available_Workshops *ptr;
        ptr = initialize(start_time, duration, n);
        cout << CalculateMaxWorkshops(ptr) << endl;
        return 0;
}
