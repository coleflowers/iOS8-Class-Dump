/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:48:34 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BiometricKitDelegate <NSObject>
@optional
-(void)enrollResult:(id)arg1;
-(void)matchResult:(id)arg1;
-(void)matchResult:(id)arg1 withDetails:(id)arg2;
-(void)statusMessage:(unsigned)arg1;
-(void)enrollProgress:(id)arg1;
-(void)homeButtonPressed;
-(void)templateUpdate:(id)arg1 withDetails:(id)arg2;
-(void)taskResumeStatus:(int)arg1;

@end

