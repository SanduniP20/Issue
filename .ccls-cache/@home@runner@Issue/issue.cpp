#include "issue.h"
#include<iostream>
#include<cstring>
using namespace std;
Issue::Issue(const char com[])
{
  strcpy(comment,com);
}
void Issue::setIssueID(const char isID[])
{
  strcpy(issueID,isID);
}
void Issue::displayIssueDetails()
{
  cout<<"Issue id:"<<issueID<<endl;
  cout<<"Issue comment:"<<comment<<endl;
}
Issue::~Issue()
{
  cout<<"Destructor called issue ID "<<issueID<<" and Issue comment "<<comment<<endl;
}
