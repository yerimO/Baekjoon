#include <iostream>
#include <cstring>
using namespace std;

int yerime[100] ;
int s,num,size=0;

int push(int yerime[],int a,int size); // push 함수 선언
int pop(int* yerime,int size);//pop 함수 선언
void size_h(int size);//size 함수 선언
void empty(int size);//empty 함수 선언
void top(int* yerime,int size); //top 함수 선언

int main()
{
   string yerim;

   cin>>s; //명령어 수

   for(int i=0;i<s;i++){
      cin>>yerim;

      if(yerim=="push") //push 일때 들어갈 값을 넣고 사이즈를 증가시킨다.
      {
         cin>>num;
         size=push(yerime,num,size);
         }
      if(yerim=="pop") //pop일 떄 정수를 빼고 size 감소
         size=pop(yerime,size);
      if(yerim=="empty")
         empty(size);
      if(yerim=="size")
         size_h(size);
      if(yerim=="top")
         top(yerime,size);
   }
}

int push(int yerime[],int a,int size)
{
   *(yerime+size)=a;
   size++;
   return size;
}
int pop(int* yerime,int size)
{
   if(size==0)
   {
      cout<<-1<<endl;
      return size;}

   else
   {
      cout<<yerime[size-1]<<endl;
      return --size;}
}
void size_h(int size)
{
   cout<<size<<endl;
 }
void empty(int size)
{
   if(size==0)
      cout<<1<<endl;
   else
      cout<<0<<endl;
}
void top(int* yerime,int size)
{
   if(size==0)
      cout<<-1<<endl;
   else
      cout<<yerime[size-1]<<endl;
}
