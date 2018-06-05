/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:52:29 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileCal/ABPersonViewControllerDelegate.h>
#import <MobileCal/EKDayTimeViewDelegate.h>
#import <MobileCal/MainViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <MobileCal/WeekViewDataSource.h>
#import <MobileCal/WeekGroupViewDelegate.h>
#import <MobileCal/EKEventGestureControllerDelegate.h>
#import <MobileCal/EKEventViewDelegatePrivate.h>

@protocol WeekViewControllerDelegate;
@class CalendarModel, EKCalendarDate, NSMutableArray, UIScrollView, UIView, NSTimer, EKEventGestureController, WeekTimeView, NSString;

@interface WeekViewController : UIViewController <ABPersonViewControllerDelegate, EKDayTimeViewDelegate, MainViewController, UIScrollViewDelegate, WeekViewDataSource, WeekGroupViewDelegate, EKEventGestureControllerDelegate, EKEventViewDelegatePrivate> {

	CalendarModel* _model;
	EKCalendarDate* _displayedDate;
	EKCalendarDate* _referenceWeekStart;
	double _weekWidth;
	NSRange _visibleRange;
	CGSize _lastBoundsSize;
	BOOL _viewIsVisible;
	BOOL _initialShow;
	BOOL _needsReload;
	BOOL _needsHourHeightUpdate;
	BOOL _updatingAllDayContentOffset;
	BOOL _showWeekNumber;
	long long _lastScrollPositionSecond;
	double _cachedHeaderHeight;
	long long _currentlyDisplayedWeekNumber;
	NSMutableArray* _reloadDates;
	CGPoint _lastPinchDistance;
	CGPoint _lastPinchPoint1;
	UIScrollView* _weekScroller;
	UIView* _allDayDividerLineView;
	NSTimer* _timeMarkerTimer;
	BOOL _editorDismissedFromDelete;
	BOOL _receiveTapsInHeader;
	BOOL _showOverlayCalendar;
	BOOL _displaysDatesSnappedToWeekBoundaries;
	id<WeekViewControllerDelegate> _delegate;
	double _weekViewHourHeightScale;
	EKEventGestureController* _eventGestureController;
	NSMutableArray* _visibleWeeks;
	NSMutableArray* _reusableViews;
	WeekTimeView* _timeView;

}

