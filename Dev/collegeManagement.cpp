//#include "pch.h" //required for some visual studio versions

#include <iostream>

#include <fstream>
#include <sstream>
#include <iomanip>


/***********************************************************************
*                          FUNCTION PROTOTYPES                         *
************************************************************************/
//functions to display menus
void showMainMenu();
void showManageStudentRecordsSubMenu();
void showManageEnrolmentRecordsSubMenu();

//functions to generate student reports
void generateStudentReports(const char*, const char*, const char*, const char*);
double calculateFinalMark(double, double, double, double);
std::string getLetterGrade(double);

//function to generate course summaries
void generateCourseSummaryReport(const char*, const char*);

//functions to manage student rcords
void addStudentRecord(const char*);
void viewStudentRecords(const char*);

//functions to manage enrolment records
void addEnrolmentRecord(const char*);
void viewEnrolmentRecords(const char*);


/***********************************************************************
*                       MAIN FUNCTION                                  *
************************************************************************/
int main()
{
	//start interactive menu
	int main_choice = -1;

	//show main menu and read user input
	showMainMenu();
	std::cin >> main_choice;

	// check if user input is valid 
	//********************************************
	while (std::cin.fail())
	{
		std::cout << "ERROR : Enter an integer digit between 1 and 5" << std::endl;
		system("pause");

		//show main menu
		showMainMenu();

		// clear and ignore invalid user input
		std::cin.clear();
		std::cin.ignore(256, '\n');

		//read choice again
		std::cin >> main_choice;
	}
	//********************************************


	while (main_choice != 5) // choice 5 to exit
	{
		switch (main_choice)
		{
		case 1: { //manage student information
			int submenu_choice = -1;

			//show submenu and read user input
			showManageStudentRecordsSubMenu();
			std::cin >> submenu_choice;

			// check if input is valid 
			//********************************************
			while (std::cin.fail())
			{
				std::cout << "ERROR : Enter an integer digit between 1 and 3" << std::endl;
				system("pause");

				//show submenu again
				showManageStudentRecordsSubMenu();

				// clear and ignore invalid user input
				std::cin.clear();
				std::cin.ignore(256, '\n');

				//read choice again
				std::cin >> submenu_choice;
			}
			//********************************************

			while (submenu_choice != 3) //sub menu choice 3 returns to main menu
			{
				switch (submenu_choice)
				{
				case 1: {  // add new student

					//add function to add records
					addStudentRecord("students.txt");

					//show submenu again
					showManageStudentRecordsSubMenu();

					//read choice again
					std::cin >> submenu_choice;

					break;
				}
				case 2: { //view student records


					// call function to view records
					viewStudentRecords("students.txt");
					system("pause");

					//show submenu again
					showManageStudentRecordsSubMenu();

					//read choice again
					std::cin >> submenu_choice;

					break;
				}

				case 3: {

					continue; //RETURN TO MAIN MENU
				}
				default: {
					std::cout << "INVALID SUBMENU CHOICE: Enter an integer digit between 1 and 3" << std::endl;
					system("pause");

					//show submenu again
					showManageStudentRecordsSubMenu();

					//clear and ignore invalid user input
					std::cin.clear();
					std::cin.ignore(256, '\n');

					//read choice again
					std::cin >> submenu_choice;

				}
				}
			}

			showMainMenu();
			std::cin >> main_choice;

			break;
		} //end case main-choice = 1

		case 2: { //manage enrollement record
			int submenu_choice = -1;

			//show submenu and read user input
			showManageEnrolmentRecordsSubMenu();
			std::cin >> submenu_choice;

			// check if input is valid 
			//********************************************
			while (std::cin.fail())
			{
				std::cout << "ERROR : Enter an integer digit between 1 and 3" << std::endl;
				system("pause");

				//show submenu again
				showManageStudentRecordsSubMenu();

				//clear and ignore invalid user input
				std::cin.clear();
				std::cin.ignore(256, '\n');

				//read choice again
				std::cin >> submenu_choice;
			}
			while (submenu_choice != 3) // submenu choice 3 returns to main menu
			{
				switch (submenu_choice)
				{
				case 1: { //add new enrollment record

					//call function to add enrollment
					addEnrolmentRecord("enrolments.txt");

					//show submenu again 
					showManageEnrolmentRecordsSubMenu();

					//read choice again
					std::cin >> submenu_choice;

					break;
				}
				case 2: { //view enrollment records

					//calls function to view records
					viewEnrolmentRecords("enrolments.txt");
					system("pause");

					//show submenu again 
					showManageEnrolmentRecordsSubMenu();

					//read choice again
					std::cin >> submenu_choice;

					break;
				}

				case 3: {
					continue; //RETURN TO MAIN MENU
				}
				default: {

					std::cout << "INVALID SUBMENU  CHOICE:  Enter an integer digit between 1 and 3" << std::endl;
					system("pause");

					//show submenu again
					showManageEnrolmentRecordsSubMenu();

					//clear and ignore invalid user input
					std::cin.clear();
					std::cin.ignore(256, '\n');

					//read choice again
					std::cin >> submenu_choice;

				}
				}
			}

			//show main menu and read choice again
			showMainMenu();
			std::cin >> main_choice;

			break;
		} //end case main choice = 2

		case 3: { //generate student reprots
			//call function to generate student reports
			generateStudentReports("students.txt", "courses.csv", "enrolments.txt", "report.txt");
			std::cout << "Report written to  report.txt file" << std::endl;
			system("pause");

			//show main menu and read choice again
			showMainMenu();
			std::cin >> main_choice;

			break;
		} // end main choice = 3

		case 4: { //generate course summarries

			//call function to generate course summaries
			generateCourseSummaryReport("courses.csv", "enrolments.txt");
			system("pause");

			//show main menu and read choice again
			showMainMenu();
			std::cin >> main_choice;

			break;
		} //end main choice = 4

		case 5: {	 //exit program
			break;
		}

		default: {
			std::cout << "INCORRECT MAIN MENU CHOICE : Enter an integer digit between 1 and 5" << std::endl;
			system("pause");

			//show main menu again
			showMainMenu();

			//clear and ignore invalid user input
			std::cin.clear();
			std::cin.ignore(256, '\n');

			//read choice again
			std::cin >> main_choice;
		}
		}
	}

	system("pause");
	return 0;
}


