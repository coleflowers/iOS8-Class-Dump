/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBCenterZoomSettings.h>

@class SBFAnimationSettings;

@interface SBCenterAppZoomSettings : SBCenterZoomSettings {

	double _appHeadStart;
	SBFAnimationSettings* _appZoomSettings;
	SBFAnimationSettings* _appFadeSettings;

}

@property (assign) double appHeadStart;                                 //@synthesize appHeadStart=_appHeadStart - In the implementation block
@property (retain) SBFAnimationSettings * appZoomSettings;              //@synthesize appZoomSettings=_appZoomSettings - In the implementation block
@property (retain) SBFAnimationSettings * appFadeSettings;              //@synthesize appFadeSettings=_appFadeSettings - In the implementation block
+(id)settingsControllerModule;
-(double)appHeadStart;
-(void)setAppHeadStart:(double)arg1 ;
-(SBFAnimationSettings *)appZoomSettings;
-(void)setAppZoomSettings:(SBFAnimationSettings *)arg1 ;
-(SBFAnimationSettings *)appFadeSettings;
-(void)setAppFadeSettings:(SBFAnimationSettings *)arg1 ;
@end

