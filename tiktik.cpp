#include<iostream>
#include<conio.h>
using namespace std;


//Compiler version g++ 6.3.0
void show(char[],int);
int main()
{
char ch[9]={'1','2','3','4','5','6','7','8','9'};
int size=9,i,j,k,run=0;
cout<<"welcome to Tik Tok game:\n";
cout<<"x:symbol of first player.\n";
cout<<"o:symbol of second player.\n";
cout<<"\t1\t|\t2\t|\t3\t\n";
cout<<"\t  \t|\t \t|\t \t\n";
cout<<"     ---------------------------------------\n";
cout<<"\t4\t|\t5\t|\t6\t\n";
cout<<"\t  \t|\t \t|\t \t\n";
cout<<"     ---------------------------------------\n";
cout<<"\t7\t|\t8\t|\t9\t\n";
cout<<"\t  \t|\t \t|\t \t\n";
cout<<"rule:\t if you enter position less then one or more then Nine \Then you will lost the one chance\n";
for(i=1;i<=9;i++)
{
if(i==1||i==3||i==5||i==7||i==9)
{
cout<<"first players turn :x\n";
cin>>j;
if(ch[j-1]!='X'||ch[j-1]!='O')
ch[j-1]='X';
else
cout<<j<<"is already occupied\n";
show(ch,size);}
if(ch[0]=='X'&&ch[1]=='X'&&ch[2]=='X'||ch[3]=='X'&&ch[4]=='X'&&ch[5]=='X'||ch[6]=='X'&&ch[7]=='X'&&ch[8]=='X'||
 ch[0]=='X'&&ch[3]=='X'&&ch[6]=='X'||ch[1]=='X'&&ch[4]=='X'&&ch[7]=='X'||ch[2]=='X'&&ch[8]=='X'&&ch[5]=='X'||ch[0]=='X'&&ch[4]=='X'&&ch[8]=='X'
||ch[2]=='X'&&ch[4]=='X'&&ch[6]=='X' )
{
cout<<"congrates \First player win the Match";
run=1;
break;
}
if(i==2||i==4||i==6||i==7)
{
 cout<<"second player turn: O \n";
 cin>>k;
 if(ch[k-1]!='X'||ch[k-1]!='O')
 {
  ch[k-1]='O';}
 else
 {
   cout<<k<<"is already occupied\n";}
 show(ch,size);
 }
 if(ch[0]=='O'&&ch[1]=='O'&&ch[2]=='O'||ch[3]=='O'&&ch[4]=='O'&&ch[5]=='O'||ch[6]=='O'&&ch[7]=='O'&&ch[8]=='O'||
 ch[0]=='O'&&ch[3]=='O'&&ch[6]=='O'||ch[1]=='O'&&ch[4]=='O'&&ch[7]=='O'||ch[2]=='O'&&ch[8]=='O'&&ch[5]=='O'||ch[0]=='O'&&ch[4]=='O'&&ch[8]=='O'
||ch[2]=='O'&&ch[4]=='O'&&ch[6]=='O' )
{
cout<<"congrates \second player win the match";
run=1;
}
if(run=0)
{cout<<"match draw \ please try again";}}
return(0);
}
void show(char ch[],int size){
cout<<"\t"<<ch[0]<<"\t|\t"<<ch[1]<<"\t|\t"<<ch[2]<<"\t\n";
cout<<"\t  \t|\t \t|\t \t\n";
cout<<"     ---------------------------------------\n";
cout<<"\t"<<ch[3]<<"\t|\t"<<ch[4]<<"\t|\t"<<ch[5]<<"\t\n";
cout<<"\t\t|\t \t|\t \t\n";
cout<<"     ---------------------------------------\n";
cout<<"\t"<<ch[6]<<"\t|\t"<<ch[7]<<"\t|\t"<<ch[8]<<"\t\n";
cout<<"\t  \t|\t \t|\t \t\n";
}


