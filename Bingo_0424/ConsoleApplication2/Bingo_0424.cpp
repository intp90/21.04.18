
#include <iostream>
#include <time.h>
#include <Windows.h>


int main()
{
	std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
	srand(time(NULL));
	int Bingo[25] = {0,};
	for (int i = 0; i < 25; ++i)
	{
		Bingo[i] = i + 1;
	}
	
	while (true)
	{
		for (int i = 0; i < 25; ++i)
		{
			if (i % 5 == 0)
			{
				std::cout << std::endl;
			}

			int Random = rand() % 25 + 1;
			for (int j = 0; j < i; j++)
			{
				if (Random == Bingo[j])
				{
					Random = rand() % 25 + 1;
					j = -1;
				}
			}
			std::cout << "[" << Random << "]\t";
			Bingo[i] = Random;
		}

		for (int i = 0; i < 100; ++i)
		{	
			int X = 0;
			std::cout << std::endl << std::endl;
			std::cout << "빙고 완성 [";
			if (Bingo[0] == -1 and Bingo[1] == -1 and Bingo[2] == -1 and Bingo[3] == -1 and Bingo[4] == -1)
			{
				X = X + 1;
			}
#pragma region 12빙고까지 반복
			if (Bingo[5] == -1 and Bingo[6] == -1 and Bingo[7] == -1 and Bingo[8] == -1 and Bingo[9] == -1)
			{
				X = X + 1;
			}
			if (Bingo[10] == -1 and Bingo[11] == -1 and Bingo[12] == -1 and Bingo[13] == -1 and Bingo[14] == -1)
			{
				X = X + 1;
			}
			if (Bingo[15] == -1 and Bingo[16] == -1 and Bingo[17] == -1 and Bingo[18] == -1 and Bingo[19] == -1)
			{
				X = X + 1;
			}
			if (Bingo[20] == -1 and Bingo[21] == -1 and Bingo[22] == -1 and Bingo[23] == -1 and Bingo[24] == -1)
			{
				X = X + 1;
			}
			if (Bingo[0] == -1 and Bingo[5] == -1 and Bingo[10] == -1 and Bingo[15] == -1 and Bingo[20] == -1)
			{
				X = X + 1;
			}
			if (Bingo[1] == -1 and Bingo[6] == -1 and Bingo[11] == -1 and Bingo[16] == -1 and Bingo[21] == -1)
			{
				X = X + 1;
			}
			if (Bingo[2] == -1 and Bingo[7] == -1 and Bingo[12] == -1 and Bingo[17] == -1 and Bingo[22] == -1)
			{
				X = X + 1;
			}
			if (Bingo[3] == -1 and Bingo[8] == -1 and Bingo[13] == -1 and Bingo[18] == -1 and Bingo[23] == -1)
			{
				X = X + 1;
			}
			if (Bingo[4] == -1 and Bingo[9] == -1 and Bingo[14] == -1 and Bingo[19] == -1 and Bingo[24] == -1)
			{
				X = X + 1;
			}
			if (Bingo[0] == -1 and Bingo[6] == -1 and Bingo[12] == -1 and Bingo[18] == -1 and Bingo[24] == -1)
			{
				X = X + 1;
			}
			if (Bingo[4] == -1 and Bingo[8] == -1 and Bingo[12] == -1 and Bingo[16] == -1 and Bingo[20] == -1)
			{
				X = X + 1;
			}
			    
#pragma endregion
			std::cout << X << "]";
			if (Bingo[0] == -1 and Bingo[1] == -1 and Bingo[2] == -1 and Bingo[3] == -1 and Bingo[4] == -1 and
				Bingo[5] == -1 and Bingo[6] == -1 and Bingo[7] == -1 and Bingo[8] == -1 and Bingo[9] == -1 and
				Bingo[10] == -1 and Bingo[11] == -1 and Bingo[12] == -1 and Bingo[13] == -1 and Bingo[14] == -1 and
				Bingo[15] == -1 and Bingo[16] == -1 and Bingo[17] == -1 and Bingo[18] == -1 and Bingo[19] == -1 and
				Bingo[20] == -1 and Bingo[21] == -1 and Bingo[22] == -1 and Bingo[23] == -1 and Bingo[24] == -1)
			{
				Sleep(1000);
				system("cls");
				std::cout << "\n\n\t   빙고를 모두 맞췄습니다!";
				int End;
				std::cin >> End;
			}

			int Input = 0;
			std::cout << std::endl << std::endl;
			std::cout << "숫자를 고르세요. : ";
			std::cin >> Input;

			if (Input == Bingo[0])
			{
				system("cls");
				Bingo[0] = -1;
				std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
				std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
					<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
					<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
					<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
					<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
#pragma region 25까지 반복
			else if (Input == Bingo[1])
			{
				system("cls");
				Bingo[1] = -1;
				std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
				std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
					<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
					<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
					<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
					<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[2])
			{
				system("cls");
				Bingo[2] = -1;
				std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
				std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
					<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
					<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
					<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
					<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[3])
			{
				system("cls");
				Bingo[3] = -1;
				std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
				std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
					<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
					<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
					<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
					<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[4])
			{
				system("cls");
				Bingo[4] = -1;
				std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
					std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
					<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
					<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
					<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
					<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[5])
			{
				system("cls");
				Bingo[5] = -1;
				std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
				std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
					<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
					<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
					<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
					<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[6])
			{
				system("cls");
				Bingo[6] = -1;
				std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
				std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
					<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
					<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
					<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
					<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[7])
			{
				system("cls");
				Bingo[7] = -1;
				std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
				std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
					<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
					<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
					<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
					<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[8])
			{
				system("cls");
				Bingo[8] = -1;
				std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
				std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
					<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
					<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
					<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
					<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[9])
			{
				system("cls");
				Bingo[9] = -1;
				std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
				std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
					<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
					<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
					<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
					<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[10])
			{
			system("cls");
			Bingo[10] = -1;
			std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
			std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
				<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
				<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
				<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
				<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[11])
			{
			system("cls");
			Bingo[11] = -1;
			std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
			std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
				<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
				<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
				<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
				<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[12])
			{
			system("cls");
			Bingo[12] = -1;
			std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
			std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
				<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
				<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
				<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
				<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[13])
			{
			system("cls");
			Bingo[13] = -1;
			std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
			std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
				<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
				<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
				<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
				<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[14])
			{
			system("cls");
			Bingo[14] = -1;
			std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
			std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
				<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
				<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
				<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
				<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[15])
			{
			system("cls");
			Bingo[15] = -1;
			std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
			std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
				<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
				<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
				<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
				<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[16])
			{
			system("cls");
			Bingo[16] = -1;
			std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
			std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
				<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
				<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
				<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
				<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[17])
			{
			system("cls");
			Bingo[17] = -1;
			std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
			std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
				<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
				<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
				<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
				<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[18])
			{
			system("cls");
			Bingo[18] = -1;
			std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
			std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
				<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
				<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
				<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
				<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[19])
			{
			system("cls");
			Bingo[19] = -1;
			std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
			std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
				<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
				<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
				<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
				<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[20])
			{
			system("cls");
			Bingo[20] = -1;
			std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
			std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
				<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
				<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
				<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
				<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[21])
			{
			system("cls");
			Bingo[21] = -1;
			std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
			std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
				<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
				<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
				<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
				<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[22])
			{
			system("cls");
			Bingo[22] = -1;
			std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
			std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
				<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
				<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
				<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
				<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[23])
			{
			system("cls");
			Bingo[23] = -1;
			std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
			std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
				<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
				<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
				<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
				<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
			else if (Input == Bingo[24])
			{
			system("cls");
			Bingo[24] = -1;
			std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
			std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
				<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
				<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
				<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
				<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}
#pragma endregion
			

			else if (Input > 25)
			{
				std::cout << std::endl;
				std::cout << "없는 숫자입니다.";
				Sleep(1000);
				system("cls");
				std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
				std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
					<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
					<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
					<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
					<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}

			else
			{
			std::cout << std::endl;
			std::cout << "이미 선택한 숫자입니다.";
			Sleep(1000);
			system("cls");
			std::cout << std::endl << "\t   *빙고 게임*" << std::endl;
			std::cout << std::endl << "[" << Bingo[0] << "]\t" << "[" << Bingo[1] << "]\t" << "[" << Bingo[2] << "]\t" << "[" << Bingo[3] << "]\t" << "[" << Bingo[4] << "]\n"
				<< "[" << Bingo[5] << "]\t" << "[" << Bingo[6] << "]\t" << "[" << Bingo[7] << "]\t" << "[" << Bingo[8] << "]\t" << "[" << Bingo[9] << "]\n"
				<< "[" << Bingo[10] << "]\t" << "[" << Bingo[11] << "]\t" << "[" << Bingo[12] << "]\t" << "[" << Bingo[13] << "]\t" << "[" << Bingo[14] << "]\n"
				<< "[" << Bingo[15] << "]\t" << "[" << Bingo[16] << "]\t" << "[" << Bingo[17] << "]\t" << "[" << Bingo[18] << "]\t" << "[" << Bingo[19] << "]\n"
				<< "[" << Bingo[20] << "]\t" << "[" << Bingo[21] << "]\t" << "[" << Bingo[22] << "]\t" << "[" << Bingo[23] << "]\t" << "[" << Bingo[24] << "]\n";
			}


		}
	}



		return 0;
}
