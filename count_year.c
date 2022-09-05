#include <stdio.h>

int main()
{
    int year;
    int month;
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    while(scanf("%d %d",&year, &month) != EOF){
        int day = days[month-1];
        //≈–∂œ»ÚƒÍ
        if((year%4 == 0 && year%100 != 0) || (year%400 == 0)){
            if(month == 2){
                day++;
            }
        }
        printf("%d\n",day);
    }
}