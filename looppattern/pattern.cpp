#include <iostream>

void square_pattern(int n)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << "* ";
			for (int j = 0; j < i * 2 + 1; j++)
			{
				std::cout << "*";
			}
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
}

void right_angle_pattern(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= i + 1; j++)
		{
			std ::cout << "* ";
		}
		std::cout << std::endl;
	}
};

void numer_right_angle_pattern(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= i + 1; j++)
		{
			std::cout << j << " ";
		}
		std::cout << std::endl;
	}
};

// 1 22 333 4444 55555 this patter
void i_in_jloop(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}
};

// reversing each upper loop except square loop

// rightangle reverse loop

void right_ange_reverse_loop(int n)
{
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << "* ";
		}
		std::cout << std::endl;
	}
}

// right angle with 1 12 123 1234 12345

void right_angle_reverse_number(int n)
{
	for (int i = 5; i > 0; i--)
	{
		for (int j = 1; j < i + 1; j++)
		{
			std::cout << j << " ";
		};
		std::cout << std::endl;
	}
}

// right anngle reverse with this  55555 4444 333 22 1 like that

void reverse_i_to_jloop(int n)
{
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}
}

// pattern start pyramid pattern

// *
// * * *
// * * * * *
// * * * * * * *

// first see how many row it print so it a 5 tha see how many colum it print 9 and than see what the print so it print 3 space than * in next line 2 space than 3 * than in 3 line 1 space but print 5* like that
// so this type of question you have to identofied how mnay space and how mnay main item you have to print that you have to find

//  4 space     *      than 4 space
// 3 space    * * *    than 3 space
// 2 space   * * * * *   than 2 space
// 1 space  * * * * * * *  than 1 space
// 0 space * * * * * * * * * than 0 space

// n = 5  and you see left space is n - i = 0 - 1
// here 5 - 0 -1 = 4 and 5 -1 -1 = 3 and 5 - 2 -1 = 2 and 5 - 3 -1 = 1 and 5 - 4 -1 = 0 so fprmula depend on i n - i -1

// s o formula from printing * becuas eit increae in odd order so i need to print * in odd order from taking the uppper loop i

// so if we see  so formule is like if =0 if j < i*2 +1

//  j < i*2 + 1
// ler see example id i = 0 so 0 *2 +1 = 1 and if i = 1 than i*2 + 1 = 3__ and if i = 2 than i*2 + 1 = 5__ and if i = 3 than i*2 + 1 = 7__ and if i = 4 than i*2 + 1 = 9__ so this is the formula for printing *

// so we get   the pattern

void pyramidPattern(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int s = 0; s < n - i - 1; s++)
		{
			std::cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++)
		{
			std::cout << "*";
		}
		std ::cout << std::endl;
	}
}
// note here this i smy way wehn i do it with reverse i mkae middle element in reverse easily but fil to create space in 1 2 3 4 order it easy
// if i = 0 i < n and second loop depen on i than we create spaces we have to build middle pint star statmenet

// 0 - 0 , 9 , 0
// 1 - 1 , 7 , 1
// 2 - 2 , 5 , 2
// 3 - 3 , 3 , 3

// here i am doing with reverse i am able to make middle loop but fail to build space in 1 2 3 4 order for if it is normal way so we can build space for miidle loop we have to use formula 2n - 2-i +1

// let n = 5
// 2*5 - 2 * 0 + 1 = 9
// 2*5 - 2 * 1 + 1 = 7
// 2*5 - 2 * 2 + 1 = 5
// 2*5 - 2 * 3 + 1 = 3
// 2*5 - 2 * 4 + 1 = 1

void stiver_reverse_pyramid(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std ::cout << " ";
		}
		// let build middle loop from formaulr 2 n - 2*i + 1
		for (int k = 0; k < 2 * n - 2 * i - 1; k++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}

void reverse_pyramidPAttern(int n)
{
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < n - i; j++)
		{
			std::cout << " ";
		}

		for (int k = 0; k < i * 2 - 1; k++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
};

// my cobination of pyramid and reverse of pyramid pattern

void combination_pyramid_pattern(int n)
{
	int bp = n / 2;
	int cpb = 0;
	// reverse_pyramidPAttern(bp);
	while (cpb < n)
	{
		if (cpb == bp)
		{
			reverse_pyramidPAttern(bp);
			break;
		}
		else
		{
			pyramidPattern(bp);
			cpb = bp;
		}
	}
};

