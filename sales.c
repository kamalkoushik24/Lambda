#include <stdio.h>

float sales[7];


int max(float arr[7]);
int min(float arr[7]);
float avg(float arr[7]);
void printDay(int day);


int main(void){

    for (int i = 0; i < 7; i++){
        printf("Sales Day %d : ", i + 1);
        scanf("%f", &sales[i]);
    }
    
    int option = 0;

    while (option != 4)
    {
       
    printf("-----------------------------\n");
    
    printf("1) Max Volume\n");
    printf("2) Min Volume\n");
    printf("3) Average\n");
    printf("4) Exit\n");
    
    printf("Select any One of the Options:  \n--------------------------------\n");

    scanf("%d", &option);
    int maxind = max(sales);
    int minind = min(sales);
    float average = avg(sales);

    switch (option)
    {
    case (1):
        printf("Max Sales Volume: %.2f\n", sales[maxind]);
        printDay(maxind);
        break;
    
    case (2):
        printf("Minimum Sales Volume: %.2f\n", sales[minind]);
        printDay(minind);
        break;

    case (3):
        printf("Average Sales Volume: %.2f\n", average);
        break;

    case (4):
        printf("Thank You!!\n");
    }
    
    }
    
}
int max(float arr[7]){
    int maxind = 0;
    int max = 0;
    for (int i = 0; i < 7; ++i){
        if(arr[i] > max){
            max=arr[i];
            maxind = i;
        }
        else{
            continue;
        }
    }
    return maxind;
}
int min(float arr[7]){
    int minind = 0;
    int min = 0;
    for (int i = 0; i < 7; ++i){
        if(arr[i] > min){
            min=arr[i];
            minind = i;
        }
        else{
            continue;
        }
    }
    return minind;
}

float avg(float arr[7]){
    float sum = 0;
    for (int i = 0; i < 7; i++){
        sum += arr[i];
    }
    return (sum/7);
}

void printDay(int day){
    if(day == 0){
        printf("Sunday\n");
    }
    if(day == 1){
        printf("Monday\n");
    }
    if(day == 2){
        printf("Tuesday\n");
    }
    if(day == 3){
        printf("Wednesday\n");
    }
    if(day == 4){
        printf("Thursday\n");
    }
    if(day == 5){
        printf("Friday\n");
    }
    if(day == 6){
        printf("Saturday\n");
    }
}
