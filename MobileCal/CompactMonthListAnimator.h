/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIViewControllerAnimatorTransitioning.h>

@class CompactWidthMonthViewController, CompactListViewController, CalendarModel, PaletteView, NSString;

@interface CompactMonthListAnimator : NSObject <UIViewControllerAnimatorTransitioning> {

	CompactWidthMonthViewController* _monthViewController;
	CompactListViewController* _listViewController;
	CGPoint _listViewNormalLocation;
	CGPoint _monthViewSplittingLocation;
	CGRect _monthSplittingCutOutArea;
	BOOL _animating;
	CalendarModel* _model;
	PaletteView* _paletteView;
	BOOL _reverse;

}

@property (assign,nonatomic) BOOL reverse;                          //@synthesize reverse=_reverse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animateToMonthWithCompletion:(/*^block*/id)arg1 ;
-(void)animateToListWithCompletion:(/*^block*/id)arg1 ;
-(void)_haltAnimations;
-(void)_terminateAnimationsAfterDelay;
-(id)initWithModel:(id)arg1 paletteView:(id)arg2 reverse:(BOOL)arg3 ;
-(void)setReverse:(BOOL)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)reverse;
@end
