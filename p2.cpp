#include <iostream>
#include <vector>


#define ITERATIONS 10

int main()
{
  int first=1;
  int second=2;
  int sum=first+second;
  int total=0;
  int iter=ITERATIONS-2; //first and second are already accounted for

  std::vector<int> even_numbers;
  even_numbers.push_back(second); //need to add the first even number to the vector

  for(int i=0;i<40;i++)
  {
   first=second;
   second=sum;
   sum=first+second; 

   if (sum % 2 == 0)
    even_numbers.push_back(sum);

   if (sum >= 4000000)
     break;
  }

  for (int i=0; i<even_numbers.size();i++)
    total+=even_numbers[i];

  std::cout << total << std::endl;
}
