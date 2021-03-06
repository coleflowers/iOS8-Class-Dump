/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSIMLockEntryViewInterface <NSObject>
@required
-(void)setupSuccess;
-(void)setupFailureState;
-(id)initWithFrame:(CGRect)arg1 languageCode:(id)arg2;
-(id)localizedStringWithKey:(id)arg1;
-(void)setupCurrentLockAttemptState;
-(void)setupUnlockAttemptState;
-(id)label;
-(id)titleText;

@end

