// ILikeBanas


#include "MyBlueprintFunctionLibrary.h"

void UMyBlueprintFunctionLibrary::DrawLinearGradient(UCanvas* theTarget, int sizeY, int sizeX, const TArray<int>& theSpeeds) {

	for (int i = 0; i < sizeX; i++) {
		//for (int j = 0; j < sizeY; j++) {
		theTarget->K2_DrawLine(FVector2D(0, i), FVector2D((1 / 4) * sizeY, i), 1.0f, FLinearColor(255-theSpeeds[i], theSpeeds[i], 0));
		//}
	}

	return;
}
