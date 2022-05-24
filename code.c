#include <stdio.h>
int main()
{
    int length,breadth,area,rate,total_money;
  
    printf("Enter the length and breadth :");
  
    scanf("%d %d",&length,&breadth);
  
    area=length*breadth;
  
    printf("Total area is : %d",area);
  
    printf("enter the rate per area:");
  
    scanf("%d",&rate);
  
    total_money=rate*area;
    
    printf("Total cost is : %d",total_money);
  
    return 0;
}
