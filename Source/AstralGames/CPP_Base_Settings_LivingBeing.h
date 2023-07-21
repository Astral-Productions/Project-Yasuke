// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "CPP_Base_Settings_LivingBeing.generated.h"

UCLASS()
class ASTRALGAMES_API ACPP_Base_Settings_LivingBeing : public AActor, public IGameplayTagAssetInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_Base_Settings_LivingBeing();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay Tags")
		FGameplayTagContainer OwnedGameplayTags;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override { TagContainer = OwnedGameplayTags; return; }

};
