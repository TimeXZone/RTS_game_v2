//该类已集成每tick运算.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GamePlay_Actor.generated.h"

UCLASS()
class RTS_GAME_API AGamePlay_Actor : public AActor
{
	GENERATED_BODY()
		//UPROPERTY(EditAnywhere, BlueprintReadWrite,Category = status)
		//UFUNCTION(BlueprintCallable, Category = MyFunc)
public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = status)
	//int policy_point;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = status)
	int increase_rate; //该值越小，policy_point增加速率越快
private:
	int count;
public:	
	// Sets default values for this actor's properties
	AGamePlay_Actor();
	UFUNCTION(BlueprintCallable, Category = Policy)
	bool general_policy_func(bool active, int increase_rate_inc);//bool表示该函数启用，int表示政策对increase,rate造成的影响
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
