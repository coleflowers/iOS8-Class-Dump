/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBPushStoreObserver <NSObject>
@required
-(void)pushStoreNotificationsDidChange;
-(void)pushStoreClearedNotifications;
-(void)pushStoreUserAcceptedDelivery;
-(void)pushStoreUserDeclinedDelivery;
-(void)pushStoreUpdatedPushSettings;

@end
