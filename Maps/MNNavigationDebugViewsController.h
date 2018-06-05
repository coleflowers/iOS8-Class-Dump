/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MNTraceBookmarkSelectorDelegate.h>
#import <Maps/MNTraceControlViewDelegate.h>
#import <Maps/MNTracePlayerObserver.h>
#import <Maps/MNTraceSliderViewDelegate.h>
#import <Maps/MNTestLoggerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MNNavigationDebugViewsControllerDelegate;
@class MNNavigationSession, MNTracePlayer, NSTimer, MNTraceControlView, MNTraceSliderView, UIView, MNTraceBookmarkSelector, UITapGestureRecognizer, UILongPressGestureRecognizer, MKMapView, NSString;

@interface MNNavigationDebugViewsController : NSObject <MNTraceBookmarkSelectorDelegate, MNTraceControlViewDelegate, MNTracePlayerObserver, MNTraceSliderViewDelegate, MNTestLoggerDelegate, UIGestureRecognizerDelegate> {

	MNNavigationSession* _navigationSession;
	id<MNNavigationDebugViewsControllerDelegate> _delegate;
	MNTracePlayer* _tracePlayer;
	NSTimer* _hideTraceControlTimer;
	MNTraceControlView* _traceControlView;
	MNTraceSliderView* _traceSliderView;
	UIView* _debugControlsView;
	MNTraceBookmarkSelector* _traceBookmarkSelector;
	BOOL _shouldResumeTracePlayer;
	BOOL _sliderIsEditing;
	UITapGestureRecognizer* _oldBookmarkGestureRecognizer;
	UILongPressGestureRecognizer* _bookmarkGestureRecognizer;
	MKMapView* _mapView;
	BOOL _scrollWasEnabled;
	BOOL _traceControlsAreShowing;
	BOOL _debugViewsWereAdded;
	BOOL _automaticallyHideTraceControls;

}

@property (nonatomic,retain) NSTimer * hideTraceControlTimer;                  //@synthesize hideTraceControlTimer=_hideTraceControlTimer - In the implementation block
@property (assign,nonatomic) BOOL automaticallyHideTraceControls;              //@synthesize automaticallyHideTraceControls=_automaticallyHideTraceControls - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                              //@synthesize mapView=_mapView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)traceBookmarkSelector:(id)arg1 choseGuideMeBookmark:(id)arg2 ;
-(id)tracePlayer;
-(id)navigator;
-(void)traceControlViewJumpedBack:(id)arg1 ;
-(void)traceControlView:(id)arg1 setPlaying:(BOOL)arg2 ;
-(void)traceControlView:(id)arg1 setPlaySpeed:(double)arg2 ;
-(void)traceControlViewPressedBookmarksButton:(id)arg1 ;
-(void)traceControlViewPressedStartLoggingButton:(id)arg1 ;
-(void)traceControlViewPressedEndLoggingButton:(id)arg1 ;
-(id)initWithNavigationSession:(id)arg1 delegate:(id)arg2 ;
-(void)showTraceControls;
-(void)addDebugViewsToView:(id)arg1 mapView:(id)arg2 ;
-(void)removeDebugViewsFromView:(id)arg1 ;
-(void)resetTracePlayer;
-(void)prepareToRunNavigation;
-(void)traceSliderViewEditingDidBegin:(id)arg1 ;
-(void)traceSliderView:(id)arg1 editingEndedAtTime:(double)arg2 ;
-(void)traceSliderViewCancelledEditing:(id)arg1 ;
-(void)tracePlayerDidStart:(id)arg1 ;
-(void)tracePlayerDidPause:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2 stale:(BOOL)arg3 ;
-(void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 ;
-(void)tracePlayerDidStayOnRoute:(id)arg1 ;
-(void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2 ;
-(void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 location:(id)arg3 ;
-(void)tracePlayerDidStop:(id)arg1 ;
-(void)tracePlayerDidResume:(id)arg1 ;
-(void)setAutomaticallyHideTraceControls:(BOOL)arg1 ;
-(double)debugViewHeight;
-(void)hideTraceControlsAnimated:(BOOL)arg1 ;
-(void)resetHideTraceControlsTimer;
-(void)hideTraceControls;
-(void)setHideTraceControlTimer:(NSTimer *)arg1 ;
-(void)_longPressBookmarkGesture:(id)arg1 ;
-(void)_threeFingerTapBookmarkGesture:(id)arg1 ;
-(BOOL)automaticallyHideTraceControls;
-(void)_addTraceBookmark;
-(void)_sliderDidEndEditing;
-(void)testLoggerDidFailToLog:(id)arg1 ;
-(NSTimer *)hideTraceControlTimer;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)dealloc;
@end
