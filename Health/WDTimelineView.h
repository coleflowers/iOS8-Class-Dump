/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:34:35 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol WDTimelineViewDelegate;
@class UIScrollView, NSDate, NSString;

@interface WDTimelineView : UIView <UIScrollViewDelegate> {

	UIScrollView* _scrollView;
	double _leftEdge;
	double _rightEdge;
	BOOL _listenForScrollViewUpdates;
	id<WDTimelineViewDelegate> _delegate;
	NSDate* _minDate;
	NSDate* _maxDate;
	double _timeframe;
	double _anchorTime;

}

@property (assign,nonatomic,__weak) id<WDTimelineViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDate * minDate;                                      //@synthesize minDate=_minDate - In the implementation block
@property (nonatomic,readonly) NSDate * maxDate;                                      //@synthesize maxDate=_maxDate - In the implementation block
@property (assign,nonatomic) double timeframe;                                        //@synthesize timeframe=_timeframe - In the implementation block
@property (assign,nonatomic) double anchorTime;                                       //@synthesize anchorTime=_anchorTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)_currentTimeFrame;
-(void)_adjustAnchorTime;
-(void)_resetScrollViewIfNecessary;
-(void)_alertDelegateDidChange;
-(void)_resetScrollView;
-(void)setAnchorTime:(double)arg1 ;
-(void)_alertDelegateDidReassessConstraints;
-(void)_contentOffsetDidChange;
-(id)initWithFrame:(CGRect)arg1 minDate:(id)arg2 maxDate:(id)arg3 ;
-(void)setTimeframe:(double)arg1 ;
-(id)leftEdge;
-(id)rightEdge;
-(NSDate *)maxDate;
-(double)timeframe;
-(double)anchorTime;
-(void)setAnchorDate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WDTimelineViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<WDTimelineViewDelegate>)delegate;
-(NSDate *)minDate;
-(id)startDate;
-(id)endDate;
@end

