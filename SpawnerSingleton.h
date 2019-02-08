#pragma once
#include "Vector.h"
#include "Rotator.h"

class SpawnerSingleton
{
public:
	static SpawnerSingleton* getInstance();
private:
	SpawnerSingleton() {}
	SpawnerSingleton(const SpawnerSingleton&) {}
	SpawnerSingleton& operator = (const SpawnerSingleton&) {}

public:
	template <class T>
	T* SpawnRelevantObject(T* actor, FVector location, FRotator rotation)
	{
		T* resultPawn = actor->GetWorld()->SpawnActor<T>(location, actor->GetActorRotation());
		return resultPawn;
	}
};