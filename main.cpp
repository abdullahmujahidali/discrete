#include<iostream>

using namespace std;
void method1(int x,int y)
   {
       cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<((x==y)?"1":"0")<<"\t\t"<<((x|y)&(!x|!y));
      
   }
  
  
   void method2(int x,int y)
   {  
           cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<!(x&y)<<"\t\t"<<(!x|!y);
      
   }
   void method3(int x,int y)
   {
       cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<((x==y)?"1":"0")<<"\t\t"<<(((x==1)&&(y==0)?0:1)&((x==0)&&(y==1))?1:0);
   }
int main()
{
  
   int x,y,z;
  
   cout<<"p\tq\t p<->q \t ((p U q) ^ (!p U !q)) \t";
   for(x=0;x<=1;++x)
       for(y=0;y<=1;++y)
          
           {
              
           method1(x,y);
              
           }
           cout<<"\nTable for Question 1: It is not valid as LHS not equal to RHS.";
               cout<<"\np\tq \t!(p ^ q) \t (!p U !q) \t";
   for(x=0;x<=1;++x)
       for(y=0;y<=1;++y)
          
           {  
           method2(x,y);
           }
           cout<<"\nTable for Question 2: It is valid as LHS is equal to RHS.";
           cout<<"\np\tq\t (p <-> q) \t ((p->q) ^ (q->p)) \t";
           for(x=0;x<=1;++x)
       for(y=0;y<=1;++y)
          
           {  
           method3(x,y);
           }
           cout<<"\nTable for Question 3: It is not valid as LHS not equal to RHS.";
   return 0;
}