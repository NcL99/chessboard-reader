//Name= Nicholas Lloyd
//Lab501

#include "project1.h"



//_________________________________________________________________________

//function definition:

position readPosition(string s)
{
	row myrow(8, "e");
	string puzz = s;
	position boardpos(8, myrow);
	int puzzsize = puzz.length();
	while(puzzsize > 0)
	{
		if (puzz[puzz.length()-puzzsize] == ' ')
		{
			puzzsize--;
		}
		else
		{
			char file = puzz[puzz.length()-(puzzsize-3)];
			int filepos;
			if(file == 'a')
			{
				filepos = 0;
			}
			else if(file == 'b')
			{
				filepos = 1;
			}
			else if(file == 'c')
			{
				filepos = 2;
			}
			else if(file == 'd')
			{
				filepos = 3;
			}
			else if(file == 'e')
			{
				filepos = 4;
			}
			else if(file == 'f')
			{
				filepos = 5;
			}
			else if(file == 'g')
			{
				filepos = 6;
			}
			else if(file == 'h')
			{
				filepos = 7;
			}
			char rank = puzz[puzz.length()-(puzzsize-2)];
			int rankpos;
			if(rank == '1')
			{
				rankpos = 0;
			}
			else if(rank == '2')
			{
				rankpos = 1;
			}
			else if(rank == '3')
			{
				rankpos = 2;
			}
			else if(rank == '4')
			{
				rankpos = 3;
			}
			else if(rank == '5')
			{
				rankpos = 4;
			}
			else if(rank == '6')
			{
				rankpos = 5;
			}
			else if(rank == '7')
			{
				rankpos = 6;
			}
			else if(rank == '8')
			{
				rankpos = 7;
			}
			string piecestring = string() + puzz[puzz.length()-puzzsize] + puzz[puzz.length()-(puzzsize-1)];
			boardpos[rankpos][filepos] = (piecestring);
			puzzsize = puzzsize - 4;
		}
	}
	return boardpos;
}
//_________________________________________________________________________