/***********************************************************************
*                          FUNCTION DEFINITIONS                        *
************************************************************************/

void showMainMenu()
{
	system("CLS");

	std::cout << "\t" << std::endl;
	std::cout << "\t MAIN MENU" << std::endl;
	std::cout << "\t ==========" << std::endl << std::endl;
	std::cout << "\t 1. Manage Student Records" << std::endl << std::endl;;
	std::cout << "\t 2. Manage Enrolment Records" << std::endl << std::endl;
	std::cout << "\t 3. Generate Student Reports" << std::endl << std::endl;
	std::cout << "\t 4. Generate Course Summaries" << std::endl << std::endl;
	std::cout << "\t 5. Exit" << std::endl << std::endl;
	std::cout << "\t =====================================" << std::endl << std::endl;

	std::cout << "\t ENTER YOUR CHOICE  :  ";
}

void showManageStudentRecordsSubMenu()
{
	system("CLS");
	std::cout << "\t MANAGE STUDENTS RECORDS SUB-MENU " << std::endl;
	std::cout << "\t ==================================" << std::endl << std::endl;
	std::cout << "\t 1. Add New Student Record" << std::endl << std::endl;;
	std::cout << "\t 2. View Student Records" << std::endl << std::endl;
	std::cout << "\t 3. Return to Main Menu" << std::endl << std::endl;
	std::cout << "\t" << "____________________________________________________" << std::endl << std::endl;

	std::cout << "\t" << "\t ENTER YOUR CHOICE  :  ";
}


