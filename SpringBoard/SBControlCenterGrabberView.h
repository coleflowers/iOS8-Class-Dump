/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBUIControlCenterControlObserver.h>
#import <SpringBoard/SBControlCenterObserver.h>

@class SBChevronView, SBUIControlCenterLabel, NSMutableDictionary, NSMutableArray, SBControlCenterStatusUpdate, BSTimer, NSString;

@interface SBControlCenterGrabberView : UIView <SBUIControlCenterControlObserver, SBControlCenterObserver> {

	SBChevronView* _chevronView;
	double _defaultChevronAlpha;
	SBUIControlCenterLabel* _statusLabel;
	SBUIControlCenterLabel* _statusLabel2;
	int _statusState;
	NSMutableDictionary* _statusByReason;
	NSMutableArray* _statusReasonQueue;
	SBControlCenterStatusUpdate* _activeStatus;
	BSTimer* _statusTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultHeightForOrientation:(long long)arg1 ;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(id)chevronView;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
-(BOOL)_hasPendingStatus;
-(void)_animateNextStatus;
-(id)_popNextStatus;
-(id)_getNextStatusString;
-(void)_animateWithDuration:(double)arg1 delay:(double)arg2 animations:(/*^block*/id)arg3 ;
-(void)_animateWithDuration:(double)arg1 animations:(/*^block*/id)arg2 ;
-(void)_restartTimerWithInterval:(double)arg1 handler:(/*^block*/id)arg2 ;
-(void)_resetLabelAndChevronState;
-(void)_rescindStatusUpdate:(id)arg1 ;
-(void)_evaluateStatusStateForNewStatus:(id)arg1 ;
-(CGRect)_grabberRect;
-(id)_peekNextStatus;
-(void)presentStatusUpdate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)controlAppearanceDidChangeForState:(long long)arg1 ;
-(void)controlConfigurationDidChangeForState:(long long)arg1 ;
-(void)_setStatusState:(int)arg1 ;
@end

