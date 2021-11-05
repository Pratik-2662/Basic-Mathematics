#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
while(1)
    {
        char aa[100],d[100],e[100];
        int i,oper,ope,length,a[50][50],b[50][50],c[50][50],j,n,m,l=1,stop;
        float No1,No2, no1,no2,no3,result=1;

    cout<<"Enter the following operators to do perform :"<<endl;
    cout<<"    1. For Mathematicals Operations\n";
    cout<<"    2. For Areas and Perimeters\n";
    cout<<"    3. For Number Conversion\n";
    cout<<"    4. Table of any Numbers\n";
    cout<<"    5. Find Greatest Number\n";
    cout<<"    6. Find Factorial\n";
    cout<<"    7. For Number Raised to Number(x^y)\n";
    cout<<"    8. Examples based on Strings\n";
    cout<<"    9. For Matrix Multiplication\n";
    cout<<"    10. For LCM\n";
    cout<<"    11.For exit\n";
    cout<<"Enter any above Operator: ";
    cin>>oper;
    cout<<endl;
    if(oper==1)
    {
        cout<<"Which Operation could you Perform :\n";
        while(1)
        {cout<<"        1. Addition                   2. Substraction\n";
        cout<<"        3. Multiplication             4. Division\n";
        cout<<"        5. Go to previous Menu\n";
        cout<<"Enter any above Operator: ";
        cin>>ope;
        cout<<endl;
    if(ope==1)
       {cout<<"For Addition Enter No1= ";
        cin>>No1;
        cout<<"Enter No2= ";
        cin>>No2;
        cout<<"You Entered No1= "<<No1 <<" and No2= "<<No2<<endl;
        cout<<"So Addition is "<<No1<<" + "<<No2<<" = "<<No1+No2<<endl<<endl;}
    else if(ope==3)
    {   cout<<"For Multiplication Enter No1= ";
        cin>>No1;
        cout<<"Enter No2= ";
        cin>>No2;
        cout<<"You Entered No1= "<<No1 <<" and No2= "<<No2<<endl;
        cout<<"So Multiplication is "<<No1<<" * "<<No2<<" = "<<No1*No2<<endl<<endl;}
    else if(ope==2)
         {cout<<"For Substraction Enter No1= ";
        cin>>No1;
        cout<<"Enter No2= ";
        cin>>No2;
        cout<<"You Entered No1= "<<No1 <<" and No2= "<<No2<<endl;
        cout<<"So Substraction is "<<No1<<" - "<<No2<<" = "<<No1-No2<<endl<<endl;}
    else if(ope==4)
         {cout<<"For Division Enter No1= ";
        cin>>No1;
        cout<<"Enter No2= ";
        cin>>No2;
        cout<<"You Entered No1= "<<No1 <<" and No2= "<<No2<<endl;
        cout<<"So Division is "<<No1<<" / "<<No2<<" = "<<No1/No2<<endl<<endl;}
        else if(ope==5)
        {
            break;
        }
            else
    {
        cout<<"            !!!Error!!!\nPlease Choose the Correct Operator\n ";

    }getch();}}
    else if(oper==2)
    {
        float res,l,b,h,pie=3.142,r;
  int opr;
 cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
cout<<"-_-_   "; cout<< "          Here are some operations to do perform"<<endl;
cout<<"-_-_   "; cout<<endl;
while(1)
{
cout<<"-_-_   "; cout<<"1.Area of Rectangle "<<endl;
cout<<"-_-_   "; cout<<"2.Perimeter of Rectangle"<<endl;
cout<<"-_-_   "; cout<<"3.Area of Square"<<endl;
cout<<"-_-_   "; cout<<"4.Perimeter of Square"<<endl;
cout<<"-_-_   "; cout<<"5.Area of Parallelogram"<<endl;
cout<<"-_-_   "; cout<<"6.Perimeter of a Parallelogram"<<endl;
cout<<"-_-_   "; cout<<"7.Area of Triangle"<<endl;
cout<<"-_-_   "; cout<<"8.Area of Circle"<<endl;
cout<<"-_-_   "; cout<<"9.Circumference of a Circle"<<endl;
cout<<"-_-_   "; cout<<"10.Volume of a Cube"<<endl;
cout<<"-_-_   "; cout<<"11.Go to Previous Menu"<<endl;
cout<<"-_-_   "; cout<<endl;

cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
cout<<"-_-_   "; cout<<"Enter the above opr to perform action = \n";
cout<<"-_-_   "; cin>>opr;
cout<<"-_-_   "; cout<<" You Choosed the "<<opr<<" no opr "<<endl;
 if (opr==1)
 { cout<<"-_-_   "; cout<<"And you have to find the Area of Rectangle"<<endl;
cout<<"-_-_   "; cout<<"Please enter the length and Breadth"<<endl;
cout<<"-_-_   "; cin>>l>>b;
 cout<<"-_-_   "; cout<<endl;
cout<<"-_-_   "; cout<<"Ok you enter the length= "<<l<<"  and breadth= "<<b<<endl;
 res=l*b;
cout<<"-_-_   "; cout<<"The Area of Rectangle is= "<<res<<endl;

cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl; }
 else if(opr==2)
 {cout<<"-_-_   "; cout<<" And you have to find the Perimeter of Rectangle"<<endl;
cout<<"-_-_   "; cout<<"Please enter the length and breadth"<<endl;
cout<<"-_-_   "; cin>>l>>b;
cout<<"-_-_   "; cout<<endl;
cout<<"-_-_   "; cout<<"Ok you enter length= "<<l<<"  breadth= "<<b<<endl;
 res=2*(l+b);
cout<<"-_-_   "; cout<<"The Perimeter of Rectangle is= "<<res<<endl;

cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl; }
 else if(opr==3)
 {cout<<"-_-_   "; cout<<" And you have to find the area of the Square "<<endl;
cout<<"-_-_   "; cout<<"Please enter the side of the square "<<endl;
cout<<"-_-_   "; cin>>l;
cout<<"-_-_   "; cout<<endl;
cout<<"-_-_   "; cout<<"Ok you enter side = " <<l<<endl;
 res=l*l;
cout<<"-_-_   "; cout<<"The area of Square is= "<<res<<endl;

cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl; }
 else if(opr==4)
 {cout<<"-_-_   "; cout<<" And you have to find the Perimeter of square "<<endl;
cout<<"-_-_   "; cout<<"Please enter the length "<<endl;
cout<<"-_-_   "; cin>>l;
cout<<"-_-_   "; cout<<endl;
cout<<"-_-_   "; cout<<"Ok you enter length= "<<l<<endl;
 res=4*l;
cout<<"-_-_   "; cout<<"The Perimeter of Square is= "<<res<<endl;

cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl; }
 else if(opr==5)
 {cout<<"-_-_   "; cout<<" And you have to find the area of Parallelogram "<<endl;
cout<<"-_-_   "; cout<<"Please enter the length and height "<<endl;
cout<<"-_-_   "; cin>>l>>h;
cout<<"-_-_   "; cout<<endl;
cout<<"-_-_   "; cout<<"Ok you enter length= "<<l<<"  height= "<<h<<endl;
 res=l*h;
cout<<"-_-_   "; cout<<"The area of Parallelogram is= "<<res<<endl;

cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl; }
 else if(opr==6)
 {cout<<"-_-_   "; cout<<" And you have to find the Perimeter of Parallelogram "<<endl;
cout<<"-_-_   "; cout<<"Please enter the length and breadth"<<endl;
cout<<"-_-_   "; cin>>l>>b;
cout<<"-_-_   "; cout<<endl;
cout<<"-_-_   "; cout<<"Ok you enter length= "<<l<<"  breadth= "<<b<<endl;
 res=2*(l+b);
cout<<"-_-_   "; cout<<"The Perimeter of Parallelogram is= "<<res<<endl;

cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl; }
 else if(opr==7)
 {cout<<"-_-_   "; cout<<" And you have to find the area of Triangle "<<endl;
cout<<"-_-_   "; cout<<"Please enter the length and breadth"<<endl;
cout<<"-_-_   "; cin>>l>>b;
cout<<"-_-_   "; cout<<endl;
cout<<"-_-_   "; cout<<"Ok you enter length= "<<l<<"  breadth= "<<b<<endl;
 res=0.5*l*b;
cout<<"-_-_   "; cout<<"The Area of Triangle is = "<<res<<endl;

cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl; }
 else if(opr==8)
 {cout<<"-_-_   "; cout<<" And you have to find the area of Circle "<<endl;
cout<<"-_-_   "; cout<<"Please enter the radius of Circle "<<endl;
cout<<"-_-_   "; cin>>r;
cout<<"-_-_   "; cout<<endl;
cout<<"-_-_   "; cout<<"Ok you enter radius = "<<r<<endl;
 res=pie*r*r;
cout<<"-_-_   "; cout<<"The area of circle is= "<<res<<endl;

cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl; }
 else if(opr==9)
 {cout<<"-_-_   "; cout<<" And you have to find the circumference of Circle "<<endl;
cout<<"-_-_   "; cout<<"Please enter the radius of Circle "<<endl;
cout<<"-_-_   "; cin>>r;
cout<<"-_-_   "; cout<<endl;
cout<<"-_-_   "; cout<<"Ok you enter radius = "<<r<<endl;
 res=2*pie*r;
cout<<"-_-_   "; cout<<"The Circumference of Circle is= "<<res<<endl;

cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl; }
 else if(opr==10)
 {cout<<"-_-_   "; cout<<" And you have to find the Volume of Cube "<<endl;
cout<<"-_-_   "; cout<<"Please enter the length of the Cube "<<endl;
cout<<"-_-_   "; cin>>l;
cout<<"-_-_   "; cout<<endl;
cout<<"-_-_   "; cout<<"Ok you enter length= "<<l<<endl;
 res=l*l*l;
cout<<"-_-_   "; cout<<"The Volume of Cube is= "<<res<<endl;

cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl; }
 else if(opr==11)
 {
     cout<<endl<<endl;
     break;}
 else
 {cout<<"-_-_   ";
  cout<<"          !!! ERROR !!! "<<endl;
 cout<<"-_-_   ";  cout<<"Please Select the Correct operator"<<endl;

cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_";  }

 getch();
 }}
 else if(oper==3)
 {
     int z,zz,p,f,y=0,s,count=0,x[10],sum=0,w,v=0;
     cout<<" Select the following Conversions\n";
     while(1)
     {
     cout<<"    1.To Convert the Number into Binary\n";
     cout<<"    2.To Convert the Binary Number into Decimal\n";
     cout<<"    3.Go to Previous Menu\n";
     cout<<"Enter any above Operator :";
     cin>>ope;
     if(ope==1)   //Decimal to binary
     {
        cout<<"\n    Enter the Decimal number to convert it into Binary : ";
cin>>z;
p=z;
while(p)//ye kevel no of digit nikalne kai liye hai
{
      p=p/10;
      count++;
  }

  cout<<"\n\n   [ The Conversion of "<<z<<" into Binary System is: "<<p;
  if (count==1)
  count=2;
 f=count*count*count;
  for (f; f >= 0; f--)//cout is the no of digit
  {
    s = z >> f;

    if (s & 1)
      cout<<"1";
    else
      cout<<"0";
  }cout<<" ]";

  cout<<"\n\n";
  cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;
  getch();
     }
     else if(ope==2)
     {
         cout<<"\n     Enter Binary Number to Convert it into Decimal: ";
        cin>>zz;
  while(z>0)
  {
  x[count]=zz%10;
  zz=zz/10;
  count++;
  }
  for(w=0;w<count;w++)
  {
      sum=sum+x[w]*pow(2,y);
      y++;
  }
  cout<<"\n     [ Decimal Number of  is : "<<sum<<" ]";
  cout<<endl<<endl;
  cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;
  getch();
    }
     else if(ope==3)
     {
         cout<<endl<<endl;
       break;
     }
     else
     {
         cout<<"            !!!Error!!!\nPlease Choose the Correct Operator\n\n ";
         cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;
         getch();
     }
 }}
     else if(oper==4)
    {  float num,counter=1,n;
    cout<<"Enter the number to show its Table: ";
    cin>>num;
    cout<<"How long is to be shown: ";
    cin>>n;
    cout<<endl;
    cout<<"             __________________________"<<endl;
    while(counter<=n)
    {
         cout<<"              |  "<<num<<" * "<<counter<<" = "<<num*counter<<endl;
         counter++;
    }
    cout<<"             --------------------------"<<endl;
    cout<<endl<<endl;}

    else if(oper==5)
    {
        cout<<"Enter Three Numbers "<<endl;
        cin>>no1>>no2>>no3;
        cout<<endl<<endl;
        for(i=1;i<=3;i++)
        {
            cout<<"You Entered no "<<i<<" : ";

        }

        cout<<endl;
        cout<<"      |                  |                  |"<<endl;
        cout<<"      "<<no1<<"                  |"<<"                  |"<<endl;
        cout<<"                         "<<no2<<"                  |"<<endl;
        cout<<"                                            "<<no3<<endl;
        getch();
        if(no1>no2 && no3)
        {
            cout<<"      |"<<endl;
            cout<<"      |"<<endl;
            cout<<"      |"<<endl;
            cout<<"      |"<<endl;
            cout<<"      |"<<endl;
            cout<<"      <<< is the Greatest Number"<<endl;
            cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;


        }
        else if(no2>no3)
        {   cout<<"                         |"<<endl;
            cout<<"                         |"<<endl;
            cout<<"                         |"<<endl;
            cout<<"The Greatest Number is >>>"<<endl;
            cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;
        }
        else
        {
            cout<<"                                            |"<<endl;
            cout<<"                                            |"<<endl;
            cout<<"                                            |"<<endl;
            cout<<"                   The Greatest Number is >>>"<<endl<<endl;
            cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;
        }
        }
        else if(oper==6)
        {
            int p,factorial=1,number;
            cout<<"\nEnter the Number to show its Factorial: ";
            cin>>number;
            for(p=1;p<=number;p++)
            {
                factorial=factorial*p;
            }
            cout<<"\n[ The Factorial of "<<number<<" is: "<<factorial<<" ]";
            cout<<endl<<endl;
            cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;
        }
        else if(oper==7)
  {double x;
   int p,result=1;
   cout<<"\nEnter the base value : ";
   cin>>x;
   cout<<"\nEnter the raised to value : ";
   cin>>p;
   if ( x == 0 )
   {
      cout<<"\n   [ "<<x<<" raised to "<<p<<" = "<<" 0 "<<" ]"<<endl<<endl;
      cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;
   }
  else if ( p == 0 )
   {
       cout<<"\n   [ "<<x<<" raised to "<<p<<" = "<<" 1 "<<" ]"<<endl<<endl;
       cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;
   }
   else if(x==1)
   {
        cout<<"\n   [ "<<x<<" raised to "<<p<<" = "<<" 1 "<<" ]"<<endl<<endl;
        cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;
   }
   else if(p==1)
   {
        cout<<"\n   [ "<<x<<" raised to "<<p<<" = "<<x<<" ]"<<endl<<endl;
        cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;
   }
   else
   {
       for(int i=0;i<p;i++)
    {
        result=result*x;

    }
    cout<<"\n   [ "<<x<<" raised to "<<p<<" = "<<result<<" ]"<<endl<<endl;
    cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;
    }}
    else if(oper==8)
    {
      cout<<"Select From the Following\n";
      while(1)
      {
      cout<<"    1. To Calculate the Length of String\n";
      cout<<"    2. To Calculate the string is Palindrome or not (for Space use '_')\n";
      cout<<"    3. To go to Previous Menu\n";
      cout<<"Enter the above Operators : ";
      cin>>ope;
      cout<<endl;
      if(ope==1)
      {
         cout<<endl<<endl;
       cout<<" Enter a String to calculate it's length (for Space use ' _ ') : ";
       cin>>aa;
       length=strlen(aa);
       cout<<"\n  [ Length of the string = "<<length<<" ]";
       cout<<endl<<endl;
       cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;
       getch();
      }
     else if(ope==2)
      {
           cout<<endl<<endl;
 printf("   Enter a string to check if it is a palindrome: ");
 cin>>d;
 strcpy(e,d);
 strrev(e);
 if(strcmp(d,e)==0)
 printf("\n    The string is Palindrome. ");
 else
 printf("\n    The string isn't a palindrome. ");
 cout<<endl<<endl;
 cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;
 getch();
      }
     else if(ope==3)
      {
          break;
      }
      else
      {
          cout<<"\n            !!!Error!!!\nPlease Choose the Correct Operator\n\n ";
          cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;
          getch();
      }

    }}
    else if(oper==9)
{
  cout<<"Enter the order of matrix (must be n*n) "<<endl;
cin>>n;
cout<<" * ";
cin>>m;
if (n==m)
{
cout<<"\nMultiplication possible "<<endl;
 }
else
{
cout<<"Multiplication not possible ";
l=0;
}
if (l)
{
cout<<"\nEnter the elements of matrix 1 "<<endl;
cout<<"     ";
for (i=1;i<=n;i++)
{
for (j=1;j<=n;j++)
cin>>a[i][j];
}
cout<<"\n\nElements of matrix 1 are ";
for (i=1;i<=n;i++)
{
cout<<endl;
for (j=1;j<=n;j++)
cout<<"   "<<a[i][j]<<"  ";
}
cout<<"\n\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;
cout<<"\n\nEnter the elements of matrix 2\n "<<endl;
for (i=1;i<=n;i++)
{
for (j=1;j<=n;j++)
cin>>b[i][j];
}
cout<<"\n\nElements of matrix 2 are\n ";
for (i=1;i<=n;i++)
{
cout<<endl;
for (j=1;j<=n;j++)
cout<<"   "<<b[i][j]<<"  ";
}
cout<<"\n\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;
getch();
cout<<"\n\nMultiplication of Two Matrixes is \n"<<endl;
for (i=1;i<=n;i++)
{
for (j=1;j<=n;j++)
{
c[i][j]=0;
for (int k=1;k<=n;k++)
{
c[i][j]=c[i][j]+(a[i][j]*b[i][j]);
}}}
for (i=1;i<=n;i++)
{
cout<<endl;
for (j=1;j<=n;j++)
cout<<"  "<<c[i][j]<<"  ";
}}
cout<<endl;
cout<<"\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl<<endl;
}
else if(oper==10)
{
    int n1,n2,max;

    cout<<"\nEnter two numbers : ";
    cin>>n1>>n2;
    cout<<endl;
    max=(n1>n2)? n1:n2;
    do
    {
        if(max%n1==0 && max%n2==0)
        {
            cout<<"LCM = "<<max<<endl<<endl;
            break;
        }
        else
        {
            ++max;
        }

    }
    while(true);
    }
    else if(oper==11)
    {
        return 0;
    }
    else
    {
        cout<<"            !!!Error!!!\n   Please Choose the Correct Operator\n\n ";
        cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl<<endl;

    }
    getch();
}}
