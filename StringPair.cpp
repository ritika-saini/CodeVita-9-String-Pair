#include <bits/stdc++.h> 
using namespace std; 
  

	 const char* numbers[101] = {"zero", "one", "two","three","four","five", "six", "seven", "eight",
                         "nine",  "ten", "eleven", "twelve", "thirteen",  "fourteen", "fifteen", 
                         "sixteen",  "seventeen", "eighteen", "nineteen", "twenty", "twentyone", 
                         "twentytwo",  "twentythree",  "twentyfour",  "twentyfive", "twentysix", 
                         "twentyseven",  "twentyeight",  "twentynine",  "thirty",  "thirtyone", 
                         "thirtytwo",  "thirtythree",  "thirtyfour",  "thirtyfive", "thirtysix", 
                         "thirtyseven", "thirtyeight",  "thirtynine",  "forty",  "fortyone", 
                         "fortytwo",  "fortythree",  "fortyfour", "fortyfive",  "fortysix", 
                         "fortyseven",  "fortyeight",  "fortynine",  "fifty",  "fiftyone", 
                         "fiftytwo",  "fiftythree",  "fiftyfour",  "fiftyfive",  "fiftysix", 
                         "fiftyseven",  "fiftyeight", "fiftynine",  "sixty", "sixtyone", 
                         "sixtytwo",  "sixtythree",  "sixtyfour", "sixtyfive", "sixtysix", 
                         "sixtyseven", "sixtyeight",  "sixtynine",  "seventy",  "seventyone", 
                         "seventytwo",  "seventythree",  "seventyfour", "seventyfive","seventysix", 
                         "seventyseven",  "seventyeight",  "seventynine",  "eighty",  "eightyone", 
                         "eightytwo",  "eightythree",  "eightyfour",  "eightyfive",  "eightysix", 
                         "eightyseven", "eightyeight",  "eightynine",  "ninety", "ninetyone", 
                         "ninetytwo",  "ninetythree",  "ninetyfour",  "ninetyfive", "ninetysix", 
                         "ninetyseven",  "ninetyeight",  "ninetynine",  "hundred"};
  
 char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
 int sum=0;
 int pairs=0;
  
int main() 
{ 
	
  
  	int n;
  	cin>>n;
  	int a[n];
  	int findvowels(int w);
  	int calculatepairs(int arr[],int size);
   
 
  	
  	
  for(int i=0; i<n; i++)
  {
   cin>>a[i];
   findvowels(a[i]);
  }
  
 
  calculatepairs(a,n);
  cout<<numbers[pairs]<<"\n";
  
  
  
  return 0;
}

 int findvowels(int x)
  {
    int count=0;
    const char* num=numbers[x];
    
    for (int z = 0; num[z]!='\0'; ++z)
    {	
      	for(int y=0;y<5;y++)
      {
          if(num[z]==vowels[y]){
            count++;
          }
      }
    }
    sum=sum+count;
    return 0;
  }
  
 
 int calculatepairs(int arr[],int size)
  {
      for(int m=0;m<size;m++)
      {
            for(int p=0;p<size;p++)
            {
                if(arr[m]+arr[p]==sum)
                {
                    pairs++;
                }
            }
      }
    pairs=pairs/2;
    return 0;
  }
  

