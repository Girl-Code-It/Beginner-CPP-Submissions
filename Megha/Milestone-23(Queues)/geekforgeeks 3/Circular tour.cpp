/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
int tour(petrolPump p[],int n)
{
   //Your code here
   int index = 0,sum=0,diff=0;
   for(int i=0;i<n;i++){
       sum += p[i].petrol - p[i].distance;
       if(sum<0){
           diff += sum;
           sum = 0; 
           index = i+1;
       }
   }
   
   int ans = diff + sum;

   return ans>=0?index:-1;
}
