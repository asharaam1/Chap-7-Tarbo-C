/* ptrtemp.c */ 
/*averages arbiteary number of temperatures */
/* uses pointer notation */
//#include <stdio.h>
//
//int main()
//{
//   float temper [40];          /* array declaration */
//   float  sum=0.0;
//   int num,day=0;
//   
//   do                          /* put temps in array */ 
//{
//   printf("Enter temperature for day %d:", day);
//   scanf("%f", temper+day);
//} 
//while (*(temper+day++) > 0 ); /* lacks elegance */
//num = day-1;                  /* number of temps entered */
//for (day=0;day<num;day++)     /* calculate average */
//    sum += *(temper+day);
//    printf("Average is %.1f", sum/num);
//} 
   
//problem in above code


#include <stdio.h>

int main() {
    float temper[5];
    float sum = 0.0;
    int day = 0;

    while (day < 5) {
        printf("Enter temperature for day %d: ", day);
        scanf("%f", temper + day);

        if (*(temper + day) <= 0) {
            break;  // Stop if non-positive temperature is entered
        }

        day++;
    }

    if (day == 0) {
        printf("No valid temperatures entered.\n");
    } else {
        for (int i = 0; i < day; i++) {
            sum += *(temper + i);
        }
        printf("Average is %.1f\n", sum / day);
    }

    return 0;
}
   
   
//Code run in Dev-C++
