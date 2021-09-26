// ILikeBanas

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/CanvasRenderTarget2D.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Math/Color.h"
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class FRAMETIMERCAMERA_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void DrawLinearGradient(UCanvas* theTarget, int sizeY, int sizeX, const TArray<int>& theSpeeds);
	
};
