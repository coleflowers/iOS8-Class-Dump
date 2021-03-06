/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UITableView.h>
#import <MobileMail/SwipeActionPullViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPanGestureRecognizer, SwipeActionPullView, MailboxCellDeleteScanLineView, NSIndexPath, NSString;

@interface MFMailboxTableView : UITableView <SwipeActionPullViewDelegate, UIGestureRecognizerDelegate> {

	UIPanGestureRecognizer* _swipeActionPanRecognizer;
	double _initialTranslation;
	double _confirmationTranslationAdjustment;
	SwipeActionPullView* _leftView;
	SwipeActionPullView* _rightView;
	MailboxCellDeleteScanLineView* _deleteScanLineView;
	NSIndexPath* _swipedIndexPath;

}

@property (assign,nonatomic) id<MFMailboxTableViewDelegate> delegate; 
@property (nonatomic,retain) NSIndexPath * swipedIndexPath;                        //@synthesize swipedIndexPath=_swipedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSwipedIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)resetSwipedRowAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)arg1 ;
-(BOOL)swipeActionPullViewShouldShowMoreButton:(id)arg1 ;
-(unsigned long long)primaryActionForSwipeView:(id)arg1 ;
-(unsigned long long)secondaryActionForSwipeView:(id)arg1 ;
-(id)swipeActionPullView:(id)arg1 titleForAction:(unsigned long long)arg2 ;
-(unsigned long long)nextStateForPullView:(id)arg1 ;
-(void)swipeActionPullView:(id)arg1 tappedAction:(unsigned long long)arg2 ;
-(void)swipeRecognizerDidRecognize:(id)arg1 ;
-(NSIndexPath *)swipedIndexPath;
-(id)_swipedCell;
-(id)_activePullView;
-(void)_swipeRecognizerBegan:(id)arg1 ;
-(void)_swipeRecognizerChanged:(id)arg1 ;
-(void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(BOOL)arg2 ;
-(void)setSwipedIndexPath:(NSIndexPath *)arg1 ;
-(double)_destructiveConfirmationPoint;
-(double)_rubberBandOffsetForOffset:(double)arg1 usingSwipeView:(id)arg2 ;
-(void)_moveCell:(id)arg1 toSwipeOffset:(double)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_performDestructiveAction:(unsigned long long)arg1 atIndexPath:(id)arg2 triggeredBySwipe:(BOOL)arg3 ;
-(void)_performNonDestructiveAction:(unsigned long long)arg1 atIndexPath:(id)arg2 ;
-(void)_moveCell:(id)arg1 toSwipeOffset:(double)arg2 animated:(BOOL)arg3 usingSpringWithStiffness:(double)arg4 completion:(/*^block*/id)arg5 ;
-(void)_resetSwipeViewPositionsImmediately;
-(double)_adjustedXOffsetForInputOffset:(double)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)deleteConfirmationIndexPath;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
@end

