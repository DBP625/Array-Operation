//1. Write a C program to find second largest element in an array.
/*#include<stdio.h>
int main()
{
   long long n;
   scanf("%lld",&n);
   long long ara[n];
   for(long long i=0 ; i<n ; i++)
   {
      scanf("%lld",&ara[i]);
   }
   long long m1=-1e7,m2=-1e9;
   for(long long i=0 ; i<n ; i++)
   {
   	  if(ara[i]>m1)
   	  {
   	  	m2=m1;
   	  	m1=ara[i];
   	  }
   	  else if(ara[i]!=m1 && ara[i]>m2)
   	  {
   	  	m2=ara[i];
   	  }
   }
   printf("%lld",m2);
}*/

/*2. Write a C program to count total number of duplicate elements in an array.
#include<stdio.h>
long long ara[1000000] ;
int main()
{
	long long n,cnt=0 ;
	scanf("%lld",&n) ;
	for(long long i=0 ; i<n ; i++)
	{
		scanf("%d",&ara[i]) ;
	}
	for(long long i=0 ; i<n ; i++)
	{
		for(long long j=(i+1) ; j<n ; j++)
		{
			if(ara[i]==ara[j])
			{
                cnt++ ;
			}
		}
	}
printf("Duplicate elements : %lld",cnt) ;
}
*/
/*3. Write a C program to count frequency of each element in an array.
#include<stdio.h>
long long ara[10000000];
int main()
{
   long long n,j;
   scanf("%lld",&n);
   for(long long i=0 ; i<n ; i++)
   {
   	  scanf("%lld",&ara[i]);
   }
   for(long long i=0 ; i<n ; i++)
   {
      long long cnt=1;
      for(long long j=(i+1) ; j<n ; j++)
      {
      	if(ara[i]==ara[j])
         {
             cnt++;
             ara[j]='\0';
         }
      }
      if(ara[i]!='\0')
     {
      printf("element %lld , frequency %lld",ara[i],cnt) ;
      printf("\n") ;
     }
   }
}*/


//Printing the duplicate elements
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n,i;
  cin>>n;
  long long ara[n];
  long long cnt[n]={'\0'};
  for(long long i=0 ; i<n ; i++)
  {
    cin>>ara[i];
  }
  for(long long i=0 ; i<n ; i++)
  {
    cnt[ara[i]]++;
    if(cnt[ara[i]]==2)
   {
      cout<<ara[i]<<" ";
   }
  }

 }*/

/*4. Write a C program to check whether two array is same or not (values might be at different positions).
#include<stdio.h>
long long ara1[1000000];
long long ara2[1000000];
long long frq1[1000000]={'\0'};
long long frq2[1000000]={'\0'};
int main()
{
   long long n;
   scanf("%lld",&n);
   long long ara1[n];
   for(long long i=0 ; i<n ; i++)
   {
      scanf("%lld",&ara1[i]);
   }
   long long m;
   scanf("%lld",&m);
   long long ara2[m];
   for(long long i=0 ; i<m ; i++)
   {
      scanf("%lld",&ara2[i]);
   }
   if(n!=m)
   {
      printf("Not Equal");
   }
   else
   {
      for(long long i=0 ; i<n ; i++)
      {
         frq1[ara1[i]]++;
      }
      for(long long j=0 ; j<m ; j++)
      {
         frq2[ara2[j]]++;
      }
      long long cnt=0;
      for(long long k=0 ; k<n ; k++)
      {
         if(frq1[k]==frq2[k])
         {
             cnt++;
         }
      }
      if(cnt==n)
      {
         printf("Equal");
      }
      else
      {
         printf("Not Equal");
      }
   }
}*/

//5. Write a C program to find sum of all array elements.
// #include<stdio.h>
// long long ara[100000];
// long long cnt=0;
// int main()
// {
//    long long n;
//    scanf("%lld",&n);
//    for(long long j=0 ; j<n ; j++)
//    {
//       scanf("%lld",&ara[j]);
//    }
//    for(long long i=0 ; i<n ; i++)
//    {
//       cnt+=ara[i];
//    }
//    printf("The summation is %lld",cnt);
// }


