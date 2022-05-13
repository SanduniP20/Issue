#include "issue.h"
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  Issue * issue1= new Issue("System is not responding.");
  issue1 ->setIssueID("I001");
  issue1 ->displayIssueDetails();

  delete issue1;
}

