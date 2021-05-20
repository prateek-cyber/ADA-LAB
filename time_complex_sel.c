#include<stdio.h>
#include<time.h>
#include<stdlib.h>


long CLK_TCK;
int MAXINT;
void delay(int n){
    for(int i = 0;i<n;i++){}
}
void selection(int *a,int n)
{
    delay(1000);
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        int min=i;
	for(j=i+1;j<n;j++)
	 {
	    if(a[j]<min)
	     {
	        min=j;
	       }
	    }

            temp=a[i];a[i]=a[j];a[j]=temp;
          }
     }


   int main()
   {
     FILE *fp;
     clock_t  c1,c2;
     int i,datasize=1;
     long int n=1000;
      int *a;
      fp=fopen("values.dat","w+");
      if(fp==NULL)
      {
	printf("cannot open file");
	 exit(1);
       }
       while(datasize<=10)
       {
	 a=(int *)calloc(n,sizeof(int));
	 if(a==NULL)
	 {
	    printf("INSUFFICIENT MEMORY\n");
	    exit(1);
	   }
	   random();
	   for(i=0;i<=n-1;i++) a[i]=rand() % MAXINT;
	   c1=clock();
	   selection(a,n);
	   c2=clock();
	   free(a);
	   if((c2 -c1) != 0)
	   {
           clock_t x = c2-c1; 
	    fprintf(fp,"%lu\t%f\n",(x)/CLK_TCK);
	    datasize++;
	   }
	   n=n+1000;
	  }
	  fclose(fp);
	  }
