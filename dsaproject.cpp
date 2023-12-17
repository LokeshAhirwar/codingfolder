#include<iostream>
using namespace  std;
#include<stdlib.h>
bool z = true;
int choice;



void array();
void traversingArray();
void sortingarray();
cout<<"hello"<<endl;
void searchingarray();
void insertionarray();
void mergingarray();

int main()
{
    cout<<"Enter your choice. The options are given below"<<endl;
    // cout<<"*******************************************************************"<<endl;
    for(int i=1; i<18; i++)
    cout<<"$*#*";
    cout<<endl; 
    cout<<"**                   1 for ARRAY                                  **"<<endl;
    cout<<"**                   2 for Linked list                            **"<<endl;
    cout<<"**                   3 for STACK                                  **"<<endl;
    cout<<"**                   4 for QUEUE                                  **"<<endl;
    cout<<"**                   5 for TREE                                   **"<<endl;
    cout<<"**                   6 for GRAPH                                  **"<<endl;
    cout<<"**                   7 for HASHING                                **"<<endl;
    cout<<"**                   8 for SHORTING                               **"<<endl;
    cout<<"**                   9 for EXIT                                   **"<<endl;

    for(int i=1; i<18; i++)
    cout<<"$*#*";
    cout<<endl;
    cout<<endl;

    cout<<endl; 
    // int choicemain,i;
    int i;
   
   
    while(z==true)
    {
        cout<<"Enter the choice for starting "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
        array();
        break;

        case 2:
        // linked list();
        break;

        case 3:
        //stack();
        break;

        case 4:
        //queue();
        break;

        case 5:
        //tree();
        break;

        case 6:
        //graph();
        break;

        case 7:
        //hashing();
        break;

        case 8:
        //shorting();
        break;

        case 9:
        z = false;
        break;

        default:
        cout<<"invalid choice"<<endl;
        break;
        }

    }
    cout<<"the code has finished";

}
void array()
{
     bool x = true;
    for(int i=1; i<18; i++)
    cout<<"$*@*";
    cout<<endl; 
    cout<<"**                                                                **"<<endl;
    cout<<"**                        ARRAY                                   **"<<endl;
    cout<<"**                                                                **"<<endl;
    for(int i=1; i<18; i++)
    cout<<"$*@*";
    cout<<endl; 
    cout<<endl<<endl;

   
    cout<<"Enter your choice. The options are given below"<<endl;
    cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
    cout<<"&&&       1 for traversing or display          &&&"<<endl;
    cout<<"&&&       2 for SORTING OF ARRAY               &&&"<<endl;
    cout<<"&&&       3 for SEARCHING OF AN ELEMENT        &&&"<<endl;
    cout<<"&&&       4 for INSERTION OF AN ELEMENT        &&&"<<endl;
    cout<<"&&&       5 for DELETION OF AN ELEMENT         &&&"<<endl;
    cout<<"&&&       6 for MERGIN OF TWO ARRAYS           &&&"<<endl;
    cout<<"&&&       7 for exit                           &&&"<<endl;
    cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
   
    cout<<endl;
    cout<<endl;
    // int choicearray;
   
    while(x==true)
    {
        cout<<"enter the choice of operation on array"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
        traversingArray();
        break;
        
        case 2:
        sortingarray();
        break;

        case 3:
        searchingarray();
        break;

        case 4:
        insertionarray();
        break;

        case 5:
        //deletionarray();
        break;

        case 6:
        mergingarray();
        break;

        case 7:
        x = false;
        break;

        
        default:
        cout<<"Invalid Choice"<<endl;
            break;
        }
    }
}
void traversingArray()
{
    int ne,i;
    int arr[25];
   
    cout<<"ENTER THE NUMBER OF ARRAY ELEMENT "<<endl;
    cin>>ne;
    cout<<"enter the elements of aaray"<<endl;
    
    for(int i=0; i<ne; i++)
    {
        cin>>arr[i];
    }
    cout<<"the elements of array are"<<endl;
    for(int i=0; i<ne; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    
}
void sortingarray()
{
    int ne,i,j,temp;
    int arr[25],arr2[25];
   
    cout<<"ENTER THE NUMBER OF ARRAY ELEMENT "<<endl;
    cin>>ne;
    cout<<"enter the elements of aaray"<<endl;
    
    for(int i=0; i<ne; i++)
    {
        cin>>arr[i];
    }
    //Sorting of array
   for(i=0; i<ne-1; i++)
   {
    for(j=0; j<ne-i-1; j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1] = temp ; 
        }
    }
   }
    cout<<"the sorted array is given below"<<endl;
     for(int i=0; i<ne; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    

}
void searchingarray()
{
     int ne,i,j;
    int arr[25];
   
    cout<<"ENTER THE NUMBER OF ARRAY ELEMENT "<<endl;
    cin>>ne;
    cout<<"enter the elements of aaray"<<endl;
    
    for(int i=0; i<ne; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter the element to search"<<endl;
    cin>>j;
    for(i=0; i<ne; i++)
    {
        if(arr[i]==j)
        {
            
            cout<<"The element has found at index "<<i;
            break;
        }
        
    }
    cout<<endl;

}
void insertionarray()
{
    int ne,i;
    int insNo,location;
    //insNo = insertion number or integer
    //location = insertion index
    int arr[25];
   
    cout<<"ENTER THE NUMBER OF ARRAY ELEMENT "<<endl;
    cin>>ne;
    cout<<"enter the elements of aaray"<<endl;
    for(int i=0; i<ne; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the integer to insert"<<endl;
    cin>>insNo;
    cout<<"enter the index to insert the integer"<<endl;
    cin>>location;
   if(arr[ne]!=NULL)
   {
    cout<<"array is full; no Insertion is possible"<<endl;
   }
   else
   {
    i = ne;
    while (i>location)
    {
        arr[i]=arr[i-1];
        i = i-1;
    }
    arr[location]=insNo;
    
   }
}
void mergingarray()
{
    int sortedarray[50];
    int arr1[25],arr2[25],ne2,ne1,i;
     //ne = number of aaray elements
    
    cout<<"ENTER THE NUMBER OF ARRAY ELEMENT of first array"<<endl;
    cin>>ne1;
    cout<<"enter the elements of aaray"<<endl;
    
    for(i=0; i<ne1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter the number of elements in second array"<<endl;
    cin>>ne2;
    cout<<"enter the elements of  second array"<<endl;
    for(int i = 0 ; i<ne2; i++)
    {
        cin>>arr2[i];
    }
    i=0; 
    int i2=0,i3=0;
    while(i<ne1)
    {
        sortedarray[i] = arr1[i2];
        i++; i2++;
    }
    int ne3;
    ne3 = (ne1+ne2);
    while(i<ne3)
    {
        sortedarray[i] = arr2[i3];
        i++; i3++;
    }
   for(int j=0; j<i; j++)
   {
    cout<<sortedarray[j]<<"  ";
   }
   cout<<endl;
}
