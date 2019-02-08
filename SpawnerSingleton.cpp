#include "SpawnerSingleton.h"

SpawnerSingleton* SpawnerSingleton::getInstance()
{
	static SpawnerSingleton instance;
	return &instance;
}
