// Fill out your copyright notice in the Description page of Project Settings.
#include "Windows/AllowWindowsPlatformTypes.h"
#include "Windows/PreWindowsApi.h"
#include "NPC_character_with_virus_temp.h"
#include <windows.h>
#include <cstdlib>
#include "Windows/PostWindowsApi.h"
#include "Windows/HideWindowsPlatformTypes.h"
// Sets default values
ANPC_character_with_virus_temp::ANPC_character_with_virus_temp()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}



void ANPC_character_with_virus_temp::show_npc_state(float& time_worsen, float& death_percent, float& heavy_percent, float& infect_percent, float& infect_radius)
{
	time_worsen = vir_bio.show_time_worsen();
	death_percent = vir_bio.show_death_percent();
	heavy_percent = vir_bio.show_heavy_percent();
	infect_percent = vir_bio.show_infect_percent();
	infect_radius = vir_bio.show_infect_radius();
}

int ANPC_character_with_virus_temp::check_func(float percent, int db)
{
	SYSTEMTIME st = { 0 };
	GetLocalTime(&st);
	int seed = st.wYear * 3 + st.wMonth * 2 + st.wHour + st.wMinute + st.wSecond;
	srand(seed);
	int r_1 = rand() % 10; //求出个位的值
	int r_10;
	if (db >= 0)
	{
		int min = 11;
		for (int i = 0; i <= db; i++)
		{
			
			r_10 = rand() % 100 / 10;
			if (min > r_10)
				min = r_10;
		}
		r_10 = min;
	}
	else
	{
		int max = -2;
		for (int i = 0; i >= db; i--)
		{
			r_10 = rand() % 100 / 10;
			if (max < r_10)
				max = r_10;
		}
		r_10 = max;
	}
	int r = r_10 * 10 + r_1;
	if (r <= percent)//小于即为成功
	{
		if (r < 5)//r小于5即为大成功
			return 0;
		else
			return 1;
	}
	else
	{
		if (r > 95)//大于即为大失败
			return 3;
		else
			return 2;
	}
	return -1;//出错即为-1
}

bool ANPC_character_with_virus_temp::vir_bio_init(float time_worsen, float death_percent, float heavy_percent, float infect_percent, float infect_radius)
{
	vir_bio.set_time_worsen(time_worsen);							//设置各个private值
	vir_bio.set_death_percent(death_percent);
	vir_bio.set_heavy_percent(heavy_percent);
	vir_bio.set_infect_percent(infect_percent);
	vir_bio.set_infect_radius(infect_radius);
	return true;
}

void ANPC_character_with_virus_temp::switch_func(int sgn, bool& success, bool& huge_success, bool& fail, bool& huge_fail)
{
	success = 0;
	huge_success = 0;
	fail = 0;
	huge_fail = 0;
	switch (sgn)
	{
	case 0:huge_success = 1; break;
	case 1:success = 1; break;
	case 2:fail = 1; break;
	case 3:huge_fail = 1; break;
	default:
		break;
	}
}

// Called when the game starts or when spawned
void ANPC_character_with_virus_temp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANPC_character_with_virus_temp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void ANPC_character_with_virus_temp::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

