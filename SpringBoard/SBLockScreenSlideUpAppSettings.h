/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBLockScreenSlideUpAppSettings : _UISettings {

	long long _slideUpAppSelection;

}

@property (assign) long long slideUpAppSelection;              //@synthesize slideUpAppSelection=_slideUpAppSelection - In the implementation block
+(id)settingsControllerModule;
-(void)setSlideUpAppSelection:(long long)arg1 ;
-(long long)slideUpAppSelection;
-(id)bundleIdentifierForCurrentSelection;
-(id)imageNameForCurrentSelection;
-(void)setDefaultValues;
@end
