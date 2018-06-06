/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol COSBuddyControllerDelegate <NSObject>
@property (assign,nonatomic) BOOL hasSignedInToICloud; 
@property (assign,nonatomic) BOOL combinedMessagesSignInFailed; 
@required
-(BOOL)hasSignedInToICloud;
-(void)buddyControllerDone:(id)arg1;
-(void)setHasSignedInToICloud:(BOOL)arg1;
-(void)setCombinedMessagesSignInFailed:(BOOL)arg1;
-(id)topBuddyController;
-(void)buddyControllerReleaseHold:(id)arg1;
-(void)buddyControllerDone:(id)arg1 nextControllerClass:(Class)arg2;
-(void)buddyControllerCancelAnyHold;
-(void)displayUpdateControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(id)popToBuddyControllerWithClass:(Class)arg1 animated:(BOOL)arg2;
-(id)nextControllerAfterHold;
-(void)displayCompanionTooOldPairingFailureAlertWithDismissalHandler:(/*^block*/id)arg1;
-(BOOL)combinedMessagesSignInFailed;

@end
