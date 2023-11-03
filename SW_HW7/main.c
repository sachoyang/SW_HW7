#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>

char* Det_OL();
bool Det_DE();
void Cleaner(char* command);
void Move_Foward();
void Turn_Left();
void Turn_Right();
void Move_Backward();
void Stop();

void main() 
{
	char* obstacle_Location;
	bool dust_Existence;

	Move_Foward();
	Cleaner("on");

	while (1)
	{
		obstacle_Location = Det_OL();	//FLR
		dust_Existence = Det_DE();

		if(strcmp(obstacle_Location, "100") == 0 || strcmp(obstacle_Location, "101") == 0)
		{
			Cleaner("off");
			Turn_Left();
		}
		else if (strcmp(obstacle_Location, "110"))
		{
			Cleaner("off");
			Turn_Right();
		}
		else if (strcmp(obstacle_Location, "111"))
		{
			Stop();
			Cleaner("off");
			Move_Backward();
		}
		else
		{
			if (dust_Existence)
			{
				Cleaner("up");
			}
			else
			{
				Cleaner("on");
			}
			Move_Foward();
		}
		Sleep(200); // 200 �и��� ���
	}
}

char* Det_OL()
{
	// Det_OL_F() �� Det_OL_L(), Det_OL_R()�� ����� ���Ͽ� ���ڿ��� ��ȯ
	char* result = (char*)malloc(4); // �޸� �Ҵ�
	snprintf(result, 4, "%d%d%d", Det_OL_F(), Det_OL_L(), Det_OL_R());
	return result;
}
int Det_OL_F()	// 
{
	int F;
	return F;
}
int Det_OL_L()	// 
{
	int L;
	return L;
}
int Det_OL_R()	// 
{
	int R;
	return R;
}

bool Det_DE()
{
	bool de;
	return de;
}

void Cleaner(char* command)
{
	if (strcmp(command, "on") == 0)
	{
		// "on"�� ���� ���� ����
	}
	else if (strcmp(command, "off") == 0)
	{
		// "off"�� ���� ���� ����
	}
	else if (strcmp(command, "up") == 0)
	{
		// "up"�� ���� ���� ����
	}
}

void Move_Foward()
{

}

void Turn_Left()
{

}

void Turn_Right()
{

}

void Move_Backward()
{

}

void Stop()
{

}