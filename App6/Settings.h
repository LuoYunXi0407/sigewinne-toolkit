#pragma once
namespace Service::Settings
{
	namespace Homepage
	{
		struct LaunchGame
		{
			char gamePath[260];
		};
		struct Island
		{
            BOOL  EnableSetFieldOfView;
            FLOAT FieldOfView;
            BOOL  FixLowFovScene;
            BOOL  DisableFog;
            BOOL  EnableSetTargetFrameRate;
            DWORD TargetFrameRate;
            BOOL  RemoveOpenTeamProgress;
            BOOL  HideQuestBanner;
            BOOL  DisableEventCameraMove;
            BOOL  DisableShowDamageText;
            BOOL  UsingTouchScreen;
            BOOL  RedirectCombineEntry;
            BOOL  ResinListItemId000106Allowed;
            BOOL  ResinListItemId000201Allowed;
            BOOL  ResinListItemId107009Allowed;
            BOOL  ResinListItemId107012Allowed;
            BOOL  ResinListItemId220007Allowed;
		};
	}

	namespace About
	{
		BOOL ShowOnStartup = TRUE;
	}
}