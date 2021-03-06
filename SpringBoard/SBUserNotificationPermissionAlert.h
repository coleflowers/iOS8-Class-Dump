/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBUserNotificationPermissionController, UIUserNotificationSettings;

@interface SBUserNotificationPermissionAlert : SBAlertItem {

	SBUserNotificationPermissionController* _controller;
	UIUserNotificationSettings* _settings;
	BOOL _shouldCallback;

}
-(id)initWithPermissionsController:(id)arg1 userNotificationSettings:(id)arg2 makeAppDelegateCallback:(BOOL)arg3 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)didDeactivateForReason:(int)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
@end

