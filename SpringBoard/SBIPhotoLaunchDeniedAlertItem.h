/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBIPhotoLaunchDeniedAlertItem : SBAlertItem {

	BOOL _offersMigration;

}

@property (assign,nonatomic) BOOL offersMigration;              //@synthesize offersMigration=_offersMigration - In the implementation block
-(void)setOffersMigration:(BOOL)arg1 ;
-(BOOL)offersMigration;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(BOOL)dismissOnLock;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)ignoreIfAlreadyDisplaying;
@end