void showManageEnrolmentRecordsSubMenu()
{
	system("CLS");
	std::cout << "\t MANAGE ENROLMENT RECORDS SUB-MENU " << std::endl;
	std::cout << "\t ==================================" << std::endl << std::endl;
	std::cout << "\t 1. Add New Enrolment Record" << std::endl << std::endl;;
	std::cout << "\t 2. View Enrolment Records" << std::endl << std::endl;
	std::cout << "\t 3. Return to Main Menu" << std::endl << std::endl;
	std::cout << "\t" << "____________________________________________________" << std::endl << std::endl;

	std::cout << "\t" << "\t ENTER YOUR CHOICE  :  ";

}

void addStudentRecord(const char* studFile) {

	std::ofstream studentsDataFile;
	studentsDataFile.open(studFile, std::ios::app);

	std::string sid, surname, firstname;

	std::cout << "\n Enter student identity number: ";
	std::cin >> sid;

	std::cout << "\n Enter student surname: ";
	std::cin >> surname;

	std::cout << "\n Enter student firstname: ";
	std::cin >> firstname;

	studentsDataFile << "\n" << sid << "\t" << surname << "\t" << firstname;

	studentsDataFile.close();
}

void viewStudentRecords(const char* studFile) {

	system("CLS");
	std::cout << "\n\n CURRENT STUDENT LIST" << std::endl;
	std::cout << "========================================================" << std::endl;

	std::ifstream studentsDataFile;
	studentsDataFile.open(studFile, std::ios::in);

	std::string str;
	//Loop and read and process data from students data file
	while (getline(studentsDataFile, str))
	{
		std::istringstream studLineSS(str);

		//declare strings for student sid, surname and firstname:
		std::string sid, surname, firstname;

		//read and write student sid,  surname, and firstname; 
		studLineSS >> sid >> surname >> firstname;

		std::cout << std::left << std::setw(10) << sid << std::setw(20) << surname << std::setw(10) << firstname << "\n";

	}
	std::cout << "========================================================" << std::endl;
	std::cout << std::endl;
	studentsDataFile.close();
}



void addEnrolmentRecord(const char* enrolmentFile) {

	std::ofstream enrolmentDataFile;
	enrolmentDataFile.open(enrolmentFile, std::ios::app);

	std::string cid, sid;
	std::string caMark, examMark; //read everyything as string

	std::cout << "\n Enter course code: ";
	std::cin >> cid;

	std::cout << "\n Enter student identity number: ";
	std::cin >> sid;

	std::cout << "\n Enter CA mark: ";
	std::cin >> caMark;

	std::cout << "\n Enter EXAM Mark: ";
	std::cin >> examMark;

	enrolmentDataFile << "\n" << cid << "\t" << sid << "\t" << caMark << "\t" << examMark;

	enrolmentDataFile.close();
}

void viewEnrolmentRecords(const char* enrolmentFile) {

	system("CLS");
	std::cout << "\n\n CURRENT STUDENT COURSE ENROLMENT" << std::endl;
	std::cout << "========================================================" << std::endl;

	std::ifstream enrolmentDataFile;
	enrolmentDataFile.open(enrolmentFile, std::ios::in);

	std::string str;


	//Loop and read and process data from students data file
	while (getline(enrolmentDataFile, str))
	{
		std::istringstream LineSS(str);

		//declare strings for student sid, surname and firstname:
		std::string cid, sid;
		std::string caMark, examMark;

		//read and write student sid,  surname, and firstname; 
		LineSS >> cid >> sid >> caMark >> examMark;

		std::cout << std::left << std::setw(10) << cid
			<< std::left << std::setw(10) << sid
			<< std::setw(20) << caMark
			<< std::setw(10) << examMark << "\n";

	}
	std::cout << "========================================================" << std::endl;
	std::cout << std::endl;
	enrolmentDataFile.close();
}


//function to compute final mark
double calculateFinalMark(double ca, double caRate, double exam, double examRate) {
	return  ca * caRate + exam * examRate;
}

