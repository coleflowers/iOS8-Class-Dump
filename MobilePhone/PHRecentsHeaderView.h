/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:25 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIView.h>

@class CHRecentCall, UIView, NSArray;

@interface PHRecentsHeaderView : UIView {

	CHRecentCall* _recentCall;
	UIView* _topSeparator;
	UIView* _bottomSeparator;
	NSArray* _topSeparatorConstraints;
	NSArray* _bottomSeparatorConstraints;
	NSArray* _dateLabels;
	NSArray* _summaries;
	double _intrinsicContentHeight;

}

@property (readonly) CHRecentCall * recentCall;                       //@synthesize recentCall=_recentCall - In the implementation block
@property (retain) UIView * topSeparator;                             //@synthesize topSeparator=_topSeparator - In the implementation block
@property (retain) UIView * bottomSeparator;                          //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (retain) NSArray * topSeparatorConstraints;                 //@synthesize topSeparatorConstraints=_topSeparatorConstraints - In the implementation block
@property (retain) NSArray * bottomSeparatorConstraints;              //@synthesize bottomSeparatorConstraints=_bottomSeparatorConstraints - In the implementation block
@property (retain) NSArray * dateLabels;                              //@synthesize dateLabels=_dateLabels - In the implementation block
@property (retain) NSArray * summaries;                               //@synthesize summaries=_summaries - In the implementation block
@property (assign) double intrinsicContentHeight;                     //@synthesize intrinsicContentHeight=_intrinsicContentHeight - In the implementation block
+(id)headerViewWithFrame:(CGRect)arg1 recentCall:(id)arg2 ;
-(id)newSummaryViewForRecentCall:(id)arg1 occurrenceDate:(id)arg2 status:(unsigned)arg3 duration:(double)arg4 type:(unsigned)arg5 dataUsage:(double)arg6 ;
-(void)removeTopSeparator;
-(void)setIntrinsicContentHeight:(double)arg1 ;
-(void)_buildView;
-(id)_initWithFrame:(CGRect)arg1 recentCall:(id)arg2 ;
-(CHRecentCall *)recentCall;
-(void)setDateLabels:(NSArray *)arg1 ;
-(void)setSummaries:(NSArray *)arg1 ;
-(void)removeBottomSeparator;
-(NSArray *)topSeparatorConstraints;
-(void)setTopSeparatorConstraints:(NSArray *)arg1 ;
-(NSArray *)bottomSeparatorConstraints;
-(void)setBottomSeparatorConstraints:(NSArray *)arg1 ;
-(NSArray *)dateLabels;
-(NSArray *)summaries;
-(double)intrinsicContentHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setTopSeparator:(UIView *)arg1 ;
-(UIView *)topSeparator;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(UIView *)bottomSeparator;
@end

