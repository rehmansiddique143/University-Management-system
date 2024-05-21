// university managment system
#include <iostream>
#include <string>
using namespace std;
class Faculities
{
public:
	string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20], arr6[20];
	int total = 0;

	void Enter()
	{

		int choice;
		cout << "\tHow many  Faculities do you enter\t:\t";
		cin >> choice;
		if (total == 0)
		{
			total = total + choice;
			for (int i = 0; i < choice; i++)
			{
				cout << "\tAdd the Faculties Details \n"
				     << i + 1 << endl;
				cout << "\t Facultie ID\t:\t";
				cin >> arr1[i];
				cout << "\tFacultie Teacher ID\t:\t";
				cin >> arr2[i];
				cout << "\tFacultie Name\t:\t";
				cin >> arr3[i];
				cout << "\tFacultie Room\t:\t";
				cin >> arr4[i];
				cout << "\tFacultie Type\t:\t  ";
				cin >> arr5[i];
				cout << "\tFacultie Description\t:\t";
				cin >> arr6[i];
			}
		}
		else
		{
			for (int i = total; i < total + choice; i++)
			{
				cout << "\tAdd the Faculties Details \n"
				     << i + 1 << endl;
				cout << "\t Facultie ID\t:\t";
				cin >> arr1[i];
				cout << "\tFacultie Teacher ID\t:\t";
				cin >> arr2[i];
				cout << "\tFacultie Name\t:\t";
				cin >> arr3[i];
				cout << "\tFacultie Room\t:\t";
				cin >> arr4[i];
				cout << "\tFacultie Type\t:\t  ";
				cin >> arr5[i];
				cout << "\tFacultie Description\t:\t";
				cin >> arr6[i];
			}
			total = total + choice;
		}
		cout << "\n\n";
	}
	void Show()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			for (int i = 0; i < total; i++)
			{
				cout << "Data of Facultie  : " << i + 1 << endl
				     << endl;
				cout << "\tFacultie ID : " << arr1[i] << endl;
				cout << "\tFacultie Teacher ID  : " << arr2[i] << endl;
				cout << "\tFacultie  Name : " << arr3[i] << endl;
				cout << "\tFacultie Rom : " << arr4[i] << endl;
				cout << "\tFacultie Type : " << arr5[i] << endl;
				cout << "\tFacultie Description : " << arr6[i] << endl;
			}
		}
		cout << "\n\n";
	}
	void Search()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			string rollno;
			cout << "\tEnter Facultie ID you want to search data : ";
			cin >> rollno;
			for (int i = 0; i < total; i++)
			{
				if (rollno == arr1[i])
				{
					cout << "Data of Facultie  : " << i + 1 << endl
					     << endl;
					cout << "\tFacultie ID : " << arr1[i] << endl;
					cout << "\tFacultie Teacher ID  : " << arr2[i] << endl;
					cout << "\tFacultie  Name : " << arr3[i] << endl;
					cout << "\tFacultie Rom : " << arr4[i] << endl;
					cout << "\tFacultie Type : " << arr5[i] << endl;
					cout << "\tFacultie Description : " << arr6[i] << endl;
				}
			}
		}
		cout << "\n\n";
	}
	void Update()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			string rollno;
			cout << "\tEnter Facultie ID you want to update data : ";
			cin >> rollno;
			for (int i = 0; i < total; i++)
			{
				if (rollno == arr1[i])
				{
					cout << "Data of Facultie  : " << i + 1 << endl
					     << endl;
					cout << "\tFacultie ID : " << arr1[i] << endl;
					cout << "\tFacultie Teacher ID  : " << arr2[i] << endl;
					cout << "\tFacultie  Name : " << arr3[i] << endl;
					cout << "\tFacultie Room No : " << arr4[i] << endl;
					cout << "\tFacultie Type : " << arr5[i] << endl;
					cout << "\tFacultie Description : " << arr6[i] << endl;
					cout << "\tEnter new Data \n\n";
					cout << "\t Facultie ID\t:\t";
					cin >> arr1[i];
					cout << "\tFacultie Teacher ID\t:\t";
					cin >> arr2[i];
					cout << "\tFacultie Name\t:\t";
					cin >> arr3[i];
					cout << "\tFacultie Room\t:\t";
					cin >> arr4[i];
					cout << "\tFacultie Type\t:\t  ";
					cin >> arr5[i];
					cout << "\tFacultie Description\t:\t";
					cin >> arr6[i];
				}
			}
		}
		cout << "\n\n";
	}
	void Delete_record()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			int a;
			cout << "\tPress 1 Delete full Record \n";
			cout << "\tPress 2 Specfic Record \n";
			cin >> a;
			if (a == 1)
			{
				total = 0;
				cout << "\tAll Record Deleted\n";
			}
			else
			{
				string rollno;
				cout << "\tEnter  Facultie ID you want to Delete Details\n";
				cin >> rollno;
				for (int i = 0; i < total; i++)
				{
					if (rollno == arr1[i])
					{
						for (int j = i; j < total; j++)
						{
							arr1[j] = arr1[j + 1];
							arr2[j] = arr2[j + 1];
							arr3[j] = arr3[j + 1];
							arr4[j] = arr4[j + 1];
							arr5[j] = arr5[j + 1];
							arr6[j] = arr6[j + 1];
						}
						total--;
						cout << "\tYour Required Record is Deleted!!!!!\n";
					}
				}
			}
		}
		cout << "\n\n";
	}
};
class User
{
public:
	string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20], arr6[20];
	int total = 0;

	void Enter()
	{

		int choice;
		cout << "\t Enter NO.  of Uers\t:\t";
		cin >> choice;
		if (total == 0)
		{
			total = total + choice;
			for (int i = 0; i < choice; i++)
			{
				cout << "\tAdd the  User Details \n"
				     << i + 1 << endl;
				cout << "\tUser ID\t:\t";
				cin >> arr1[i];
				cout << "\tUser Role\t:\t";
				cin >> arr2[i];
				cout << "\tUser Name\t:\t";
				cin >> arr3[i];
				cout << "\tUser Email\t:\t";
				cin >> arr4[i];
				cout << "\t User Date of brith\t:\t  ";
				cin >> arr5[i];
				cout << "\tUser Address\t:\t";
				cin >> arr6[i];
			}
		}
		else
		{
			for (int i = total; i < total + choice; i++)
			{
				cout << "\tAdd the  User Details \n"
				     << i + 1 << endl;
				cout << "\tUser ID\t:\t";
				cin >> arr1[i];
				cout << "\tUser Role\t:\t";
				cin >> arr2[i];
				cout << "\tUser Name\t:\t";
				cin >> arr3[i];
				cout << "\tUser Email\t:\t";
				cin >> arr4[i];
				cout << "\t User Date of Brith\t:\t  ";
				cin >> arr5[i];
				cout << "\tUser Address\t:\t";
				cin >> arr6[i];
			}
			total = total + choice;
		}
		cout << "\n\n";
	}
	void Show()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			for (int i = 0; i < total; i++)
			{
				cout << "Data of  User : " << i + 1 << endl
				     << endl;
				cout << "\tUser ID : " << arr1[i] << endl;
				cout << "\tUser Role : " << arr2[i] << endl;
				cout << "\tUser Name  : " << arr3[i] << endl;
				cout << "\tUser Email : " << arr4[i] << endl;
				cout << "\tUser Date of Brith : " << arr5[i] << endl;
				cout << "\tUser Address : " << arr6[i] << endl;
			}
		}
		cout << "\n\n";
	}
	void Search()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			string rollno;
			cout << "\tEnter User ID : ";
			cin >> rollno;
			for (int i = 0; i < total; i++)
			{
				if (rollno == arr1[i])
				{
					cout << "Data of  User : " << i + 1 << endl
					     << endl;
					cout << "\tUser ID : " << arr1[i] << endl;
					cout << "\tUser Role : " << arr2[i] << endl;
					cout << "\tUser Name  : " << arr3[i] << endl;
					cout << "\tUser Email : " << arr4[i] << endl;
					cout << "\tUser Date of Brith : " << arr5[i] << endl;
					cout << "\tUser Address : " << arr6[i] << endl;
				}
			}
		}
		cout << "\n\n";
	}
	void Update()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			string rollno;
			cout << "\tEnter  User ID : ";
			cin >> rollno;
			for (int i = 0; i < total; i++)
			{
				if (rollno == arr1[i])
				{
					cout << "Data of  User : " << i + 1 << endl
					     << endl;
					cout << "\tUser ID : " << arr1[i] << endl;
					cout << "\tUser Role : " << arr2[i] << endl;
					cout << "\tUser Name  : " << arr3[i] << endl;
					cout << "\tUser Email : " << arr4[i] << endl;
					cout << "\tUser Date of Brith : " << arr5[i] << endl;
					cout << "\tUser Address : " << arr6[i] << endl;
					cout << "\tEnter new Data \n\n";
					cout << "\tUser ID\t:\t";
					cin >> arr1[i];
					cout << "\tUser Role\t:\t";
					cin >> arr2[i];
					cout << "\tUser Name\t:\t";
					cin >> arr3[i];
					cout << "\tUser Email\t:\t";
					cin >> arr4[i];
					cout << "\t User Date oof brith\t:\t  ";
					cin >> arr5[i];
					cout << "\tUser Address\t:\t";
					cin >> arr6[i];
				}
			}
		}
		cout << "\n\n";
	}
	void Delete_record()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			int a;
			cout << "\tPress 1 Delete full Record \n";
			cout << "\tPress 2 Specfic Record \n";
			cin >> a;
			if (a == 1)
			{
				total = 0;
				cout << "\tAll Record Deleted\n";
			}
			else
			{
				string rollno;
				cout << "\tEnter User ID you want to Delete Details\n";
				cin >> rollno;
				for (int i = 0; i < total; i++)
				{
					if (rollno == arr1[i])
					{
						for (int j = i; j < total; j++)
						{
							arr1[j] = arr1[j + 1];
							arr2[j] = arr2[j + 1];
							arr3[j] = arr3[j + 1];
							arr4[j] = arr4[j + 1];
							arr5[j] = arr5[j + 1];
							arr6[j] = arr6[j + 1];
						}
						total--;
						cout << "\tYour Required Record is Deleted!!!!!\n";
					}
				}
			}
		}
		cout << "\n\n";
	}
};
class Courses
{
public:
	string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20], arr6[20];
	int total = 0;

	void Enter()
	{

		int choice;
		cout << "\tEnter the number of Course \t:\t";
		cin >> choice;
		if (total == 0)
		{
			total = total + choice;
			for (int i = 0; i < choice; i++)
			{
				cout << "\tAdd the Course Details \n"
				     << i + 1 << endl;
				cout << "\tCourse ID\t:\t";
				cin >> arr1[i];
				cout << "\tCourse Name\t:\t";
				cin >> arr2[i];
				cout << "\tCourse Type\t:\t";
				cin >> arr3[i];
				cout << "\tCourse Description\t:\t";
				cin >> arr4[i];
				cout << "\tCourse Year\t:\t  ";
				cin >> arr5[i];
				cout << "\tCourse Student ID\t:\t";
				cin >> arr6[i];
			}
		}
		else
		{
			for (int i = total; i < total + choice; i++)
			{
				cout << "\tAdd the Course Details \n"
				     << i + 1 << endl;
				cout << "\tCourse ID\t:\t";
				cin >> arr1[i];
				cout << "\tCourse Name\t:\t";
				cin >> arr2[i];
				cout << "\tCourse Type\t:\t";
				cin >> arr3[i];
				cout << "\tCourse Description\t:\t";
				cin >> arr4[i];
				cout << "\tCourse Year\t:\t  ";
				cin >> arr5[i];
				cout << "\tCourse Student ID\t:\t";
				cin >> arr6[i];
			}
			total = total + choice;
		}
		cout << "\n\n";
	}
	void Show()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			for (int i = 0; i < total; i++)
			{
				cout << "Course Details  : " << i + 1 << endl
				     << endl;
				cout << "\tCourse ID : " << arr1[i] << endl;
				cout << "\tCourse Name : " << arr2[i] << endl;
				cout << "\tCourse Type  : " << arr3[i] << endl;
				cout << "\tCourse Description : " << arr4[i] << endl;
				cout << "\tCourse Year : " << arr5[i] << endl;
				cout << "\tCourse Student ID : " << arr6[i] << endl;
			}
		}
		cout << "\n\n";
	}
	void Search()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			string rollno;
			cout << "\tEnter Course ID you want update : ";
			cin >> rollno;
			for (int i = 0; i < total; i++)
			{
				if (rollno == arr1[i])
				{
					cout << "Course Details  : " << i + 1 << endl
					     << endl;
					cout << "\tCourse ID : " << arr1[i] << endl;
					cout << "\tCourse Name : " << arr2[i] << endl;
					cout << "\tCourse Type  : " << arr3[i] << endl;
					cout << "\tCourse Description : " << arr4[i] << endl;
					cout << "\tCourse Year : " << arr5[i] << endl;
					cout << "\tCourse Student ID : " << arr6[i] << endl;
				}
			}
		}
		cout << "\n\n";
	}
	void Update()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			string rollno;
			cout << "\tEnter Course ID you want update : ";
			cin >> rollno;
			for (int i = 0; i < total; i++)
			{
				if (rollno == arr1[i])
				{
					cout << "Course Details  : " << i + 1 << endl
					     << endl;
					cout << "\tCourse ID : " << arr1[i] << endl;
					cout << "\tCourse Name : " << arr2[i] << endl;
					cout << "\tCourse Type  : " << arr3[i] << endl;
					cout << "\tCourse Description : " << arr4[i] << endl;
					cout << "\tCourse Year : " << arr5[i] << endl;
					cout << "\tCourse Student ID : " << arr6[i] << endl;

					cout << "\tAdd New  Course Details \n";
					cout << "\tCourse ID\t:\t";
					cin >> arr1[i];
					cout << "\tCourse Name\t:\t";
					cin >> arr2[i];
					cout << "\tCourse Type\t:\t";
					cin >> arr3[i];
					cout << "\tCourse Description\t:\t";
					cin >> arr4[i];
					cout << "\tCourse Year\t:\t  ";
					cin >> arr5[i];
					cout << "\tCourse Student ID\t:\t";
					cin >> arr6[i];
				}
			}
		}
		cout << "\n\n";
	}
	void Delete_record()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			int a;
			cout << "\tPress 1 Delete full Record \n";
			cout << "\tPress 2 Specfic Record \n";
			cin >> a;
			if (a == 1)
			{
				total = 0;
				cout << "\tAll Record Deleted\n";
			}
			else
			{
				string rollno;
				cout << "\tEnter Course ID you want  to Delete Details :   ";
				for (int i = 0; i < total; i++)
				{
					if (rollno == arr1[i])
					{
						for (int j = i; j < total; j++)
						{
							arr1[j] = arr1[j + 1];
							arr2[j] = arr2[j + 1];
							arr3[j] = arr3[j + 1];
							arr4[j] = arr4[j + 1];
							arr5[j] = arr5[j + 1];
							arr6[j] = arr6[j + 1];
						}
						total--;
						cout << "\tYour Required Record is Deleted!!!!!\n";
					}
				}
			}
		}
		cout << "\n\n";
	}
};
class Classes
{
public:
	string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20], arr6[20];
	int total = 0;

	void Enter()
	{

		int choice;
		cout << "\tEnter No of Size\t:\t";
		cin >> choice;
		if (total == 0)
		{
			total = total + choice;
			for (int i = 0; i < choice; i++)
			{
				cout << "\tAdd the Class Details \n"
				     << i + 1 << endl;
				cout << "\tEnter Class ID\t:\t";
				cin >> arr1[i];
				cout << "\t Enter Class Type\t:\t";
				cin >> arr2[i];
				cout << "\t Description\t:\t";
				cin >> arr3[i];
				cout << "\tCalss Name\t:\t";
				cin >> arr4[i];
				cout << "\tClass Room\t:\t  ";
				cin >> arr5[i];
				cout << "\tCalss Student ID\t:\t";
				cin >> arr6[i];
			}
		}
		else
		{
			for (int i = total; i < total + choice; i++)
			{
				cout << "\tAdd the Class Details \n"
				     << i + 1 << endl;
				cout << "\tEnter Class ID\t:\t";
				cin >> arr1[i];
				cout << "\t Enter Class Type\t:\t";
				cin >> arr2[i];
				cout << "\t Description\t:\t";
				cin >> arr3[i];
				cout << "\tClass Name\t:\t";
				cin >> arr4[i];
				cout << "\tClass Room\t:\t  ";
				cin >> arr5[i];
				cout << "\tClass Student ID\t:\t";
				cin >> arr6[i];
			}
			total = total + choice;
		}
		cout << "\n\n";
	}
	void Show()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			for (int i = 0; i < total; i++)
			{
				cout << "\tAdd the Class Details \n"
				     << i + 1 << endl;
				cout << "\tEnter Class ID\t:\t" << arr1[i];
				cout << "\t Enter Class Type\t:\t" << arr2[i];
				cout << "\t Description\t:\t" << arr3[i];
				cout << "\tClass Name\t:\t" << arr4[i];
				cout << "\tClass Room\t:\t  " << arr5[i];
				cout << "\tClass Student ID\t:\t" << arr6[i];
			}
		}
		cout << "\n\n";
	}
	void Search()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			string rollno;
			cout << "\tEnter Class ID you want to search Details : ";
			cin >> rollno;
			for (int i = 0; i < total; i++)
			{
				if (rollno == arr1[i])
				{
					cout << "\tAdd the Class Details \n"
					     << i + 1 << endl;
					cout << "\tEnter Class ID\t:\t" << arr1[i] << endl;
					cout << "\t Enter Class Type\t:\t" << arr2[i] << endl;
					cout << "\t Description\t:\t" << arr3[i] << endl;
					cout << "\tClass Name\t:\t" << arr4[i] << endl;
					cout << "\tClass Room\t:\t  " << arr5[i] << endl;
					cout << "\tClass Student ID\t:\t" << arr6[i] << endl;
				}
			}
		}
		cout << "\n\n";
	}
	void Update()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			string rollno;
			cout << "\tEnter Class ID you want to update Details : ";
			cin >> rollno;
			for (int i = 0; i < total; i++)
			{
				if (rollno == arr1[i])
				{
					cout << "\tAdd the Class Details \n"
					     << i + 1 << endl;
					cout << "\tEnter Class ID\t:\t" << arr1[i] << endl;
					cout << "\t Enter Class Type\t:\t" << arr2[i] << endl;
					cout << "\t Description\t:\t" << arr3[i] << endl;
					cout << "\tClass Name\t:\t" << arr4[i] << endl;
					cout << "\tClass Room\t:\t  " << arr5[i] << endl;
					cout << "\tClass Student ID\t:\t" << arr6[i] << endl;
					cout << "\tEnter new Data \n\n";
					cout << "\tEnter Class ID\t:\t";
					cin >> arr1[i];
					cout << "\t Enter Class Type\t:\t";
					cin >> arr2[i];
					cout << "\t Description\t:\t";
					cin >> arr3[i];
					cout << "\tClass Name\t:\t";
					cin >> arr4[i];
					cout << "\tClass Room\t:\t  ";
					cin >> arr5[i];
					cout << "\tClass Student ID\t:\t";
					cin >> arr6[i];
				}
			}
		}
		cout << "\n\n";
	}
	void Delete_record()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			int a;
			cout << "\tPress 1 Delete full Record \n";
			cout << "\tPress 2 Specfic Record \n";
			cin >> a;
			if (a == 1)
			{
				total = 0;
				cout << "\tAll Record Deleted\n";
			}
			else
			{
				string rollno;
				cout << "\tEnter Class ID you want to Delete Details\n";
				cin >> rollno;
				for (int i = 0; i < total; i++)
				{
					if (rollno == arr1[i])
					{
						for (int j = i; j < total; j++)
						{
							arr1[j] = arr1[j + 1];
							arr2[j] = arr2[j + 1];
							arr3[j] = arr3[j + 1];
							arr4[j] = arr4[j + 1];
							arr5[j] = arr5[j + 1];
							arr6[j] = arr6[j + 1];
						}
						total--;
						cout << "\tYour Required Record is Deleted!!!!!\n";
					}
				}
			}
		}
		cout << "\n\n";
	}
};
class College
{
public:
	string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20], arr6[20];
	int total = 0;

	void Enter()
	{

		int choice;
		cout << "\tHow many Students do you enter\t:\t";
		cin >> choice;
		if (total == 0)
		{
			total = total + choice;
			for (int i = 0; i < choice; i++)
			{
				cout << "\tAdd the Student Details \n"
				     << i + 1 << endl;
				cout << "\tName\t:\t";
				cin >> arr1[i];
				cout << "\tFather Name\t:\t";
				cin >> arr2[i];
				cout << "\tRoll_No\t:\t";
				cin >> arr3[i];
				cout << "\tResult\t:\t";
				cin >> arr4[i];
				cout << "\tContact Number\t:\t  ";
				cin >> arr5[i];
				cout << "\tEmail\t:\t";
				cin >> arr6[i];
			}
		}
		else
		{
			for (int i = total; i < total + choice; i++)
			{
				cout << "\tAdd the Student Details\n";
				cout << "\tAdd the Student Details \n"
				     << i + 1 << endl;
				cout << "\tName  :\t";
				cin >> arr1[i];
				cout << "\tFather Name  : \t";
				cin >> arr2[i];
				cout << "\tRoll_No : \t";
				cin >> arr3[i];
				cout << "\t Result : \t";
				cin >> arr4[i];
				cout << "\tContact Number :\t  ";
				cin >> arr5[i];
				cout << "\tEmail  :\t";
				cin >> arr6[i];
			}
			total = total + choice;
		}
		cout << "\n\n";
	}
	void Show()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			for (int i = 0; i < total; i++)
			{
				cout << "Data of Student : " << i + 1 << endl
				     << endl;
				cout << "\tName : " << arr1[i] << endl;
				cout << "\tFather-Name : " << arr2[i] << endl;
				cout << "\tRoll_No  : " << arr3[i] << endl;
				cout << "\tResult : " << arr4[i] << endl;
				cout << "\tContact_Number : " << arr5[i] << endl;
				cout << "\tEmail : " << arr6[i] << endl;
			}
		}
		cout << "\n\n";
	}
	void Search()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			string rollno;
			cout << "\tEnter Roll_no of student : ";
			cin >> rollno;
			for (int i = 0; i < total; i++)
			{
				if (rollno == arr3[i])
				{
					cout << "\tData of Student : " << i + 1 << endl
					     << endl;
					cout << "\tName : " << arr1[i] << endl;
					cout << "\tFather-Name : " << arr2[i] << endl;
					cout << "\tRoll_No  : " << arr3[i] << endl;
					cout << "\tResult : " << arr4[i] << endl;
					cout << "\tContact_Number : " << arr5[i] << endl;
					cout << "\tEmail : " << arr6[i] << endl;
				}
			}
		}
		cout << "\n\n";
	}
	void Update()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			string rollno;
			cout << "\tEnter Roll_no of student : ";
			cin >> rollno;
			for (int i = 0; i < total; i++)
			{
				if (rollno == arr3[i])
				{
					cout << "\tData of Student : " << i + 1 << endl
					     << endl;
					cout << "\tName : " << arr1[i] << endl;
					cout << "\tFather-Name : " << arr2[i] << endl;
					cout << "\tRoll_No  : " << arr3[i] << endl;
					cout << "\tResult : " << arr4[i] << endl;
					cout << "\tContact_Number : " << arr5[i] << endl;
					cout << "\tEmail : " << arr6[i] << endl;
					cout << "\tEnter new Data \n\n";
					cout << "\tName  :\t";
					cin >> arr1[i];
					cout << "\tFather Name  : \t";
					cin >> arr2[i];
					cout << "\tRoll_No : \t";
					cin >> arr3[i];
					cout << "\tResult : \t";
					cin >> arr4[i];
					cout << "\tContact Number :\t  ";
					cin >> arr5[i];
					cout << "\tEmail  : \t";
					cin >> arr6[i];
				}
			}
		}
		cout << "\n\n";
	}
	void Delete_record()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			int a;
			cout << "\tPress 1 Delete full Record \n";
			cout << "\tPress 2 Specfic Record \n";
			cin >> a;
			if (a == 1)
			{
				total = 0;
				cout << "\tAll Record Deleted\n";
			}
			else
			{
				string rollno;
				cout << "\tEnter Student Roll no. you want to Delete Details\n";
				cin >> rollno;
				for (int i = 0; i < total; i++)
				{
					if (rollno == arr3[i])
					{
						for (int j = i; j < total; j++)
						{
							arr1[j] = arr1[j + 1];
							arr2[j] = arr2[j + 1];
							arr3[j] = arr3[j + 1];
							arr4[j] = arr4[j + 1];
							arr5[j] = arr5[j + 1];
							arr6[j] = arr6[j + 1];
						}
						total--;
						cout << "\tYour Required Record is Deleted!!!!!\n";
					}
				}
			}
		}
		cout << "\n\n";
	}
	void Exit()
	{
		cout << "\n\n";
	}
};
class Registration
{
public:
	string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20], arr6[20];
	int total = 0;

	void Enter()
	{

		int choice;
		cout << "\tHow many Registration do you enter\t:\t";
		cin >> choice;
		if (total == 0)
		{
			total = total + choice;
			for (int i = 0; i < choice; i++)
			{
				cout << "\tAdd the Registration Details \n"
				     << i + 1 << endl;
				cout << "\tRegistration ID\t:\t";
				cin >> arr1[i];
				cout << "\tRegistration Student ID\t:\t";
				cin >> arr2[i];
				cout << "\tRegistration Course ID \t:\t";
				cin >> arr3[i];
				cout << "\tRegistration Name\t:\t";
				cin >> arr4[i];
				cout << "\tRegistration Number\t:\t  ";
				cin >> arr5[i];
				cout << "\tRegistration Description\t:\t";
				cin >> arr6[i];
			}
		}
		else
		{
			for (int i = total; i < total + choice; i++)
			{
				cout << "\tAdd the Registration Details \n"
				     << i + 1 << endl;
				cout << "\tRegistration ID\t:\t";
				cin >> arr1[i];
				cout << "\tRegistration Student ID\t:\t";
				cin >> arr2[i];
				cout << "\tRegistration Course ID \t:\t";
				cin >> arr3[i];
				cout << "\tRegistration Name\t:\t";
				cin >> arr4[i];
				cout << "\tRegistration Number\t:\t  ";
				cin >> arr5[i];
				cout << "\tRegistration Description\t:\t";
				cin >> arr6[i];
			}
			total = total + choice;
		}
		cout << "\n\n";
	}
	void Show()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			for (int i = 0; i < total; i++)
			{
				cout << "Data of Registration : " << i + 1 << endl
				     << endl;
				cout << "\tRegistration ID: " << arr1[i] << endl;
				cout << "\tRegistration Student ID: " << arr2[i] << endl;
				cout << "\tRegistration Course ID : " << arr3[i] << endl;
				cout << "\tRegistration Name : " << arr4[i] << endl;
				cout << "\tRegistration Number : " << arr5[i] << endl;
				cout << "\tRegistration Descrition : " << arr6[i] << endl;
			}
		}
		cout << "\n\n";
	}
	void Search()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			string rollno;
			cout << "\tEnter  Registration Student ID : ";
			cin >> rollno;
			for (int i = 0; i < total; i++)
			{
				if (rollno == arr2[i])
				{
					cout << "Data of Registration : " << i + 1 << endl
					     << endl;
					cout << "\tRegistration ID: " << arr1[i] << endl;
					cout << "\tRegistration Student ID: " << arr2[i] << endl;
					cout << "\tRegistration Course ID : " << arr3[i] << endl;
					cout << "\tRegistration Name : " << arr4[i] << endl;
					cout << "\tRegistration Number : " << arr5[i] << endl;
					cout << "\tRegistration Descrition : " << arr6[i] << endl;
				}
			}
		}
		cout << "\n\n";
	}
	void Update()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			string rollno;
			cout << "\tEnter  Registration Student ID : ";
			cin >> rollno;
			for (int i = 0; i < total; i++)
			{
				if (rollno == arr2[i])
				{
					cout << "Data of  Registration : " << i + 1 << endl
					     << endl;
					cout << "\tRegistration ID: " << arr1[i] << endl;
					cout << "\tRegistration Student ID: " << arr2[i] << endl;
					cout << "\tRegistration Course ID : " << arr3[i] << endl;
					cout << "\tRegistration Name : " << arr4[i] << endl;
					cout << "\tRegistration Number : " << arr5[i] << endl;
					cout << "\tRegistration Descrition : " << arr6[i] << endl;
					cout << "\tEnter new Data \n\n";
					cout << "\tRegistration ID\t:\t";
					cin >> arr1[i];
					cout << "\tRegistration Student ID\t:\t";
					cin >> arr2[i];
					cout << "\tRegistration Course ID \t:\t";
					cin >> arr3[i];
					cout << "\tRegistration Name\t:\t";
					cin >> arr4[i];
					cout << "\tRegistration Number\t:\t  ";
					cin >> arr5[i];
					cout << "\tRegistration Description\t:\t";
					cin >> arr6[i];
				}
			}
		}
		cout << "\n\n";
	}
	void Delete_record()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			int a;
			cout << "\tPress 1 Delete full Record \n";
			cout << "\tPress 2 Specfic Record \n";
			cin >> a;
			if (a == 1)
			{
				total = 0;
				cout << "\tAll Record Deleted\n";
			}
			else
			{
				string rollno;
				cout << "\tEnter Registration Student ID you want to Delete Details\n";
				cin >> rollno;
				for (int i = 0; i < total; i++)
				{
					if (rollno == arr2[i])
					{
						for (int j = i; j < total; j++)
						{
							arr1[j] = arr1[j + 1];
							arr2[j] = arr2[j + 1];
							arr3[j] = arr3[j + 1];
							arr4[j] = arr4[j + 1];
							arr5[j] = arr5[j + 1];
							arr6[j] = arr6[j + 1];
						}
						total--;
						cout << "\tYour Required Record is Deleted!!!!!\n";
					}
				}
			}
		}
		cout << "\n\n";
	}
};
class Departement_Teacher
{
public:
	void departement()
	{
		int found;
		cout << "\tSelect Department  \t\n";
		cout << "\t1.Departement of Software  Engineering\t\n";
		cout << "\t2.Departement of  Information  Technology\t\n";
		cout << "\t3.Departement of    Information Security\t\n";
		cout << "\t4.Departement of Mathematics\t\n";

		cin >> found;
		switch (found)
		{
		case 1:
			cout << "\t Subject.\n";
			cout << "\t1.Object Oriented Programming  :\tDr.Taniver\n";
			cout << "\t2Discrete Structure  :\tMr.Omer Farooq\n";
			cout << "\t3.Probability And Statistics  :\tMr.Muhammad Fiaz\n";
			cout << "\t4.Pakistan Study  :\tDr.Abdur Razzaq Shahid\n";
			cout << "   5.Communication & Presentation Skill  :  Mr.Nadir Rehan Khan\n";
			cout << "   6.Introduction to Software Engineering  :  Ms.Shazia Khaliq\n";

			break;
		case 2:
			cout << "\t1. Fundamental Programming  :\tMr.Shazad Ali\n";
			cout << "\t2.Calculus &Analytical Geometry  :\tMs.Ayesha Nazir\n";
			cout << "\t3.Islamic Studies :\tDr.Shohaib Jameel\n";
			cout << "\t4.Applied Physics :\tMs.Samreen Mustafa\n";
			cout << "\t5.English Composition : \tMr.Nadir Rehan Khan\n";
			cout << "\t6.Introduction to ICT :\tMs.Saman Nawaz\n";
			break;
		case 3:
			cout << "\t1.Fundamental Programming :\tDr.Tenivr Ali \n";
			cout << "\t2..Calculus & Analytical Geometry :\t Ms.Huba Umar\n";
			cout << "\t3..Islamic Studies :\tMS.Tahira Khtoon\n";
			cout << "\t4.Applied Physics :\t Ms.Mehak Asghar\n";
			cout << "\t5.English Composition & Comprehension :\t Mr.Uman Serwar\n";
			cout << "\t6.Introduction to Information :\tDr.Tenvir\n";
			break;
		case 4:
			cout << "\t1.Probability  And Statistics :\t Ms.Asia Munir\n";
			cout << "\t2.Mathematics :\tMs. Saman\n";
			cout << "\t3.Islamait :\tMs. Ayesha\n";
			cout << "\t4.Applied Physics :\tMs.\n";
			cout << "\t5.English :\tMs.Sadir Shafiq\n";
			cout << "\t6.History of Mathematics :\t Mr.Umar Farooq\n";
			break;
		default:
			cout << "\tInvalid Departement\t\n";
		}
	}
};
class Student : public Departement_Teacher
{
public:
	string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20], arr6[20];
	int total = 0;

	void Enter()
	{

		int choice;
		cout << "\tHow many Students do you enter\t:\t";
		cin >> choice;
		if (total == 0)
		{
			total = total + choice;
			for (int i = 0; i < choice; i++)
			{
				cout << "\tAdd the Student Details \n"
				     << i + 1 << endl;
				cout << "\tName\t:\t";
				cin >> arr1[i];
				cout << "\tFather Name\t:\t";
				cin >> arr2[i];
				cout << "\tRoll_No\t:\t";
				cin >> arr3[i];
				cout << "\tCGPA you obtained\t:\t";
				cin >> arr4[i];
				cout << "\tContact Number\t:\t  ";
				cin >> arr5[i];
				cout << "\tEmail\t:\t";
				cin >> arr6[i];
			}
		}
		else
		{
			for (int i = total; i < total + choice; i++)
			{
				cout << "\tAdd the Student Details\n";
				cout << "\tAdd the Student Details \n"
				     << i + 1 << endl;
				cout << "\tName  :\t";
				cin >> arr1[i];
				cout << "\tFather Name  : \t";
				cin >> arr2[i];
				cout << "\tRoll_No : \t";
				cin >> arr3[i];
				cout << "\tCGPA you obtained : \t";
				cin >> arr4[i];
				cout << "\tContact Number :\t  ";
				cin >> arr5[i];
				cout << "\tEmail  :\t";
				cin >> arr6[i];
			}
			total = total + choice;
		}
		cout << "\n\n";
	}
	void Show()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			for (int i = 0; i < total; i++)
			{
				cout << "Data of Student : " << i + 1 << endl
				     << endl;
				cout << "\tName : " << arr1[i] << endl;
				cout << "\tFather-Name : " << arr2[i] << endl;
				cout << "\tRoll_No  : " << arr3[i] << endl;
				cout << "\tCGPA : " << arr4[i] << endl;
				cout << "\tContact_Number : " << arr5[i] << endl;
				cout << "\tEmail : " << arr6[i] << endl;
			}
		}
		cout << "\n\n";
		
	}
	void Search()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			string rollno;
			cout << "\tEnter Roll_no of student : ";
			cin >> rollno;
			for (int i = 0; i < total; i++)
			{
				if (rollno == arr3[i])
				{
					cout << "\tData of Student : " << i + 1 << endl
					     << endl;
					cout << "\tName : " << arr1[i] << endl;
					cout << "\tFather-Name : " << arr2[i] << endl;
					cout << "\tRoll_No  : " << arr3[i] << endl;
					cout << "\tCGPA : " << arr4[i] << endl;
					cout << "\tContact_Number : " << arr5[i] << endl;
					cout << "\tEmail : " << arr6[i] << endl;
				}
			}
		}
		cout << "\n\n";
	}
	void Update()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			string rollno;
			cout << "\tEnter Roll_no of student : ";
			cin >> rollno;
			for (int i = 0; i < total; i++)
			{
				if (rollno == arr3[i])
				{
					cout << "\tData of Student : " << i + 1 << endl
					     << endl;
					cout << "\tName : " << arr1[i] << endl;
					cout << "\tFather-Name : " << arr2[i] << endl;
					cout << "\tRoll_No  : " << arr3[i] << endl;
					cout << "\tCGPA : " << arr4[i] << endl;
					cout << "\tContact_Number : " << arr5[i] << endl;
					cout << "\tEmail : " << arr6[i] << endl;
					cout << "\tEnter new Data \n\n";
					cout << "\tName  :\t";
					cin >> arr1[i];
					cout << "F\tather Name  : \t";
					cin >> arr2[i];
					cout << "\tRoll_No : \t";
					cin >> arr3[i];
					cout << "\tCGPA you obtained : \t";
					cin >> arr4[i];
					cout << "\tContact Number :\t  ";
					cin >> arr5[i];
					cout << "\tEmail  : \t";
					cin >> arr6[i];
				}
			}
		}
		cout << "\n\n";
	}
	void Delete_record()
	{
		if (total == 0)
		{
			cout << "\tNo Data is Entered \n ";
		}
		else
		{
			int a;
			cout << "\tPress 1 Delete full Record \n";
			cout << "\tPress 2 Specfic Record \n";
			cin >> a;
			if (a == 1)
			{
				total = 0;
				cout << "\tAll Record Deleted\n";
			}
			else
			{
				string rollno;
				cout << "\tEnter Student Roll no. you want to Delete Details\n";
				cin >> rollno;
				for (int i = 0; i < total; i++)
				{
					if (rollno == arr3[i])
					{
						for (int j = i; j < total; j++)
						{
							arr1[j] = arr1[j + 1];
							arr2[j] = arr2[j + 1];
							arr3[j] = arr3[j + 1];
							arr4[j] = arr4[j + 1];
							arr5[j] = arr5[j + 1];
							arr6[j] = arr6[j + 1];
						}
						total--;
						cout << "\tYour Required Record is Deleted!!!!!\n";
					}
				}
			}
		}
		cout << "\n\n";
	}
	void Exit()
	{

		cout << "\n\n";
	}
};

