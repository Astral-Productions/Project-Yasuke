// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Base_Settings_LivingBeing.h"

// Sets default values
ACPP_Base_Settings_LivingBeing::ACPP_Base_Settings_LivingBeing()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_Base_Settings_LivingBeing::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_Base_Settings_LivingBeing::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

