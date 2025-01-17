// Copyright CBC

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "UObject/NoExportTypes.h"
#include "AuraWidgetController.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;

/**
 * 
 */
UCLASS()
class AURA_API UAuraWidgetController : public UObject
{
	GENERATED_BODY()

protected:
	
	UPROPERTY(BlueprintReadWrite, Category= "WidgetController")
	TObjectPtr<APlayerController> PlayerController;	

	UPROPERTY(BlueprintReadWrite, Category= "WidgetController")
	TObjectPtr<APlayerState> PlayerState;

	UPROPERTY(BlueprintReadWrite, Category= "WidgetController")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(BlueprintReadWrite, Category= "WidgetController")
	TObjectPtr<UAttributeSet> AttributeSet;
	
};
