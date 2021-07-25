/*Finding the first and last occurance of an number using reccursion this is done by assuming the array to be first indexed (as per user)*/
#include<stdio.h>

int findlast(int *a,int n,int key)//This function finds the last occurance of the number
{
    if(n<0)//n is used as a index
    {
        return 0;//this is the base condition given for the array when itt goes out of bound
    }

    if(a[n]==key)//This line checks weather the number is present in that index or not

    {
        return n+1;//returs if it presents

    }

    else{
        return findlast(a,n-1,key);//if not presents then it recalls itself for furthre checking

    }
}

int findfirst(int *a,int idx,int n,int key)//this function checkes the first occurance of the number using same logic !!!!!!ulta sooch ke!!!!!

{
    
    if(idx>n)//the index from which the search to be done usually from 0
    {
        return 0;//this is given for the base condition for the array if it goes out of bound

    }

    if(a[idx]==key)//checking for the case weather it present or not
    {
        return idx+1;//returning the index + 1 if it present '+ 1' is done as we took the array to be 1 indexing 

    }

    else{
        return findfirst(a,idx+1,n,key);//if the key our target does not present then it recalls itself for further checking

    }
}


void occ(int *a,int n,int key)//this function prints the first and last occurance of the key our target

{
        printf("First occured %d and last occured in %d",findfirst(a,0,n,key),findlast(a,n,key));
}

int main()//this is the main function first call by the stack;

{
    int a[] = {1,2,2,3,2,4};//the array is created here

    occ(a,5,2);//the function which prints the first and last occurance is called
    
}