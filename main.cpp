#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

int stuffedAnimals(int);
int waterPistol(int);
int popRocks(int);
int jewelry(int);
int done(int);


int main(int argc, char *argv[])
{
    int coupons, remainder;
    char menu;
    
    
   cout << "How many coupons does the customer have?";
   cin >> coupons;
   if (coupons <= 0)
   {
       cout << "Please input a valid coupon number."<<endl;
       cin >> coupons;
       }
   
 
   system("cls");
   while (coupons >0)
   {
   cout << "----------------------------------------------------"<<endl;
   cout << "The customer has " << coupons <<" coupons to redeem."<< endl;
   cout << "----------------------------------------------------"<<endl;
   
   cout << "\tType 'S' for Stuffed Animals"<<endl;
   cout << "\tType 'W' for Water Pistol"<<endl;
   cout << "\tType 'P' for Pop Rocks"<<endl;
   cout << "\tType 'J' for Jewelry"<<endl;
   cout << "\tType 'D' for Done"<<endl<<endl;
   
   cin >> menu;
   

       if (menu == 'S')
   {
            coupons = stuffedAnimals(coupons);
            }
   else if (menu == 'W')
   {
        coupons = waterPistol(coupons);
        }
   else if (menu == 'P')
   {
        coupons = popRocks(coupons);
        }
   else if (menu == 'J')
   {
        coupons = jewelry(coupons);
        }
   else if (menu =='D')
   {
        coupons = done(coupons);
        break;
        }
        
}    
        
        
    system("PAUSE");
    return EXIT_SUCCESS;
}

int stuffedAnimals(int coupons)
{
    char choice;
    cout << "Ask the customer if they would like a small, medium, or large stuffed animal?"<<endl;
    cout << "\tEnter 'A' for small (200 coupons)\n\tEnter 'B' for medium (300 coupons)\n\tEnter 'C' for large (400 coupons)"<<endl;
    cin >> choice;
    if (choice == 'A')
    {
               if (coupons >= 200)
               {
                           coupons -= 200;
                           cout <<"Coupons have been subtracted! Please give the customer their prize!"<<endl<<endl;;
                           return coupons; 
               }
               else if (coupons < 200)
               {
                    cout <<"Not enough coupons! Returning you to the menu."<<endl<<endl;
                    return coupons;
               }
    }
    else if (choice == 'B')
    {
         if (coupons >= 300)
               {
                           coupons -= 300;
                           cout <<"Coupons have been subtracted! Please give the customer their prize!"<<endl<<endl;
                           return coupons; 
               }
         else if (coupons < 300)
               {
                    cout <<"Not enough coupons! Returning you to the menu."<<endl<<endl;
                    return coupons;
               }

    }
    else if (choice == 'C')
    {
         if (coupons >= 400)
               {
                           coupons -= 400;
                           cout <<"Coupons have been subtracted! Please give the customer their prize!"<<endl<<endl;
                           return coupons; 
               }
         else if (coupons < 400)
               {
                    cout <<"Not enough coupons! Returning you to the menu."<<endl<<endl;
                    return coupons;
               }
    }
}

int waterPistol(int coupons)
{
    char choice;
    cout <<"Ask the customer if they would like a pistol or shotgun."<<endl;
    cout <<"\tEnter 'A' for pistol (75 coupons)\n\tEnter 'B' for shotgun (150 coupons)"<<endl;
    cin >> choice;
    if (choice == 'A')
    {
               if (coupons >= 75)
               {
                           coupons -= 75;
                           cout <<"Coupons have been subtracted! Please give the customer their prize!"<<endl<<endl;
                           return coupons;
                           }
               else if (coupons < 75)
               {
                    cout <<"Not enough coupons! Returning you to the menu."<<endl<<endl;
                    return coupons;
                    }
   }
   else if (choice == 'B')
   {
        if (coupons >= 150)
        {
                    coupons -= 150;
                    cout <<"Coupons have been subtracted! Please give the customer their prize!"<<endl<<endl;
                    return coupons;
                    }
        else if (coupons < 150)
        {
             cout <<"Not enough coupons! Returning you to the menu."<<endl<<endl;
             return coupons;
             }
   }
}

int popRocks(int coupons)
{
    if (coupons >= 35)
        {
                    coupons -= 35;
                    cout <<"Coupons have been subtracted! Please give the customer their prize!"<<endl<<endl;
                    return coupons;
                    }
        else if (coupons < 35)
        {
             cout <<"Not enough coupons! Returning you to the menu."<<endl<<endl;
             return coupons;
             }
}

int jewelry(int coupons)
{
    if (coupons >= 15)
        {
                    coupons -= 15;
                    cout <<"Coupons have been subtracted! Please give the customer their prize!"<<endl<<endl;
                    return coupons;
                    }
        else if (coupons < 15)
        {
             cout <<"Not enough coupons! Returning you to the menu."<<endl<<endl;
             return coupons;
             }
}

int done(int coupons)
{
    cout <<"Tell the customer that they have "<<coupons<< " coupons remaining!"<<endl;
    return coupons;
}

                    
    
    