/*Deleting duplicate elements from array
As same as printing the unique elements
#include<bits/stdc++.h>
long long cnt[900000]={'\0'};
using namespace std;
int main()
{
   long long n;
   cin>>n;
   long long ara[n];
   for(long long i=0 ; i<n ; i++)
   {
      cin>>ara[i];
   }
   for(long long i=0 ; i<n ; i++)
   {
      if(cnt[ara[i]]!=1)
      {
         cout<<ara[i]<<" ";
      }
      cnt[ara[i]]=1;
   }
}*/

/*Deleting a specific element from array
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n,m,pos;
   cin>>n>>m;
   //Here m is the specific element.
   long long ara[10000]={'\0'};
   for(long long i=0 ; i<n ; i++)
   {
      cin>>ara[i];
   }
   for(long long i=0 ; i<n ; i++)
   {
      if(ara[i]==m)
      {
         pos=(i+1);
         break;
         //Cause jate kon position e ase oita ber krte pari
      }
   }
   cout<<pos;
   cout<<endl;
   for(long long j=(pos-1) ; j<(n-1) ; j++)
   {
      ara[j]=ara[j+1];
   }
   for(long long k=0 ; k<(n-1) ; k++)
   {
      cout<<ara[k]<<" ";
   }
}*/


//Inserting an element in specific position
/*
Insert 34 at position 4
#include<bits/stdc++.h>
using namespace std;
long long ara[100000];
int main()
{
   long long n,m;
   cin>>n>>m;
   long long ara[n];
   for(long long i=0 ; i<n ; i++)
   {
      cin>>ara[i];
   }
   long long pos=4;
   //Reverse way te deletion er moto
   for(long long i=(n-1) ; i>=(pos-1) ; i--)
   {
      ara[i+1]=ara[i];
   }
   ara[3]=m;
   //Out of loop,otherwise proti iteration e ara[3]=10 hbe.
   for(long long i=0 ; i<(n+1) ; i++)
   {
      cout<<ara[i]<<" ";
   }
}*/


/*Write a C program to merge two array to third array.
#include<bits/stdc++.h>
using namespace std;
long long a[10000];
long long b[10000];
long long c[10000]={'\0'};
int main()
{
   long long n;
   cin>>n;
   for(long long i=0 ; i<n ; i++)
   {
      cin>>a[i];
   }
   long long m;
   cin>>m;
   for(long long j=0 ; j<m ; j++)
   {
      cin>>b[j];
   }
   long long k=0,l=0,c=n,p=m;
   while(n--)
   {
      c[k]=a[k];
      k++;
   }
   while(m--)
   {
      c[k]=b[l];
      l++;
      k++;
   }
   for(long long d=0 ; d<(c+p) ; d++)
   {
      cout<<c[d]<<" ";
   }
   for(long long i=0 ; i<n ; i++)
   {
      c[i]=a[i];
   }
   long long j=0;
   for(long long i=n ; i<(n+m) ; i++)
   {
      c[i]=b[j];
      j++;
   }
   for(long long i=0 ; i<(n+m) ; i++)
   {
      cout<<c[i]<<" ";
   }
}*/


/*4. Write a C program to put even and odd elements of array
in two separate array.
#include<bits/stdc++.h>
using namespace std;
long long a[1000];
long long b[1000];
long long c[1000];
int main()
{
  long long n;
  cin>>n;
  for(long long i=0 ; i<n ; i++)
  {
     cin>>a[i];
  }
  long long even=0 , odd=0 ;
  for(long long i=0 ; i<n ; i++)
  {
    if(a[i]%2==0)
    {
      b[even]=a[i];
      even++;
    }
    else if (a[i]%2!=0)
    {
      c[odd]=a[i];
      odd++;
    }
  }
  sort(b,b+even);
  sort(c,c+odd);
  // for(long long m=0 ; m<even ; m++)
  // {
  //    cout<<b[m]<<" ";
  // }
  // for(long long n=0 ; n<odd ; n++)
  // {
  //    cout<<c[n]<<" ";
  // }
}*/


