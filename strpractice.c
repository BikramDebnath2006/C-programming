#include<stdio.h>
#include<string.h>
 struct address
{
    int housenumber;
    int block;
    char city[100];
    char state[200];
};
void  printstructurearray(struct address add);

int main()
{
  struct address add[100];
  printf("enter details for 1st person");
  scanf("%d\n",&add[0].housenumber);
  scanf("%d\n",&add[0].block);
  scanf("%s\n",add[0].city);
  scanf("%s",add[0].state);
  printf("enter details for 2nd person");
  scanf("%d\n",&add[1].housenumber);
  scanf("%d\n",&add[1].block);
  scanf("%s\n",add[1].city);
  scanf("%s",add[1].state);
  printf("enter details for 3rd person");
  scanf("%d\n",&add[2].housenumber);
  scanf("%d\n",&add[2].block);
  scanf("%s\n",add[2].city);
  scanf("%s",add[2].state);
  printf("enter details for 4th person");
  scanf("%d\n",&add[3].housenumber);
  scanf("%d\n",&add[3].block);
  scanf("%s\n",add[3].city);
  scanf("%s",add[3].state);
  printf("enter details for 5th person");
  scanf("%d\n",&add[4].housenumber);
  scanf("%d\n",&add[4].block);
  scanf("%s\n",add[4].city);
  scanf("%s",add[4].state);
  for (int i = 0; i < 5; i++)
  {
    printstructurearray(add[i]);
  }
  
  
  return 0;
}
  void printstructurearray(struct address add)
{
  printf("%d %d %s %s ",add.housenumber,add.block,add.city,add.state);
}