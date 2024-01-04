#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, total=0, month, highestSales=0, maxSales=0;
    int salesCompanyA[13], salesCompanyB[13], salesCompanyC[13];
    int topMonthA=0, topMonthB=0, topMonthC=0;
    srand(time(NULL));
    
    // Generate random sales data for three companies for 12 months
    for(i=0; i<12; i++){
        salesCompanyA[i] = 10000 + rand() % 300000;
        salesCompanyB[i] = 10000 + rand() % 300000;
        salesCompanyC[i] = 10000 + rand() % 300000;
    }
    
    // Find the highest sales month for each company
    for(i=0; i<12; i++){
        if(salesCompanyA[topMonthA] < salesCompanyA[i])
            topMonthA = i;

        if(salesCompanyB[topMonthB] < salesCompanyB[i])
            topMonthB = i;

        if(salesCompanyC[topMonthC] < salesCompanyC[i])
            topMonthC = i;
    }

    // Find the company with the highest total sales
    for(i=0; i<12; i++){
        highestSales += salesCompanyA[i] + salesCompanyB[i] + salesCompanyC[i];
        
        if(salesCompanyA[i] > maxSales) maxSales = salesCompanyA[i];
        if(salesCompanyB[i] > maxSales) maxSales = salesCompanyB[i];
        if(salesCompanyC[i] > maxSales) maxSales = salesCompanyC[i];
    }

    printf("Total sales for all companies: %d\n", highestSales);
    printf("Highest monthly sales across all companies: %d\n", maxSales);

    // Input for a specific month and calculate total sales for that month
    printf("Enter the month number you want to check (1-12): ");
    scanf("%d", &month);
    month--;
    total = salesCompanyA[month] + salesCompanyB[month] + salesCompanyC[month];
    month++;
    printf("Total sales for all companies in month %d: %d\n", month, total);

    return 0;
}
