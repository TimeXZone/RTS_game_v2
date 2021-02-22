// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "vir_bio_class.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NPC_character_with_virus_temp.generated.h"

UCLASS()
class RTS_GAME_API ANPC_character_with_virus_temp : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ANPC_character_with_virus_temp();	
	vir_bio_class vir_bio;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = status)
	int infect_status; //默认0为未发病，1为轻症，2为中症，3为重症，4为死亡
	//UPROPERTY(BlueprintCallable,Category = "MyFunc")
	UFUNCTION(BlueprintCallable, Category = MyFunc)
	float show_time_worsen();
	UFUNCTION(BlueprintCallable, Category = MyFunc)
	int check_func(float percent, int db);//percent 概率 即病毒自带的各项几率   db奖励/惩罚骰（即政策树加成，不以百分比判定了)  coc7版规则 0大成功 1成功 2失败 3大失败
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
