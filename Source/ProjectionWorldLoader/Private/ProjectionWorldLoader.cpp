// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectionWorldLoader.h"

#define LOCTEXT_NAMESPACE "FProjectionWorldLoaderModule"

void FProjectionWorldLoaderModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FProjectionWorldLoaderModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FProjectionWorldLoaderModule, ProjectionWorldLoader)