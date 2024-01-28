#include<bits/stdc++.h>
using namespace std;
struct Job {
   char id;
   int deadLine;
   int profit;
};
bool comp(Job j1, Job j2){
   return (j1.profit > j2.profit); //compare jobs based on profit
}
int max_dead(Job jobs[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(jobs[i].deadLine>max){
            max = jobs[i].deadLine;
        }
    }
    return max;

}
int main(){
    Job jobs[] = {{'a',2,20}, {'b',2,60}, {'c',1,40},{'d',3,100},{'e',4,80}};
   int n = 5;
   sort(jobs,jobs+n,comp);
   Job gantt[max_dead(jobs,n)+1];
   Job k ={' ',-1,-1};
   memset(gantt,0,max_dead(jobs,n)+1);
   for(int i = 0;i<n;i++){
    Job job = jobs[i];
    if(gantt[job.deadLine].deadLine == job.deadLine){
        if(gantt[job.deadLine].profit<job.profit){
            gantt[job.deadLine]=job;
        }
    }
    else if(gantt[job.deadLine].id!=job.id){
        gantt[job.deadLine]=job;
    }
   }
   for(auto i:gantt){
    cout<<i.id<<" ";
   }
   cout<<endl;
}