/*5. Write a C program to sort even and odd elements of array separately.
#include<bits/stdc++.h>
using namespace std;
long long ev[1000];
long long od[1000];

int main()
{
   long long n;
   cin>>n;
   long long ara[n];
   for(long long i=0 ; i<n ; i++)
   {
      cin>>ara[i];
   }
   long long even=0,odd=0;
   for(long long i=0 ; i<n ; i++)
   {
     if(ara[i]%2==0)
     {
        ev[even]=ara[i];
        even++;
     }
     else
     {
        od[odd]=ara[i];
        odd++;
     }
   }
   long long tmp1=0,tmp2=0;
   for(long long j=0 ; j<even ; j++)
   {
      for(long long k=j ; k<even ; k++)
      {
         if(ev[k]<ev[j])
         {
            tmp1=ev[j];
            ev[j]=ev[k];
            ev[k]=tmp1;
         }
      }
  printf("%lld ",ev[j]);
   }
   for(long long l=0 ; l<odd ; l++)
   {
      for(long long m=l ; m<odd ; m++)
      {
         if(od[m]<od[l])
         {
            tmp2=od[l];
            od[l]=od[m];
            od[m]=tmp2;
         }
      }
      printf("%lld ",od[l]);
   }
}*/

/*6. Write a C program to left rotate an array.
upto 3 index
#include<bits/stdc++.h>
using namespace std;
long long ara[10000];
int main()
{
   long long n;
   cin>>n;
   for(long long i=0 ; i<n ; i++)
   {
      cin>>ara[i];
   }
   long long first=ara[0],second=ara[1],third=ara[2];
   for(long long i=0 ; i<(n-2) ; i++)
   {
      ara[i]=ara[i+3];
   }
   ara[n-3]=first;
   ara[n-2]=second;
   ara[n-1]=third;
   for(long long i=0 ; i<n ; i++)
   {
      cout<<ara[i]<<" ";
   }
}*/

//left rotate unique way
/*#include<bits/stdc++.h>
using namespace std;
int ara[100000];
int a[100000];
int cnt[100000];
int main()
{
   int n,k;
   cin>>n>>k;
// int ara[n];
   for(int i=0;i<n;i++)
   {
        cin>>ara[i];
   }
   for(int i=k ; i<n ; i++)
   {
     cout<<ara[i]<<" ";
   }
   for(int i=0;i<k;i++)
   {
     cout<<ara[i]<<" ";
   }
}*/


/*left rotate bigger way
#include<bits/stdc++.h>
using namespace std;
int ara[100000];
int a[100000];
int cnt[100000];
int main()
{
   int n,k,m;
   cin>>n>>k;
// int ara[n];
   for(int i=0;i<n;i++)
   {
        cin>>ara[i];
   }
   for(int m=0 ; m<k ; m++)
   {
     cnt[m]=ara[m];
   }
   for(int i=0;i<(n-k);i++)
   {
     ara[i]=ara[i+k];
   }
   for(int j=0 ; j<(n-k) ; j++)
   {
     cout<<ara[j]<<" ";
   }
   for(int l=0 ; l<k ; l++)
   {
      cout<<cnt[l]<<" ";
   }
}
*/


/*7. Write a C program to right rotate an array.
Right shift by 3 digit
#include<bits/stdc++.h>
using namespace std;
long long ara[100000];
int main()
{
  long long n;
  cin>>n;
  for(long long i=0 ; i<n ; i++)
  {
     cin>>ara[i];
  }
  long long l=ara[n-1],l2=ara[n-2],l3=ara[n-3];
  for(long long i=(n-2) ; i>=0 ; i--)
  {
     ara[i+3]=ara[i];
  }
  ara[0]=l3;
  ara[1]=l2;
  ara[2]=l;
  for(long long i=0 ; i<n ; i++)
  {
    cout<<ara[i]<<" ";
  }
}*/


/*Right rotate unique way.
#include<bits/stdc++.h>
using namespace std;
int ara[100000];
int a[100000];
int cnt[100000];
int main()
{
  int n,k,m;
  cin>>n>>k;
// int ara[n];
  for(int i=0;i<n;i++)
  {
       cin>>ara[i];
  }
  for(int i=(n-k) ; i<n ; i++)
  {
    cout<<ara[i]<<" ";
  }
  for(int i=0 ; i<(n-k) ; i++)
  {
     cout<<ara[i]<<" ";
  }
}*/


/*Multiplication of two 1D array
#include<bits/stdc++.h>
using namespace std;
long long a[100000];
long long b[188888];
long long c[100000]={'\0'};
int main()
{
   long long n;
   cin>>n;
   for(long long i=0 ; i<n ; i++)
   {
      cin>>a[i];
   }
   long long m;
   cin>>m;
   for(long long j=0 ; j<m ; j++)
   {
      cin>>b[j];
   }
   long long j;
   if(n>m)
   {
      j=n;
   }
   else if(n<m)
   {
      j=m;
   }
   else if(n==m)
   {
      j=n;
   }
   for(long long k=0 ; k<j ; k++)
   {
      c[k]=a[k]*b[k];
      if(n>m)
      {
         c[j-1]=1*a[j-1];
      }
      else
      {
         c[j-1]=1*b[j-1];
      }
   }
   for(long long p=0 ; p<j ; p++)
   {
      cout<<c[p]<<" ";
   }
}*/


