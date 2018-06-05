/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBStatusBarStateProvider.h>
#import <UIKit/UIStatusBarStateObserver.h>

@class NSString;

@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider <UIStatusBarStateObserver> {

	BOOL _overridePercent;
	BOOL _killActivity;
	BOOL _itemIsDisabled[25];
	BOOL _itemWasDisabled[25];
	BOOL _timeEnabled;
	BOOL _timeCloaked;
	BOOL _allButBatteryCloaked;
	BOOL _telephonyAndBluetoothCloaked;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)enableTime:(BOOL)arg1 ;
-(void)setTimeCloaked:(BOOL)arg1 ;
-(void)setTelephonyAndBluetoothItemsCloaked:(BOOL)arg1 ;
-(void)enableTime:(BOOL)arg1 crossfade:(BOOL)arg2 crossfadeDuration:(double)arg3 ;
-(BOOL)isTimeEnabled;
-(void)_updateDisabledItems;
-(void)setAllItemsExceptBatteryCloaked:(BOOL)arg1 ;
-(BOOL)_shouldPostForVisitedItem:(int)arg1 withUpdates:(BOOL)arg2 toAggregatorData:(const SCD_Struct_SB37*)arg3 ;
-(void)_composePostDataFromAggregatorData:(SCD_Struct_SB37*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const SCD_Struct_SB37*)arg2 withActions:(int)arg3 ;
@end

