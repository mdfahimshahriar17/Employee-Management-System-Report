#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//this is struct data type for build employee details array
    struct employeDetails{
    char name[30];
    int id;
    char nationality[20];
    char gender[7];
    int age;
    float rating;
    float salary;
    int present;
    }emp[50];

    int employeeSize=-1; // this data type we take for employeeID it will take employee ID autometic



void add_employe(); // this function add for employee
void employeeList(); //this function for watching employee list
void attendance(); // this function for taking employee attendance
void employeedetails(employeeID); //this function we can search employee through their employee ID
int saleryTaxcalculate(employeeID); //this function will count employee tax base on their salary
void noticeFile(); //this function for company notice. we can publish notice though our file

//company reg number function with ptr
void companyRegNO(char *arr) {  //this function we use to show company reg number. we had use here pointer type array
    printf("%s",arr);
}



// this is main function
int main()
{
    int pass=123; //to run do loop. after use this pass our program will be off. until using this pass our program will be run
    int run=0;
    char functionalities; // this is for switch case function

    //this array use for pointer
    char arr[] = {"\nReg.No: Fahim 1211205362"}; // this string we use as a our company reg number. we pass this string to function through pointer







    printf("----------------------------Cyber*IT*Farm----------------------------\n"); // it's our company name

    //we used do while to print our switch case fucntion
    do{

    printf("\n\n\nPress 1.Add Employee : ");
    printf("\nPress 2.Employee List: ");
    printf("\nPress 3.Employee Attendance: ");
    printf("\nPress 4.For employee full details: ");
    printf("\nPress 5.Notice Board: ");
    printf("\nPress 6.For watching company reg no: ");
    printf("\nPress 7.For Ending: \n");

    scanf(" %c",&functionalities);

    switch(functionalities){ // this switch case we used to use our all function

        case '1':
            employeeSize=employeeSize+1;
            add_employe();
            break;

        case '2':
            employeeList();
            break;

        case '3':
            attendance();

            break;

        case '4':
            printf("Enter Employee ID : ");
            int employeeID=1001;
            scanf("%d",&employeeID);
            employeedetails(employeeID);
            break;

        case '5':

            noticeFile();


            break;

        case '6':
            companyRegNO(arr);
            break;

        case '7':
            printf("\nEnter Password: ");
            scanf("%d",&run);
            printf("\n%d",run);
            break;

        default:
            printf("Invalid Choice");

            break;
    }

    }
    while(pass!=run);

}
void add_employe()
{
    //create new employee

    printf("---------------------------------------------Employe Details----------------------------------------------\n");

    emp[employeeSize].id=1001+employeeSize; //Employee Id auto generate

    printf("Enter Name: ");
    scanf("%s",emp[employeeSize].name);

    printf("Enter nationality: ");
    scanf("%s",emp[employeeSize].nationality);

    printf("Enter Gender: ");
    scanf("%s",emp[employeeSize].gender);

    printf("Enter your age: ");
    scanf("%d",&emp[employeeSize].age);

    printf("Enter Rating: ");
    scanf("%f",&emp[employeeSize].rating);

    printf("Enter Salary: ");
    scanf("%f",&emp[employeeSize].salary);

    printf("\n\nName: %s\nID: %d\nNatinality: %s\nSex: %s\nAge: %d\nRating: %.2f\nMonthly Salary %.2f\n\n",emp[employeeSize].name,emp[employeeSize].id,emp[employeeSize].nationality,emp[employeeSize].gender,emp[employeeSize].age,emp[employeeSize].rating,emp[employeeSize].salary);

}
void employeeList()
{
    if(employeeSize<0){
        printf("Empty List");
    }
    else{
            printf("\n--------------------Employee*List--------------------");
    int i=0;
    while(i<=employeeSize){
            printf("\nName: %s\nID: %d\nNatinality: %s\nSex: %s\nAge: %d\nRating: %.2f\nMonthly Salary %.2f\n\n",emp[i].name,emp[i].id,emp[i].nationality,emp[i].gender,emp[i].age,emp[i].rating,emp[i].salary);

        i++;
    }
    }



}
void attendance()
{
    int attandanceCounter;
    char presentVar;

    printf("\n\nEmployee Attendance \n\n");

    for(attandanceCounter=0;attandanceCounter<=employeeSize;attandanceCounter++)
    {
        printf("(%d) Name: %s\tID: %d For Present press P for Absent press any ",attandanceCounter+1,emp[attandanceCounter].name,emp[attandanceCounter].id);
        scanf(" %c",&presentVar);


        if(tolower(presentVar)!='p'){
            continue;

        }

        emp[attandanceCounter].present+=1;

    }

}
void employeedetails(employeeID)
{

    printf("\nName: %s\nID: %d\nNatin ality: %s\nSex: %s\nAge: %d\nRating: %.2f\nMonthly Salary %.2f\nPresent %d Days\n",emp[employeeID-1001].name,emp[employeeID-1001].id,emp[employeeID-1001].nationality,emp[employeeID-1001].gender,emp[employeeID-1001].age,emp[employeeID-1001].rating,emp[employeeID-1001].salary,emp[employeeID-1001].present);
    float taxAmount=saleryTaxcalculate(employeeID);

    printf("\nSalary without tax %.2f",emp[employeeID-1001].salary);
    printf("\nSalary with 6 Percent Gov Tax %.2f",(emp[employeeID-1001].salary) - taxAmount);

}
int saleryTaxcalculate(employeeID)
{

    float tax=(emp[employeeID-1001].salary/100*6);



    return tax;
}
void noticeFile()
{

    FILE *file;
    char ch;

    // Open the file in "r" (read) mode
    file = fopen("notice.txt", "r");


    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Read and print each character until the end of the file is reached
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(file);

    getch();
}