int main()
{
	Student obj;
	Registration obj1;
	College obj2;
	Classes obj3;
	Courses obj4;
	User obj5;
	Faculities obj6;
	cout << "\t*********************************************** \n";
	cout << "\t****Welcometo The Islamia University of Bahawalangar*****\n";
	cout << "\t  ****************************************************\n\n\n";
	cout << "\t******* This Project is created by Rehman Siddique*******\n";
	cout << "\t     ************************************************\n\n\n";
	int value;
	while (true)
	{
		cout << "\tThe Task you perform\n";
		cout << "\t1.Add the Student Details\n";
		cout << "\t2.Show Student Details \n";
		cout << "\t3.Search The Student Details\n";
		cout << "\t4.Update the Student Data \n";
		cout << "\t5.Delete the Student \n\n";
		cout << "\t6.Add Registration\n";
		cout << "\t7.Show Registration\n";
		cout << "\t8.Search Registration\n";
		cout << "\t9.Update Registration\n";
		cout << "\t10.Delete Registration\n\n";
		cout << "\t11.Add College Student  Details\n";
		cout << "\t12.Show College Student Details\n";
		cout << "\t13.Search College Student Details\n";
		cout << "\t14.Update College Student Details\n";
		cout << "\t15.Delete College Student Details\n\n";
		cout << "\t16.Add Classes\n";
		cout << "\t17.Show Classes\n";
		cout << "\t18.Search Classes\n";
		cout << "\t19.Update Class\n";
		cout << "\t20.Delete Class\n\n";
		cout << "\t21.Add Courese\n";
		cout << "\t22.Show Courese\n";
		cout << "\t23.Search Courese\n";
		cout << "\t24.Update Courese\n";
		cout << "\t25.Delete Courese\n\n";
		cout << "\t26.Add User Details\n";
		cout << "\t27.Show User Details\n";
		cout << "\t28.Search User Details\n";
		cout << "\t29.Update User Details\n";
		cout << "\t30.Delete User Details\n\n";
		cout << "\t31.Add Facultie Details\n";
		cout << "\t32.Show Facultie Details\n";
		cout << "\t33.Search Facultie Details\n";
		cout << "\t34.Update Facultie Details\n";
		cout << "\t35.Delete Facultie Details\n\n";
		cout << "\t36.Exit\n\n";
		cin >> value;
		switch (value)
		{
		case 1:
			obj.Enter();
			break;
		case 2:
			obj.Show();
			break;
		case 3:
			obj.Search();
			break;
		case 4:
			obj.Update();
			break;
		case 5:
			obj.Delete_record();
			break;
		case 6:
			obj1.Enter();
			break;
		case 7:
			obj1.Show();
			break;
		case 8:
			obj1.Search();
			break;
		case 9:
			obj1.Update();
			break;
		case 10:
			obj1.Delete_record();
			break;
		case 11:
			obj2.Enter();
			break;
		case 12:
			obj2.Show();
			break;
		case 13:
			obj2.Search();
			break;
		case 14:
			obj2.Update();
			break;
		case 15:
			obj2.Delete_record();
			break;
		case 16:
			obj3.Enter();
			break;

		case 17:
			obj3.Show();
			break;
		case 18:
			obj3.Search();
			break;
		case 19:
			obj3.Update();
			break;
		case 20:
			obj3.Delete_record();
			break;
		case 21:
			obj4.Enter();
			break;
		case 22:
			obj4.Show();
			break;
		case 23:
			obj4.Search();
			break;
		case 24:
			obj4.Update();
			break;
		case 25:
			obj4.Delete_record();
			break;
		case 26:
			obj5.Enter();
			break;
		case 27:
			obj5.Show();
			break;
		case 28:
			obj5.Search();
			break;
		case 29:
			obj5.Update();
			break;
		case 30:
			obj5.Delete_record();
			break;
		case 31:
			obj6.Enter();
			break;
		case 32:
			obj6.Show();
			break;
		case 33:
			obj6.Search();
			break;
		case 34:
			obj6.Update();
			break;
		case 35:
			obj6.Delete_record();
			break;
		case 36:
			obj.Exit();
			break;
		default:
			cout << "Invalid Error !!!!\n";
		}
	}
	return 0;
}