//function to compute letter grade
std::string getLetterGrade(double mark) {

	if ((mark >= 89.5) && (mark <= 100))
		return "A+";
	else if ((mark >= 84.5) && (mark < 89.5))
		return "A";
	else if ((mark >= 79.5) && (mark < 84.5))
		return "A-";
	else if ((mark >= 74.5) && (mark < 79.5))
		return "B+";
	else if ((mark >= 69.5) && (mark < 74.5))
		return "B";
	else if ((mark >= 64.5) && (mark < 69.5))
		return "C+";
	else if ((mark >= 59.5) && (mark < 64.5))
		return "C";
	else if ((mark >= 54.5) && (mark < 59.5))
		return "D+";
	else if ((mark >= 49.5) && (mark < 54.5))
		return "D";
	else if ((mark >= 44.5) && (mark < 49.5))
		return "E+";
	else if ((mark >= 39.5) && (mark < 44.5))
		return "E";
	else if ((mark >= 34.5) && (mark < 39.5))
		return "F+";
	else
		return "F";
}

void generateStudentReports(const char* studFile, const char* courseFile, const char* enrolmentFile, const char* reportFileName)
{
	std::cout << "Generating report. Wait...... " << std::endl;
	//open output file for writing
	std::ofstream reportDataFile;
	reportDataFile.open(reportFileName, std::ios::out);


	/**********************    START PROCESSING STUDENTS DATA FILE  **********************/
	std::ifstream studentsDataFile;
	studentsDataFile.open(studFile, std::ios::in);


	//remove header line from students data file
	std::string str;
	getline(studentsDataFile, str);

	//Loop : read and process data from students data file
	while (getline(studentsDataFile, str))
	{
		std::istringstream studLineSS(str);


		//declare strings for student sid, surname and firstname
		std::string sid, surname, firstname;

		//read and write student sid, surname and firstname 
		studLineSS >> sid >> surname >> firstname;

		reportDataFile << "\n\nStudent Identity Number: " << sid
			<< "\nStudent Surname        : " << surname
			<< "\nStudent Firstname      : " << firstname << std::endl;

		//add report heading
		reportDataFile << "=====================================================================================" << std::endl;
		reportDataFile << std::setw(10) << std::left << "CID"
			<< std::setw(40) << "TITLE"
			<< std::setw(10) << "CA"
			<< std::setw(10) << "EXAM"
			<< std::setw(10) << "FINAL"
			<< std::setw(3) << "GRADE";
		reportDataFile << "\n=====================================================================================" << std::endl;


		//initial totals
		double student_enrolment_count = 0;
		double student_ca_total = 0;
		double student_exam_total = 0;
		double  student_finalmark_total = 0.0;

		/**********************    START PROCESSING COURSES DATA FILE  **********************/


		//open courses file for reading
		std::ifstream coursesDataFile;
		coursesDataFile.open(courseFile, std::ios::in);

		//remove header line from courses data file
		std::string course_str;
		getline(coursesDataFile, course_str);

		// initialize CSV separator character/symbol
		char csvSeparatorChar = ',';

		//Loop: read and process data from courses data file
		while (getline(coursesDataFile, course_str))
		{
			std::istringstream courseLineSS(course_str);


			//declare variables for cid and title
			std::string cid, title;
			//std::string caRateStr, examRateStr; //to be read as strings


			//read  cid, title upto separator;
			getline(courseLineSS, cid, csvSeparatorChar);
			getline(courseLineSS, title, csvSeparatorChar);

			// read caRate as string and convert to double
			std::string caRateString;  //use getline() to read caRate as string not double 
			getline(courseLineSS, caRateString, csvSeparatorChar);
			//convert string caRateString to double caRate
			//========================
			std::istringstream caRateSS(caRateString);
			double caRate = 0.0;
			caRateSS >> caRate;
			//========================

			// read examRate as string and convert to double
			// read caRate as string and convert to double
			std::string examRateString;  //use getline() to read caRate as string not double 
			getline(courseLineSS, examRateString, csvSeparatorChar);
			//convert string examRateString to double examRate
			//========================
			std::istringstream examRateSS(examRateString);
			double examRate = 0.0;
			examRateSS >> examRate;
			//========================


			/**********************    START PROCESSING ENROLMENT DATA FILE  **********************/


		//open enrolment file for reading
			std::ifstream enrolmentDataFile;
			enrolmentDataFile.open(enrolmentFile, std::ios::in);

			//remove header line from courses data file
			std::string enrolment_str;
			getline(enrolmentDataFile, enrolment_str);

			//Loop: read and process data from enrolment data file

			while (getline(enrolmentDataFile, enrolment_str))
			{
				std::istringstream enrolmentLineSS(enrolment_str);


				//read cid, sid, caMark, examMark
				std::string enrolment_cid, enrolment_sid;
				double caMark = 0.0;
				double examMark = 0.0;
				enrolmentLineSS >> enrolment_cid >> enrolment_sid >> caMark >> examMark;

				//calculate final mark
				double finalMark = calculateFinalMark(caMark, caRate, examMark, examRate);

				//determine grade
				std::string grade = getLetterGrade(finalMark);

				//write details if matching record found and increment totals
				if ((enrolment_cid == cid) && (enrolment_sid == sid)) {

					reportDataFile << std::setw(10) << std::left << enrolment_cid
						<< std::setw(40) << title
						<< std::setw(10) << caMark
						<< std::setw(10) << examMark
						<< std::fixed << std::setw(10) << std::setprecision(0) << finalMark
						<< std::setw(3) << grade
						<< std::endl;

					//increment totals
					student_enrolment_count += 1;
					student_ca_total += caMark;
					student_exam_total += examMark;
					student_finalmark_total += finalMark;
				}

			}
			//close enrolment data files
			enrolmentDataFile.close();

			/**********************    END PROCESSING ENROLMENT DATA FILE    **********************/
		}
		//close course data file
		coursesDataFile.close();

		/**********************    END PROCESSING COURSES DATA FILE  **********************/


		//add overall line
		reportDataFile << "=====================================================================================" << std::endl;
		reportDataFile << std::setw(50) << std::left << "OVERALL AVERAGE";
		double overall_ca = 0.0;
		if (student_enrolment_count > 0)
			overall_ca = student_ca_total * 1.0 / student_enrolment_count;

		double overall_exam = 0.0;
		if (student_enrolment_count > 0)
			overall_exam = student_exam_total * 1.0 / student_enrolment_count;

		double overall_finalMark = 0.0;
		if (student_enrolment_count > 0)
			overall_finalMark = student_finalmark_total * 1.0 / student_enrolment_count;

		reportDataFile << std::fixed << std::setw(10) << std::setprecision(0) << overall_ca;
		reportDataFile << std::fixed << std::setw(10) << std::setprecision(0) << overall_exam;
		reportDataFile << std::fixed << std::setw(10) << std::setprecision(0) << overall_finalMark;
		reportDataFile << std::setw(10) << getLetterGrade(overall_finalMark);
		reportDataFile << "\n=====================================================================================" << std::endl;

	}
	//close student data file
	studentsDataFile.close();
	/**********************    END PROCESSING STUDENTS DATA FILE  **********************/

	//close report data file
	reportDataFile.close();

	return;
}


