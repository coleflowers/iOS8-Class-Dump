/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class SBFAnimationSettings, _UIScreenEdgePanRecognizerSettings;

@interface SBAppSwitcherSettings : _UISettings {

	BOOL _transitionToAppThroughDefaultPng;
	long long _peopleNumberOfRecents;
	long long _simplicityOptions;
	SBFAnimationSettings* _transitionAnimationSettings;
	SBFAnimationSettings* _dosidoAnimationSettings;
	_UIScreenEdgePanRecognizerSettings* _gestureSettings;

}

@property (assign) long long peopleNumberOfRecents;                                   //@synthesize peopleNumberOfRecents=_peopleNumberOfRecents - In the implementation block
@property (assign) BOOL transitionToAppThroughDefaultPng;                             //@synthesize transitionToAppThroughDefaultPng=_transitionToAppThroughDefaultPng - In the implementation block
@property (assign) long long simplicityOptions;                                       //@synthesize simplicityOptions=_simplicityOptions - In the implementation block
@property (retain) SBFAnimationSettings * transitionAnimationSettings;                //@synthesize transitionAnimationSettings=_transitionAnimationSettings - In the implementation block
@property (retain) SBFAnimationSettings * dosidoAnimationSettings;                    //@synthesize dosidoAnimationSettings=_dosidoAnimationSettings - In the implementation block
@property (retain) _UIScreenEdgePanRecognizerSettings * gestureSettings;              //@synthesize gestureSettings=_gestureSettings - In the implementation block
+(id)settingsControllerModule;
-(SBFAnimationSettings *)dosidoAnimationSettings;
-(BOOL)shouldSimplifyForOptions:(long long)arg1 ;
-(BOOL)transitionToAppThroughDefaultPng;
-(void)setSimplicityOptions:(long long)arg1 ;
-(SBFAnimationSettings *)transitionAnimationSettings;
-(void)setPeopleNumberOfRecents:(long long)arg1 ;
-(void)setTransitionToAppThroughDefaultPng:(BOOL)arg1 ;
-(long long)simplicityOptions;
-(long long)peopleNumberOfRecents;
-(void)setTransitionAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(void)setDosidoAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(_UIScreenEdgePanRecognizerSettings *)gestureSettings;
-(void)setGestureSettings:(_UIScreenEdgePanRecognizerSettings *)arg1 ;
-(void)setDefaultValues;
@end