@property (nonatomic,copy) EKCalendarDate * displayedDate; 
@property (assign,nonatomic,__weak) id<WeekViewControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL receiveTapsInHeader;                                         //@synthesize receiveTapsInHeader=_receiveTapsInHeader - In the implementation block
@property (assign,nonatomic) long long firstVisibleSecond; 
@property (assign,nonatomic) double weekViewHourHeightScale;                                   //@synthesize weekViewHourHeightScale=_weekViewHourHeightScale - In the implementation block
@property (nonatomic,readonly) CalendarModel * model; 
@property (nonatomic,readonly) EKEventGestureController * eventGestureController;              //@synthesize eventGestureController=_eventGestureController - In the implementation block
@property (nonatomic,readonly) BOOL showOverlayCalendar;                                       //@synthesize showOverlayCalendar=_showOverlayCalendar - In the implementation block
@property (nonatomic,retain) NSMutableArray * visibleWeeks;                                    //@synthesize visibleWeeks=_visibleWeeks - In the implementation block
@property (nonatomic,retain) NSMutableArray * reusableViews;                                   //@synthesize reusableViews=_reusableViews - In the implementation block
@property (nonatomic,retain) WeekTimeView * timeView;                                          //@synthesize timeView=_timeView - In the implementation block
@property (assign,nonatomic) BOOL displaysDatesSnappedToWeekBoundaries;                        //@synthesize displaysDatesSnappedToWeekBoundaries=_displaysDatesSnappedToWeekBoundaries - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL shouldPresentEventDetailsForSelectedOccurrence; 
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 showDetails:(BOOL)arg3 showComments:(BOOL)arg4 ;
-(void)selectDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateBackButtonOnBackViewControllerToDate:(id)arg1 ;
-(void)showEvent:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)allowsOverriddenRightNavigationBarItems;
-(BOOL)allowsOverriddenToolbarItems;
-(void)presentDetailsViewWhenReady:(id)arg1 animated:(BOOL)arg2 ;
-(id)bestDateForNewEvent;
-(void)_selectedDateChanged:(id)arg1 ;
-(void)_significantTimeChanged:(id)arg1 ;
-(void)weekAllDayView:(id)arg1 occurrenceClicked:(id)arg2 onDay:(double)arg3 ;
-(void)setReceiveTapsInHeader:(BOOL)arg1 ;
-(BOOL)receiveTapsInHeader;
-(WeekTimeView *)timeView;
-(id)weekView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3 ;
-(id)viewForEvent:(id)arg1 ;
-(void)emptySpaceClickedOnDate:(id)arg1 ;
-(void)weekGroupDidScroll:(id)arg1 ;
-(void)weekGroupAllDaySectionDidScroll:(id)arg1 ;
-(void)weekGroup:(id)arg1 didReceiveTapForDate:(id)arg2 ;
-(id)weekGroupForWeekBefore:(id)arg1 ;
-(id)weekGroupForWeekAfter:(id)arg1 ;
-(void)weekGroup:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)emptySpaceClick;
-(void)weekGroupViewDidLayout:(id)arg1 ;
-(double)headerVerticalOffset;
-(void)_weekScrollerPinched:(id)arg1 ;
-(void)_weekScrollerDoubleTapped:(id)arg1 ;
-(EKCalendarDate *)displayedDate;
-(double)scrollToDisplayedDateAnimated:(BOOL)arg1 ;
-(void)_showWeekNumbersPrefDidChange;
-(BOOL)usePortraitLayoutForSize:(CGSize)arg1 ;
-(long long)orientationForSize:(CGSize)arg1 ;
-(void)layoutCells;
-(void)resizeWeekGroupsIfNeededForOrientation:(long long)arg1 ;
-(void)setDisplayedDate:(EKCalendarDate *)arg1 ;
-(void)overlayCalendarDidChange;
-(void)_setHourHeightScale:(double)arg1 ;
-(void)adjustVisibleOccurrenceLabelsAnimated:(BOOL)arg1 ;
-(void)_scrollToCurrentTimeOfDayAnimated:(BOOL)arg1 ;
-(void)undimOccurrence:(id)arg1 ;
-(void)updateBannerDateStrings;
-(void)_updateHeaderHeights;
-(void)scrollEventIntoView:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDisplayedDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNeedsRelayoutCells;
-(void)occurrenceClicked:(id)arg1 onDay:(double)arg2 ;
-(CGRect)_boundsForWeek:(long long)arg1 ;
-(id)_dateForWeek:(long long)arg1 ;
-(void)customizeWeekGroupView:(id)arg1 ;
-(NSRange)visibleRangeForOffset:(double)arg1 ;
-(void)_reuseWeekView:(id)arg1 ;
-(id)_createPreparedViewForWeek:(long long)arg1 ;
-(void)snapTargetScrollOffset:(inout CGPoint*)arg1 withVelocity:(CGPoint)arg2 ;
-(BOOL)displaysDatesSnappedToWeekBoundaries;
-(id)dayDateAtPoint:(CGPoint)arg1 ;
-(id)_snapDateForOffset:(CGPoint)arg1 snapToWeeks:(BOOL)arg2 ;
-(double)_xOffsetForDate:(id)arg1 ;
-(void)draggingDone;
-(id)leftmostDateComponents;
-(void)_updatePreferredReloadRange;
-(id)centerDateComponents;
-(void)_reloadDataIfVisible;
-(void)_removeDateHighlight;
-(void)synchronizeWeekGroupScrollingToWeek:(id)arg1 ;
-(NSMutableArray *)visibleWeeks;
-(void)_setReduceLayoutProcessingForAnimation:(BOOL)arg1 ;
-(id)_weekGroupForEvent:(id)arg1 ;
-(void)_scrollToSecond:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)dateIsVisible:(id)arg1 ;
-(id)_weekGroupForPoint:(CGPoint)arg1 ;
-(void)highlightDayViewCalendarDate:(id)arg1 isAllDay:(BOOL)arg2 ;
-(id)_firstWeekGroup;
-(void)didEditEvent:(id)arg1 ;
-(void)dimOccurrence:(id)arg1 ;
-(double)_widthForDayAtPoint:(CGPoint)arg1 isMovingRight:(BOOL)arg2 ;
-(void)tappedOnDate:(id)arg1 ;
-(id)_leftmostVisibleWeekGroupView;
-(BOOL)shouldSnapToWeeksOnFlicks;
-(void)occurrencesChanged:(id)arg1 ;
-(double)currentScrollViewXOffset;
-(void)updateDisplayedDateForCurrentScrollOffset;
-(id)_viewForEvent:(id)arg1 ;
-(void)eventGestureControllerDidMoveAfterEditorChange:(id)arg1 ;
-(double)weekViewHourHeightScale;
-(void)setWeekViewHourHeightScale:(double)arg1 ;
-(EKEventGestureController *)eventGestureController;
-(BOOL)showOverlayCalendar;
-(void)setVisibleWeeks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)reusableViews;
-(void)setReusableViews:(NSMutableArray *)arg1 ;
-(void)setTimeView:(WeekTimeView *)arg1 ;
-(void)setDisplaysDatesSnappedToWeekBoundaries:(BOOL)arg1 ;
-(void)_updateContentForSizeCategoryChange:(id)arg1 ;
-(void)setFirstVisibleSecond:(long long)arg1 ;
-(void)_startMarkerTimer;
-(void)_invalidateMarkerTimer;
-(long long)firstVisibleSecond;
-(double)maximumHourScale;
-(double)minimumHourScale;
-(CGPoint)_pinchDistanceForGestureRecognizer:(id)arg1 ;
-(id)dateAtPoint:(CGPoint)arg1 isAllDay:(BOOL*)arg2 requireAllDayRegionInsistence:(BOOL)arg3 ;
-(CGRect)currentTimeRectInView:(id)arg1 ;
-(id)occurrenceViewAtPoint:(CGPoint)arg1 ;
-(id)dateAtPoint:(CGPoint)arg1 isAllDay:(BOOL*)arg2 ;
-(CGPoint)pointAtDate:(double)arg1 isAllDay:(BOOL)arg2 ;
-(void)_highlightDayViewDate:(double)arg1 isAllDay:(BOOL)arg2 ;
-(id)touchTrackingViewForEventGestureController:(id)arg1 ;
-(id)occurrenceViewSuperviewForEventGestureController:(id)arg1 ;
-(double)timedRegionOriginForEventGestureController:(id)arg1 ;
-(double)computeXDragOffsetForEventGestureController:(id)arg1 currentX:(double)arg2 startX:(double)arg3 ;
-(BOOL)moreThanOneDayVisibleForEventGestureController:(id)arg1 ;
-(id)createOccurrenceViewForEventGestureController:(id)arg1 ;
-(void)eventGestureController:(id)arg1 adjustDraggingViewForAllDay:(BOOL)arg2 ;
-(id)createEventForEventGestureController:(id)arg1 ;
-(id)eventGestureController:(id)arg1 occurrenceViewAtPoint:(CGPoint)arg2 ;
-(id)eventGestureController:(id)arg1 occurrenceViewForOccurrence:(id)arg2 ;
-(double)eventGestureController:(id)arg1 yPositionPerhapsMatchingAllDayOccurrence:(id)arg2 atPoint:(CGPoint)arg3 ;
-(void)eventGestureController:(id)arg1 addViewToScroller:(id)arg2 isAllDay:(BOOL)arg3 ;
-(BOOL)eventGestureController:(id)arg1 isAllDayAtPoint:(CGPoint)arg2 requireInsistence:(BOOL)arg3 ;
-(double)eventGestureController:(id)arg1 dateAtPoint:(CGPoint)arg2 ;
-(CGPoint)eventGestureController:(id)arg1 pointAtDate:(double)arg2 isAllDay:(BOOL)arg3 ;
-(double)eventGestureController:(id)arg1 widthForOccurrenceViewOfDays:(unsigned long long)arg2 ;
-(double)eventGestureController:(id)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(BOOL)arg3 ;
-(void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(BOOL)arg3 ;
-(void)eventGestureController:(id)arg1 didMoveToDate:(double)arg2 isAllDay:(BOOL)arg3 ;
-(BOOL)eventGestureControllerShouldAllowLongPress:(id)arg1 ;
-(double)eventGestureController:(id)arg1 convertXForMargin:(double)arg2 ;
-(CGRect)marginFrameForEventGestureController:(id)arg1 ;
-(BOOL)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(BOOL)arg4 span:(int)arg5 ;
-(void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(BOOL)arg3 ;
-(void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2 ;
-(BOOL)didScrollWhenEventGestureController:(id)arg1 scrollTimerFiredToMoveLeft:(BOOL)arg2 right:(BOOL)arg3 vertically:(BOOL)arg4 towardPoint:(CGPoint)arg5 ;
-(void)editorDidSaveEvent:(id)arg1 ;
-(void)editorDidDeleteEvent:(id)arg1 ;
-(void)editorDidCancelEditingEvent:(id)arg1 ;
-(void)_updateTimeMarker;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)eventViewController:(id)arg1 willDismissEditViewController:(id)arg2 deleted:(BOOL)arg3 ;
-(void)tapReceived:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<WeekViewControllerDelegate>)arg1 ;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<WeekViewControllerDelegate>)delegate;
-(long long)interfaceOrientation;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(CalendarModel *)model;
-(id)initWithModel:(id)arg1 ;
-(BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)_localeChanged:(id)arg1 ;
@end
