/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconZoomSettings.h>

@class SBFAnimationSettings;

@interface SBScaleZoomSettings : SBIconZoomSettings {

	BOOL _crossfadeWithZoom;
	SBFAnimationSettings* _outerFolderFadeSettings;
	SBFAnimationSettings* _crossfadeSettings;

}

@property (retain) SBFAnimationSettings * outerFolderFadeSettings;              //@synthesize outerFolderFadeSettings=_outerFolderFadeSettings - In the implementation block
@property (assign) BOOL crossfadeWithZoom;                                      //@synthesize crossfadeWithZoom=_crossfadeWithZoom - In the implementation block
@property (retain) SBFAnimationSettings * crossfadeSettings;                    //@synthesize crossfadeSettings=_crossfadeSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setCrossfadeWithZoom:(BOOL)arg1 ;
-(BOOL)crossfadeWithZoom;
-(SBFAnimationSettings *)crossfadeSettings;
-(id)effectiveCrossfadeAnimationSettings;
-(SBFAnimationSettings *)outerFolderFadeSettings;
-(void)setOuterFolderFadeSettings:(SBFAnimationSettings *)arg1 ;
-(void)setCrossfadeSettings:(SBFAnimationSettings *)arg1 ;
-(void)setDefaultValues;
@end

