
#include <iostream>
#include <stdlib.h>
#include<windows.h>

using namespace std;
  

int main()
{
    
 
    int hour, min, sec;
    cout<< "*Enter Current time*\n";
  
    
    cout << "hr- ";
    cin >> hour;
    cout << "min- ";
    cin >> min;
    cout << "sec- ";
    cin >> sec;
  
    if (hour > 23) 
	{
        cout << "Wrong Time input";
    }
    else if (min > 60)
    {
        cout << "Wrong Time Input";
    }
    else if (sec > 60) 
	{
        cout << "Wrong Time Input";
    }
  
  
    else 
	{
        while (1) //while the condition is true......
  
       
        {
            system("cls");
  
          
  
          
            for (hour; hour < 24; hour++) //24 hour system_
			{
  
                for (min; min < 60; min++) 
				{
  
                    for (sec; sec < 60; sec++) 
					{
                        system("cls");//clear the screen 
  
                        cout << "\n\n\n\n";
						cout<<" Your Current Time = "<< hour << ":" << min << ":"<< sec << "\tHrs";
  
                        Sleep(1000);
  
                        // Pause for 1 sec
                    }
                    sec = 0;
                }
                min = 0;
            }
        }
    }
}