// striver cobination pyramid

void stiver_revese_right_pyramid(int n, int loop)
{
	int l = loop;

	for (int i = 0; i < l; i++)
	{
		pyramidPattern(i);
		reverse_pyramidPAttern(i);
		// that it why creating a if else base like my
	}
}

// here we are splitong n but n is normal 5 it mean n in right and n also in revese not need to split n /2 actual we call diffrent loop continiou or callingt the loop one by one hwy if else loop just sime call right(5) everse(5) that it why revese loop
void cobination_of_right_angle_patten_with_star(int n)
{
	int i = n / 2; // here n is full for revese as well right
	int j = 0;

	while (j < n)
	{
		if (j == i)
		{
			right_ange_reverse_loop(i - 1);
			break;
		}
		else
		{
			right_angle_pattern(i);
			j = i;
		}
	}
}

// stiver reverse right angle without usig any previous loop

// first count no of row it is 9 and i = 1 2 3 4 5 and so one so we have to deside where we break  print right start to revese with

void striver_right_angle_reverse(int n)
{
	// n =5 we have to see diffrently beause n is alway = 5 we have to decide it how mnay time outr loop have to run so in pic you we see for 5 is 9 iteration
	for (int i = 0; i <= 2 * n - 1; i++)
	{
		int start = i;
		if (i > n)
			start = 2 * n - i; // here naswer like i =  6 n = 5 so 2*5 - 6 = 4 so 4 is the answer
		for (int j = 1; j <= start; j++)
		{
			std ::cout << "* ";
		}
		std::cout << std::endl;
	}
}

//  this could we very much inspired by stiver upper patern we have to condionaly rendere in running loop

//  this is my way whichi sprintinsimiar way but not exactely

void binary_right_angle_number(int n)
{
	// n = 5
	for (int i = 0; i < n; i++)
	{
		bool ok = true; // false mean print 0 and 1 mean true
		for (int j = 0; j < i; j++)
		{
			std::cout << (ok ? 1 : 0);
			ok = !ok;
		}
		std::cout << std::endl;
	}
}

void stiver_right_angle_number(int n)
{
	// here what you have to sind pattern in row so you we see if it even row it always start with one for odd it start with 0
	// so we can say we gere a loop who decide from where i have to start
	int start = 0;
	// bool ok = start;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			start = 1;
		else
			start = 0;
		for (int j = 0; j <= i; j++)
		{
			std::cout << start ;
			start = !start ;

			// std::cout << std::endl;
		}
		std::cout << std::endl;
	}
}
int main()
{
	// patter mean nested loop
	// outerloop decide no of line 5
	// inner loop alway focus on coloum and connect tem som eone to row
	// print them them inside the inner for loop
	// observer symetry of optional choice
	int n;
	std::cin >> n;

	square_pattern(n);
	std::cout << "---------------------------------------------------------" << std::endl;
	right_angle_pattern(n);
	std::cout << "---------------------------------------------------------" << std::endl;
	numer_right_angle_pattern(n);
	std::cout << "---------------------------------------------------------" << std::endl;
	i_in_jloop(n);
	std::cout << "---------------------------------------------------------" << std::endl;
	right_ange_reverse_loop(n);
	std::cout << "---------------------------------------------------------" << std::endl;
	right_angle_reverse_number(n);
	std::cout << "---------------------------------------------------------" << std::endl;
	reverse_i_to_jloop(n);

	// ----------------------------

	pyramidPattern(5);
	// print stiver revesre pyramid
	std::cout << "-------------------------------------------------------" << std::endl;

	stiver_reverse_pyramid(5);
	std::cout << "my revesre pyramid pattern \n"
			  << std::endl;
	reverse_pyramidPAttern(5);

	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "my reverse way to print pattern " << std::endl;
	combination_pyramid_pattern(20);

	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "my combination of right angle pattern with star" << std::endl;
	cobination_of_right_angle_patten_with_star(20);

	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << "stiver way to complete this right angle reverse loop \n"
			  << std::endl;
	striver_right_angle_reverse(5);

	std::cout << "-------------------------------------------------------" << std::endl;
	std::cout << " my way to do it binary right angle number pattern" << std::endl;
	binary_right_angle_number(5);
	std::cout << "stiver plus my way join" << std::endl;
	stiver_right_angle_number(6);
	return 0;
}
