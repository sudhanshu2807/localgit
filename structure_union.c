/* Structure and Union
1. Array stores the homogeneous data i.e. all the data are of sametype.
2. Structure and Union stores heterogeneous data i.e. all data may be different.
3. Syntax for Structure  : struct
4. Syntax for Union      : union
5. Structure and Union are known as user-defined data types.
Difference between structure and union:
In memory, space is allocated in each element of structure isthe heighest as in the union
*/
#include<stdio.h>
#include<string.h>
// Decleraltion of user-defined data type
  struct student
  { 
    int roll_no;
    float percentage;
	char name[20];
  };
    union student1
    {
     int roll_no;
	 float percentage;
	 char name[20];	
    };
    
int main()    
{
	struct student s1;
	
	
	
	s1.roll_no = 5;
	s1.percentage = 75.5;
	strcpy(s1.name, "sudhanshu raj");
	
	printf("student's roll number = %d\n",s1.roll_no);
	printf("student's percentage = %0.2f\n",s1.percentage);
	printf("student's name = %s\n",s1.name);
	
	//code of union
	printf("\n___________output for union________________\n");
	union student1 u1;
	u1.roll_no = 5;
	u1.percentage = 75.5;
	strcpy(u1.name, "sudhanshu raj");
    
    
	
	printf("student's roll number = %d\n",u1.roll_no);
	printf("student's percentage = %0.2f\n",u1.percentage);
	printf("student's name = %s\n",u1.name);
	
	
	printf("\nthe size of structure = %d\n",sizeof (s1));
	printf("\nthe size of union = %d\n",sizeof (u1));
	
return 0;	
}    
  
