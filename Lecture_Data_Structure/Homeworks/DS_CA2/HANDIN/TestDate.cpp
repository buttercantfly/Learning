/**
 * Briefly explain the function of this class->
 *
 * @author 			游振彤
 * @ID 				  b08505018
 * @Department 		Engineering Science and Ocean Engineering
 * @Affiliation 	National Taiwan University
 *
 * TestDate.cpp
 * version 1.0
 */


#include "Date.h"
#include "Date.cpp"


  int main() {
    cout << "\nTesting constructors->";
    Date* d1 = new Date(1, 1, 1);
    cout << "\nDate should be 1/1/1: " << d1->toString();
    delete d1;
    d1 = new Date("2/29/2000");
    cout << "\nDate should be 2/29/2000: " << d1->toString();
    delete d1;
    d1 = new Date("2/29/1904");
    cout << "\nDate should be 2/29/1904: " << d1->toString();
    delete d1;
    d1 = new Date(12, 31, 1975);
    cout << "\nDate should be 12/31/1975: " << d1->toString();
    Date* d2 = new Date("1/1/1976");
    cout << "\nDate should be 1/1/1976: " << d2->toString();
    Date* d3 = new Date("1/2/1976");
    cout << "\nDate should be 1/2/1976: " << d3->toString();

    Date* d4 = new Date("2/27/1977");
    Date* d5 = new Date("8/31/2110");

    cout << "\n\nTesting the isLeapYear function->" ;
    Date runner = Date("1/15/2000");
    cout << "\n" << "AC 2000" << " is a leap year? should be true: " << runner.isLeapYear(2000);
    cout << "\n" << "AC 100" << " is a leap year? should be false: " << runner.isLeapYear(100);
    cout << "\n" << "AC 5" << " is a leap year? should be false " << runner.isLeapYear(5);

    cout << "\n\nTesting before, after and equal->";
    cout << "\n" << d2->toString() << " after " << d1->toString() << " should be true: " << d2->isAfter(*d1);
    cout << "\n" << d3->toString() << " after " << d2->toString() << " should be true: " << d3->isAfter(*d2);
    cout << "\n" << d1->toString() << " after " << d1->toString() << " should be false: " << d1->isAfter(*d1);
    cout << "\n" << d1->toString() << " after " << d2->toString() << " should be false: " << d1->isAfter(*d2);
    cout << "\n" << d2->toString() << " after " << d3->toString() << " should be false: " << d2->isAfter(*d3);

    cout << "\n\n" << d1->toString() << " before " << d2->toString() << " should be true: " << d1->isBefore(*d2);
    cout << "\n" << d2->toString() << " before " << d3->toString() << " should be true: " << d2->isBefore(*d3);
    cout << "\n" << d1->toString() << " before " << d1->toString() << " should be false: " << d1->isBefore(*d1);
    cout << "\n" << d2->toString() << " before " << d1->toString() << " should be false: " << d2->isBefore(*d1);
    cout << "\n" << d3->toString() << " before " << d2->toString() << " should be false: " << d3->isBefore(*d2);
                       
    cout << "\n\n" << d2->toString() << " equal " << d3->toString() << " should be false: " << d2->isEqual(*d3);
    cout << "\n" << d5->toString() << " equal " << d5->toString() << " should be true: " << d5->isEqual(*d5);
    cout << "\n" << d1->toString() << " equal " << d4->toString() << " should be false: " << d1->isEqual(*d4);

    cout << "\n\nTesting dayinYear d1 " << d1->dayInYear();
    cout << "\nTesting dayinYear d2 " << d2->dayInYear();
    cout << "\nTesting dayinYear d3 " << d3->dayInYear();
    cout << "\nTesting dayinYear d4 " << d4->dayInYear();

    cout << "\n\nTesting difference->";
    cout << "\n" << d1->toString() << " - " << d1->toString() << " should be 0: " << d1->difference(*d1);
    cout << "\n" << d2->toString() << " - " << d1->toString() << " should be 1: " << d2->difference(*d1);
    cout << "\n" << d3->toString() << " - " << d1->toString() << " should be 2: " << d3->difference(*d1);
    cout << "\n" << d3->toString() << " - " << d4->toString() << " should be -422: " << d3->difference(*d4);
    cout << "\n" << d5->toString() << " - " << d4->toString() << " should be 48762: " << d5->difference(*d4);

    cout << "\n\nTesting the isValidDate function->\n" ;
    Date tester(30,30,100);
    
    return 0;
  }