/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUSSDAlert.h>

@interface SBSMSClass0Alert : SBUSSDAlert
+(void)alertWithString:(id)arg1 address:(id)arg2 ;
+(void)playMessageReceived;
+(void)registerForAlerts;
-(BOOL)allowsStackingOfAlert:(id)arg1 ;
-(id)_initWithString:(id)arg1 ;
-(void)_unregisterForNotifications;
-(void)_registerForNotifications;
-(void)deactivate;
@end

