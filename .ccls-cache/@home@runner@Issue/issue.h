#include<iostream>
#include<cstring>
using namespace std;
class Issue
{
private:
char issueID[10];
char comment[100];


public:
Issue(const char com[]);
void setIssueID(const char isID[]);
void displayIssueDetails();
~Issue();
};