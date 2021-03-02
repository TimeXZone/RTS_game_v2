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
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = status)
	int infect_status; //Ĭ��0Ϊδ������1Ϊ��֢��2Ϊ��֢��3Ϊ��֢��4Ϊ����
	//UPROPERTY(BlueprintCallable,Category = "MyFunc")
	UFUNCTION(BlueprintCallable, Category = MyFunc)
	float show_time_worsen();
	UFUNCTION(BlueprintCallable, Category = MyFunc)
	int check_func(float percent, int db);//percent ���� �������Դ��ĸ����   db����/�ͷ��������������ӳɣ����԰ٷֱ��ж���)  coc7����� 0��ɹ� 1�ɹ� 2ʧ�� 3��ʧ��
	vir_bio_class vir_bio;
	UFUNCTION(BlueprintCallable, Category = MyFunc)
	bool vir_bio_init(float time_worsen, float death_percent, float heavy_percent, float infect_percent, float infect_radius);//infect_radiusΪ�и�Ⱦ���뼫��λ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = infect)
	float infect_radius = vir_bio.show_infect_radius();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
