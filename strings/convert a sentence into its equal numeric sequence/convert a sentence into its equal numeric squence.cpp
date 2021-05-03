//this is the question of conversion of a given string to its corresponding numeric keypad value
// nokia old phones keypad had these
//  1- nothing  2-abc  3-def 
//	4-ghi  		5-jkl  6-mno 
// 	7-pqrs 		8-tuv  9-wxyz
//this is the order //lets start with our program
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
//we need to take an input string from the user
string s;
getline(cin,s); //use getline functipn as because the string might contain spaces
//create an output empty string to store the value
string op="";
//create a string array to map each character to its corresponding numeric typing
//like if u wish to type -efg ur output will be 33 for e 333 for f and 5 for g -op:333335
string numeric[] ={"2","22","222",
				
				  "3","33","333",
				  "4","44","444",
				  "5","55","555",
				  "6","66","666",
				  "7","77","777","7777",
				  "8","88","888",
				  "9","99","999","9999",
				};
//run a loop while s[i] not equal to '\0'			
for(int i=0;i<s.length();i++)
{   
    if(s[i]== ' ') //if i encounter space simple add 0 to the output string
     op += "0";
	int mapping=s[i]-'a';// pick up each character (for small letters )- and subtract 'a' to match the numeric index : ex: b-should match numeric[1] 
	// ascii value of small b- ascii of 'a' gives the required index
	op += numeric[mapping];
	//now add the string in the mapped index to the output
}
cout<<op<<endl; //print the output




}