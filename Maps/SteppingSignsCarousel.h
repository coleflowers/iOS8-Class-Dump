/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SteppingSignsCarouselDelegate;
@class UIScrollView, UIPanGestureRecognizer, NSArray, UIView, GuidanceSignAccessoryView, NSMutableArray, NSString;

@interface SteppingSignsCarousel : UIView <UIScrollViewDelegate> {

	id<SteppingSignsCarouselDelegate> _delegate;
	UIScrollView* _scrollView;
	UIPanGestureRecognizer* _panGestureRecognizer;
	double _minimumMarginBetweenSigns;
	double _maximumWidthOfPeekingSignsArea;
	double _signWidth;
	double _topMargin;
	double _currentHeight;
	NSArray* _signs;
	unsigned long long _selectedSignIndex;
	NSRange _selectableSignRange;
	NSRange _targetSelectableSignRange;
	NSRange _visibleSignRange;
	UIView* _signsContainerView;
	BOOL _displayedInLockscreen;
	GuidanceSignAccessoryView* _guidanceAccessoryView;
	NSMutableArray* _guidanceAccessoryItems;
	int _variant;
	CGPoint _lastContentOffset;

}

@property (assign,nonatomic,__weak) id<SteppingSignsCarouselDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                    //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) double maximumWidthOfPeekingSignsArea;                          //@synthesize maximumWidthOfPeekingSignsArea=_maximumWidthOfPeekingSignsArea - In the implementation block
@property (assign,nonatomic) double minimumMarginBetweenSigns;                               //@synthesize minimumMarginBetweenSigns=_minimumMarginBetweenSigns - In the implementation block
@property (assign,nonatomic) double signWidth;                                               //@synthesize signWidth=_signWidth - In the implementation block
@property (assign,nonatomic) int variant;                                                    //@synthesize variant=_variant - In the implementation block
@property (assign,nonatomic) double topMargin;                                               //@synthesize topMargin=_topMargin - In the implementation block
@property (nonatomic,copy) NSArray * signs;                                                  //@synthesize signs=_signs - In the implementation block
@property (assign,nonatomic) unsigned long long selectedSignIndex;                           //@synthesize selectedSignIndex=_selectedSignIndex - In the implementation block
@property (readonly) UIPanGestureRecognizer * panGestureRecognizer; 
@property (nonatomic,retain) GuidanceSignAccessoryView * guidanceAccessoryView; 
@property (assign,nonatomic) CGPoint lastContentOffset;                                      //@synthesize lastContentOffset=_lastContentOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShowsDimmedSigns:(BOOL)arg1 animation:(id)arg2 ;
-(NSArray *)signs;
-(void)updateDividerHeightForRect:(CGRect)arg1 ;
-(void)updateViewHierarchyForCarouselViewport;
-(void)setSignWidth:(double)arg1 ;
-(void)setMaximumWidthOfPeekingSignsArea:(double)arg1 ;
-(void)setMinimumMarginBetweenSigns:(double)arg1 ;
-(void)setSigns:(NSArray *)arg1 ;
-(void)setGuidanceAccessoryItem:(id)arg1 forSignAtIndex:(unsigned long long)arg2 ;
-(double)maximumVisibleSignFrameY;
-(void)setSelectedSignIndex:(unsigned long long)arg1 scrollSignToVisible:(BOOL)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)selectedSignIndex;
-(void)_signSizeMayHaveChanged;
-(CGRect)updateBackgroundHeightForIndex:(unsigned long long)arg1 ;
-(GuidanceSignAccessoryView *)guidanceAccessoryView;
-(double)_actualSignWidth;
-(double)_actualMargin;
-(void)_layoutSigns;
-(void)_recenterAnimated:(BOOL)arg1 ;
-(void)scrollToSignAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(double)minimumMarginBetweenSigns;
-(double)maximumWidthOfPeekingSignsArea;
-(double)signWidth;
-(void)setSelectableSignRange:(NSRange)arg1 animated:(BOOL)arg2 ;
-(void)_setSelectableSignRange:(NSRange)arg1 animated:(BOOL)arg2 ;
-(BOOL)hasSubSelectableRange;
-(void)_updateVisibleRangeAnimated:(BOOL)arg1 ;
-(void)_setVisibleSignRange:(NSRange)arg1 animated:(BOOL)arg2 ;
-(void)_updateScrollViewContentOffset;
-(void)updateBackgroundBlurAndSignTextHeightAnimated:(BOOL)arg1 ;
-(void)_updateGuidanceAccessoryView;
-(double)_calculatePercentAndFirstIndex:(unsigned long long*)arg1 andSecondIndex:(unsigned long long*)arg2 ;
-(void)_setSelectedSignIndex:(unsigned long long)arg1 scrollSignToVisible:(BOOL)arg2 animated:(BOOL)arg3 cause:(long long)arg4 ;
-(void)_updateSelectedStepIndexFromGesture;
-(void)_setSelectableSignRangeAfterDelay;
-(void)_updateGuidanceAccessoryViewInMotion;
-(void)setGuidanceAccessoryView:(GuidanceSignAccessoryView *)arg1 ;
-(double)_XOriginForSignAtIndex:(unsigned long long)arg1 ;
-(void)willAnimateRotate;
-(void)setSelectedSignIndex:(unsigned long long)arg1 selectableSignRange:(NSRange)arg2 scrollSignToVisible:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)setSelectedSignIndex:(unsigned long long)arg1 ;
-(void)signViewNeedsLayout:(id)arg1 ;
-(void)setSignInactive:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
-(CGPoint)lastContentOffset;
-(void)setLastContentOffset:(CGPoint)arg1 ;
-(double)topMargin;
-(void)setTopMargin:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SteppingSignsCarouselDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SteppingSignsCarouselDelegate>)delegate;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(UIScrollView *)scrollView;
-(CGRect)visibleFrame;
-(int)variant;
-(void)setVariant:(int)arg1 ;
@end
