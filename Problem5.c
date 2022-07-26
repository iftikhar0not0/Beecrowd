 #include<stdio.h>
int main ()
{
    float x,y,z,sum,avrg;
    printf("Enter the mark of sub1:");
    scanf("%f",&x);
    printf("Enter the value of sub2:");
    scanf("%f",&y);
    printf("Enter the value of sub3:");
    scanf("%f",&z);
    sum=x+y+z;
    avrg=sum/3;
    printf("Total mark: %.2f\n",sum);
    printf("Average mark: %.2f\n",avrg);
    return 0;
}
