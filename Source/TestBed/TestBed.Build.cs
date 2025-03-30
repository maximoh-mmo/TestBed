// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestBed : ModuleRules
{
	public TestBed(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
