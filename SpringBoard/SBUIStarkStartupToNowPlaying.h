/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkStartupToAppAnimation.h>

@class NSNumber;

@interface SBUIStarkStartupToNowPlaying : SBUIStarkStartupToAppAnimation {

	NSNumber* _activated;

}
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)_createViewToAnimate;
-(void)_setupStartDependencies;
-(id)initWithActivatingApp:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3 ;
-(void)_startAnimation;
-(void)dealloc;
@end
