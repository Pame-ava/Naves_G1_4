// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Naves_G1_4 : ModuleRules
{
	public Naves_G1_4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
