// #include<stdio.h>
// #include<conio.h>
// int main()
// { int a[7]={1,2,3,45,6,7,8};
// for (int i = 0; i < 7; i++)
// {
//     printf("%d\n",a[i]);
// }
// printf("\n");
// for (int i = 6; i >=0; i--)
// {
//     printf("%d\n",a[i]);
// }
// }

// // }
// #include<stdio.h>
// #include<conio.h>
// int main (){
//     int a[10]={0};
//     int n,rem;
//     printf("enter a number:\n");
//     scanf("%d",&n);


//     while (n>0)
//     {
//         rem=n%10;
//         if (a[rem]==1)
//         {
//             break;
//         }
//         a[rem]=1;
//         n=n/10;
        
//     }
//     if (n>0)
//     {
//        printf("repeat a number:");

//     }
//     else{
//         printf("not a repeat umber");
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int n,rem;
//     int a[10]={0};
//     printf("enter a number:\n");
//     scanf("%d",&n);
//     while (n>0)
//     { rem=n%10;
//     if (a[rem]==1)
//     { break;
//         /* code */
//     }
//     a[rem]=1;
//     n=n%10;
//         /* code */
//     }
//     if (n>0)
//     { printf(" repeat");
//         /* code */
//     }
//     else{
//         printf("not repeat");
//     }
// }

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int a[]={45,5,5,5,4,5,1,52,52,4,4,5,45,12,4,5,2,45,456,2,68,4,248,2,56,46,2,56,256,24,612,569,1059,0,69,2655,52163,86,25,612,89,269,2,58,1328,60,28,615,86,05,6215,86,235,22,6,05};
//   printf("%d" ,( sizeof a/ sizeof a[0]));

// #include<stdio.h>
// #include<conio.h>
// int main(){
// int a[3][3];
// for (int i = 0; i < 3; i++)
// { for (int j = 0; j < 3; j++)
// {
// scanf("%d",&a[i][j]);
// }

  
// }
// for (int i = 0; i < 3; i++)
// {for (int j = 0; j < 3; j++)
// {
// printf("%d ",a[i][j]);
// }
//   printf("\n");
// }getch();
// }
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int a[3][3];
//     for (int i = 0; i <3; i++)
//     { for (int j = 0; j < 3; j++)
//     {
//         scanf("%d",&a[i][j]);
//     }
//     } for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("%d",a[i][j]);
//         }
//           printf("\n");
//     }
  

    
    
    
//    getch (); 
// }
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int a[5][5]={(8,6,5,5,2),
//     (4,8,17,7,1),
//     (7,8,5,8,18),
//     (5,82,5,17,17),
//     (28,51,8,8,2)};
//     int sum=0;
//     printf("row total:");
//     for (int  i = 0; i <5; i++)
//     {
//       for (int j = 0; j < 5; j++)
//       {sum+=a[i][j];
//       printf("%d",sum);
//       sum=0;
//       }}
//       printf("colum total");
//        for (int j = 0; j < 5; j++)
//        {
//         for (int i = 0; i < 5; i++)
//         {
//             sum+=a[i][j];
//             printf("%d",sum);
//             sum=0;
//         }
//        }
       
       
    
//     #include<stdio.h>
// #include<conio.h>
// int main(){
//   int a[3][3],b[3][3],mul[3][3];
//   printf("first matrix:");
//   for (int i = 0; i < 3; i++)
//   { for (int j = 0; j < 3; j++)
//   {
//     scanf("%d",&a[i][j]);
//   }

//   }
//    printf("second matrix:");
//   for (int i = 0; i < 3; i++)
//   { for (int j = 0; j < 3; j++)
//   {
//     scanf("%d",&b[i][j]);
//   }
  
   
//   }
//   for (int i = 0; i < 3; i++)
//   { for (int j = 0; j < 3; j++)
//   {
//    mul[i][j]=0;
//    for (int k = 0; k < 3; k++)
//    {
//     mul[i][j]+=a[i][k]*b[k][i];
    
//    }
   
//   }
  
   
//   }
//    printf("mult matrix:");
//   for (int i = 0; i < 3; i++)
//   {
//     for (int j = 0; j <3; j++)
//     {
//       printf("%d ",mul[i][j]);
//     }
//     printf("\n");
//   }
//   return 0;
// }
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int a,sum=0,rem;
//     printf("enter a number:");
//     scanf("%d",&a);
//     while (a!=0)
//     {  rem=a%10;
//         sum+=rem;
//         a=a/10;
       
//     }
//     printf("%d",sum);
// }

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     float price[3];
//     printf("enter a number:\n");
//     scanf("%f\n",&price[0]);
//     scanf("%f\n",&price[1]);
// scanf("%f\n",&price[2]);
// printf("total gst of price 1: %f\n",price[0]+(0.18*price[0]));
// printf("total gst of price 2: %f\n",price[1]+(price[1]*0.18));
// printf("total gst of price 3: %f\n",price[2]+(price[2]*0.18));
// return 0;
// }
// #include<stdio.h>
// #include<conio.h>
//  int main(){
//     int a[3][3],b[3][3],mul[3][3];
//     printf("enter first matrix\n");
//     for (int  i = 0; i < 3; i++)
//     {for (int  j = 0; j < 3; j++)
//     {
//        scanf("%d",&a[i][j]);
//     }
//     }
//     printf("enter second number\n");
//     for (int  i = 0; i < 3; i++)
//     {for (int  j = 0; j < 3; j++)
//     {
//        scanf("%d",&b[i][j]);
//     }
//     }
//     for (int  i = 0; i < 3; i++)
//     {for (int  j = 0; j < 3; j++)
//     {
//        mul[i][j]=0;
//        for (int  k = 0; k < 3; k++)
//        {
//        mul[i][j]=a[i][k]*b[k][j];
//        }
       
//     }
//     }
//     printf("mul of two matrix\n");
//     for (int  i = 0; i < 3; i++)
//     {for (int  j = 0; j < 3; j++)
//     {
//       printf("%d ",mul[i][j]);
//     } printf("\n");
//     }
//     return 0;
//  }
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[]={12,13};
  int *p[2];
  for (int i = 0; i <2; i++)
  {   
    p[i]=&a[i];
   
  }
  for (int  i = 0; i < 2; i++)
  {
    printf("%d\n",a[i]);
  }
  
  
}