//An array to arrange the positive and negative in sorted order(not counting the values)
/*#include<bits/stdc++.h>
using namespace std;
long long neg[1000];
long long pos[1000];
int main()
{
   long long n;
   cin>>n;
   long long ara[n];
   for(long long i=0 ; i<n ; i++)
   {
   	 scanf("%lld",&ara[i]);
   }
   long long s1=0,s2=0;
   for(long long i=0 ; i<n ; i++)
   {
   	  if(ara[i]>0)
	  {
		pos[s1]=ara[i];
		s1++;
	  }
	  else
	  {
	  	neg[s2]=ara[i];
	  	s2++;
	  }
   }
   long long s3=0,s4=0;
   for(long long i=0 ; i<n ; i++)
   {
      if((i%2==0))
      {
         cout<<pos[s3]<<" ";
         s3++;
      }
      else
      {
         cout<<neg[s4]<<" ";
         s4++;
      }
   }
}*/


//Searching two or more element
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int ara[n];
   for(int i=0 ; i<n ; i++)
   {
      cin>>ara[i];
   }
   int x,y;
   cin>>x>>y;
   bool flag1=false,flag2=false;
   int d,d1;
   for(int i=0 ; i<n ; i++)
   {
      if(x==ara[i])
      {
         flag1=true;
         d=(i+1);
      }
      if(y==ara[i])
      {
         flag2=true;
         d1=(i+1);
      }
   }
   if(flag1 and flag2)
   {
      cout<<d<<" "<<d1;
   }
   else if(flag1 and flag2==false)
   {
      cout<<d;
   }
   else if(flag2 and flag1==false)
   {
      cout<<d1;
   }

}*/

/*//Searching
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n , nm_elm ;  //n=number of array , nm_elm=number of elements to be searched
   cin >> n >> nm_elm ;
   int ara[n];
   int search[nm_elm];  ///elements that are to be searched
   for(int i=0 ; i<n ; i++)
   {
      cin>>ara[i] ;
   }
   for(int i=0 ; i<nm_elm ; i++)
   {
      cin>>search[i];
   }
   for(int i=0 ; i<nm_elm ; i++)
   {
      int cnt=0 ;
      for(int j=0 ; j<n ; j++)
      {
         if(search[i]==ara[j])
         {
            cout<<search[i]<<" is found at "<<(j+1)<<" position"<<endl;
         }
         else
         {
            cnt++;
         }
      }
      if(cnt==n)
      {
         cout<<"Not found"<<endl;
      }
      }
   }

*/


//Merging two array in single array.
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n1;
   cin>>n1;
   int ara1[n1];
   int n2;
   cin>>n2;
   int ara2[n2];
   for(int i=0 ; i<n1 ; i++)
   {
      cin>>ara1[i];
   }
   for(int i=0 ; i<n2 ; i++)
   {
      cin>>ara2[i];
   }
   int merge[n1+n2];
   for(int i=0 ; i<n1 ; i++)
   {
      merge[i]=ara1[i];
   }
   for(int j=0 ; j<n2 ; j++)
   {
      merge[n1+j]=ara2[j];
   }
   for(int i=0 ; i<n1+n2 ; i++)
   {
      cout<<merge[i]<<" ";
   }



}*/


//Deleting specific elements
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int ara[n];
   int nm_Del;
   cin>>nm_Del;
   int Delete[nm_Del];
   for(int i=0 ; i<n ; i++)
   {
      cin>>ara[i];
   }
   for(int i=0 ; i<nm_Del ; i++)
   {
      cin>>Delete[i];
   }
   for(int i=0 ; i<nm_Del ; i++)
   {
      for(int j=0 ; j<n ; j++)
      {
         if(Delete[i]==ara[j])
         {
            ara[j]='\0';
         }
      }
   }
   for(int i=0 ; i<n ; i++)
   {
      if(ara[i]!='\0')
      cout<<ara[i]<<" ";
   }
}*/