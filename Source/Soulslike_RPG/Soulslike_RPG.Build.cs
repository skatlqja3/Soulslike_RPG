// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Soulslike_RPG : ModuleRules
{
	public Soulslike_RPG(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput"});
	}
}