//function to generate course summary
void generateCourseSummaryReport(const char* courseFile, const char* enrolmentFile)
{
	std::cout << std::left << "\n\n COURSE SUMMARY STATITICS \n";
	std::cout << std::left << "========================== \n";
	// write heading
	std::cout << "\n=========================================================================================" << std::endl;
	std::cout << std::setw(10) << std::left << "CID"
		<< std::setw(45) << "TITLE"
		<< std::setw(20) << "NUMBER OF STUDENTS"
		<< std::setw(20) << "COURSE AVERAGE";
	std::cout << "\n=========================================================================================" << std::endl;



	//initial total number of enrolments
	int total_number_of_enrolments = 0;



	/**********************    START PROCESSING COURSES DATA FILE  **********************/

	//open courses file for reading
	std::ifstream coursesDataFile;
	coursesDataFile.open(courseFile, std::ios::in);

	//remove header line from courses data file
	std::string course_str;
	getline(coursesDataFile, course_str);

	// initialize CSV separator character/symbol
	char csvSeparatorChar = ',';

	//Loop and read and process data from courses data file

	while (getline(coursesDataFile, course_str))
	{
		std::istringstream courseLineSS(course_str);


		//declare variables for cid, title, caRate, examRate
		std::string cid, title;
		//std::string caRateStr, examRateStr; //to be read as strings


		//read  cid, title, caRate, examRate including separator (,);
		getline(courseLineSS, cid, csvSeparatorChar);
		getline(courseLineSS, title, csvSeparatorChar);

		// read caRate as string and convert to double
		std::string caRateString;  //use getline() to read caRate as string not double 
		getline(courseLineSS, caRateString, csvSeparatorChar); //getline returns string-- need to convert to double
		//convert string ratePerHourString to double ratePerHour
		//========================
		std::istringstream caRateSS(caRateString);
		double caRate = 0.0;
		caRateSS >> caRate;
		//========================

		// read examRate as string and convert to double
		// read caRate as string and convert to double
		std::string examRateString;  //use getline() to read caRate as string not double 
		getline(courseLineSS, examRateString, csvSeparatorChar); //getline returns string-- need to convert to double
		//convert string ratePerHourString to double ratePerHour
		//========================
		std::istringstream examRateSS(examRateString);
		double examRate = 0.0;
		examRateSS >> examRate;
		//========================


		/**********************    START PROCESSING ENROLMENT DATA FILE  **********************/
		//initial totals
		int enrolment_count = 0;
		double enrolment_finalmark_total = 0.0;

		//open courses file for reading
		std::ifstream enrolmentDataFile;
		enrolmentDataFile.open(enrolmentFile, std::ios::in);

		//remove header line from courses data file
		std::string enrolment_str;
		getline(enrolmentDataFile, enrolment_str);

		//Loop and read and process data from courses data file

		while (getline(enrolmentDataFile, enrolment_str))
		{
			std::istringstream enrolmentLineSS(enrolment_str);


			//read cid, sid, caMark, examMark
			std::string enrolment_cid, enrolment_sid;
			double caMark = 0.0;
			double examMark = 0.0;
			enrolmentLineSS >> enrolment_cid >> enrolment_sid >> caMark >> examMark;





			//if matching records found --> increment totals
			if (enrolment_cid == cid) {

				//increment course enrolment count
				enrolment_count += 1;

				//calculate final mark
				double finalMark = calculateFinalMark(caMark, caRate, examMark, examRate);

				//increment enrolment final mark total by final mark
				enrolment_finalmark_total += finalMark;
			}
		}
		/**********************    END PROCESSING ENROLMENT DATA FILE    **********************/

		//increment total number of enrolments
		total_number_of_enrolments += enrolment_count;

		//write details 
		double course_average = 0.0;
		if (enrolment_count > 0)
			course_average = enrolment_finalmark_total / enrolment_count;

		std::cout << std::setw(10) << std::left << cid
			<< std::setw(45) << title
			<< std::setw(20) << enrolment_count
			<< std::fixed << std::setw(5) << std::right << std::setprecision(2) << course_average
			<< std::endl;

		//close enrolment data files
		enrolmentDataFile.close();


	}
	//close course data file
	coursesDataFile.close();
	/**********************    END PROCESSING COURSES DATA FILE  **********************/

	// write totals number of students
	std::cout << "\n=========================================================================================" << std::endl;
	std::cout << std::setw(55) << std::left << "NUMBER OF STUDENTS"
		<< std::setw(20) << total_number_of_enrolments;
	std::cout << "\n=========================================================================================" << std::endl;




	return;
}
