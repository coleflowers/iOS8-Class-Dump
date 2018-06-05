/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>
#import <UIKit/UIAlertViewDelegate.h>

@class SBUserInstalledApplicationIcon, NSMutableIndexSet, NSString;

@interface SBRelatedDataDeletionAlertItem : SBAlertItem <UIAlertViewDelegate> {

	SBUserInstalledApplicationIcon* _icon;
	NSMutableIndexSet* _relatedDataStores;
	NSMutableIndexSet* _dataStoresToPurge;
	long long _deleteButtonIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIcon:(id)arg1 ;
-(void)setHasGameKitData:(BOOL)arg1 ;
-(void)setHasHealthKitData:(BOOL)arg1 ;
-(unsigned long long)_currentDataStoreCandidate;
-(BOOL)_hasUnconsideredDataStores;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(BOOL)dismissOnLock;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
@end

