Employee Management System (C Programming)

A console-based Employee Management System that manages employees, attendance, and company records using structures, arrays, functions, pointers and file handling in C.

Lecturer: Farhah Amaliya Binti Zaharuddin  
Course: DCP5101 – Program Design  
Group: 22  
Program Type: Management

Group Members:

- Md Fahim Shahriar (1211205362)
- Shad Md Rakib Bin (1211206291)

Objective:
This program is designed to store and manage employee information such as name, ID, nationality, gender, age, rating, salary, and attendance using structures. It allows adding employees, viewing lists, marking attendance, checking full details, showing company notices, displaying company registration number, and exiting with password.

Key Features:

1. Add Employees – Inputs employee details, auto-generates ID, stores in struct array.
2. Employee List – Displays list of all employees with basic details.
3. Attendance System – Mark P for present or other for absent; increments attendance.
4. View Employee Details – Search by ID, view salary before and after 6% tax.
5. Notice Board – Reads notices from notice.txt (file handling).
6. Company Registration No – Uses pointers to print stored registration number.
7. Secure Exit – Requires password (123) to close program.

Program Design (Input, Process, Output):
Input: User selects menu options & enters data.  
Process: Data stored in struct array, loops and conditions used for operations, file opened to read notices.  
Output: Shows employee info, attendance, company notices, etc. on console.

Concepts Used:

- Struct, Arrays, Pointers
- File Handling (notice.txt)
- if/else, switch case, loops (for/while/do-while)
- Functions, Arithmetic Expressions
- Basic error messages for file errors

User Manual:
Option 1 → Add Employee  
Option 2 → Show Employee List  
Option 3 → Mark Attendance  
Option 4 → Search by ID & View Full Details  
Option 5 → Show Company Notice  
Option 6 → Show Company Registration No  
Option 7 → Exit (Password = 123)

Sample Console Output:
----------------Cyber*IT*Farm----------------

1. Add Employee
2. Employee List
3. Employee Attendance
4. Employee Details
5. Notice Board
6. Company Reg No.
7. Exit

Example Result:
Name: Fahim | ID: 1001 | Salary: 5000
Salary with 6% tax: 4700
Attendance: P

Areas of Improvement:

- Input validation needed for wrong inputs
- Add writing ability for notice.txt
- More error messages when file missing or wrong choice

Reference:

- Based on assignment report (Employee Management System) DCP5101
- https://www.programiz.com/c-programming/c-file-input-output

Author:
Md Fahim Shahriar
ID: 1211205362
Multi Media University (Cyberjaya, Malaysia)
Language: C Programming

If you found this helpful, please give a ⭐ on GitHub.
