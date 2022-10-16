#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   ofstream file;


   file.open("c:/file/abc.txt");

   if(!file)
   {
       cout<<"Error in creating file!!!";
       return 0;
   }
   else
    {

   cout<<"File created successfully.";
   }


   file.close();

   return 0;
}

