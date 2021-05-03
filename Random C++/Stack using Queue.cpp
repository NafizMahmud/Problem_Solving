#include <iostream>
using namespace std;

int queue1[100],queue2[100], maxq = 100, front1 = 0, rear1 = 0, front2 = 0, rear2 = 0 ; /* 2 ta queue diye stack imp korbo.
                                                                                       so 2 ta front & 2 ta rear*/

/* process ta enqueue korar tym e
  1)Enqueue x to q2
  2) One by one dequeue everything from q1 and enqueue to q2.
  3) set current queue to q1 so next enqueue happens in q1
  and we have opposite things-
 1)Enqueue x to q1
  2) One by one dequeue everything from q2 and enqueue to q1.
  ejnno current queue laage  */

  int currnet_queue=1;int a=0;int b=0;

   int dequeue() {

   if(currnet_queue==1)// current queue = 1 hole queue2 theke dequeue/pop koro
   {if (rear2 == 0 || front2 >= rear2 ) {cout<<"queue1 Underflow ";}
    else {a=queue2[front2];front2++;} return a;}


   else  { // current queue = 2 hole queue1 theke dequeue koro
   if (rear1 == 0 || front1 >= rear1 ) {cout<<"queue1 Underflow ";}
   else {a=queue1[front1];front1++;} return a;}}


    void enqueue(int val) {

     if(currnet_queue==1) {//queue 1 e enqueue korlam
     if (rear1 == maxq)cout<<"Stack Overflow"<<endl;
     else {queue1[rear1] = val; rear1++;}

     if (rear2 == 0 || front2 >= rear2 ) {} // jodi q2 e kisu na thake taile to dequeue korar drkr nai
     else { b=dequeue(); enqueue(b);}// then recursion use kore One by one dequeue everything from q2 and enqueue to q1.
     currnet_queue=2;}//set current queue to quue2

     else {
     if (rear2 == maxq)cout<<"Stack Overflow"<<endl;
     else {queue2[rear2] = val; rear2++;}

     if (rear1 == 0 || front1 >= rear1 ) {}
     else { b=dequeue(); enqueue(b);}
     currnet_queue=1;}}


     void Display() {

     cout<<currnet_queue<<endl;

    cout<<"Stack = ";

   if(currnet_queue==2) {for (int i = rear1-1; i >= front1; i--) {cout<<queue1[i]<<" ";}cout<<endl;}

   else{ for (int i = rear2-1; i >= front2; i++) {cout<<queue2[i]<<" ";}cout<<endl;}}


   int main() {

  enqueue(10);
  enqueue(12);
  enqueue(13);
  enqueue(14);
  enqueue(11);
  dequeue();
  dequeue();
  dequeue();
Display();}
