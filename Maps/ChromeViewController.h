/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <Maps/MapsChromeViews.h>
#import <Maps/MKMapViewDelegate.h>
#import <Maps/MKMapViewDelegatePrivate.h>
#import <Maps/MKMapViewDelegate.h>
#import <Maps/MKMapViewDelegatePrivate.h>

@class MKMapView, UIView, NSMutableArray, UserLocationView, NSMutableSet, NSDate, NSTimer, NSString, NSArray, MapsChromeViewItem;

@interface ChromeViewController : UIViewController <MapsChromeViews, MKMapViewDelegate, MKMapViewDelegatePrivate, MKMapViewDelegate, MKMapViewDelegatePrivate> {

	NSMutableArray* _itemsStack;
	UserLocationView* _userLocationView;
	MKMapView* _mapView;
	BOOL _isViewLoading;
	UIView* _mapViewReplacement;
	BOOL _topModeWasSentModeWillDidAppear;
	BOOL _chromeDidReceiveModeWillAppear;
	BOOL _chromeDidReceiveModeDidAppear;
	BOOL _isAnyModeCurrent;
	BOOL _isTopModeBecomingCurrent;
	BOOL _isMapViewDisownedByPrepareMethods;
	BOOL _isBecomingSuppressed;
	BOOL _animatingMapInsets;
	long long _currentlyRunningLabelEdgeInsetsAnimationsCount;
	NSMutableSet* _modesBeingRemoved;
	unsigned long long _clientsAllowingInsetsAnimation;
	BOOL _hasAttemptedLoadingViewportChangeDateFromDefaults;
	BOOL _hasEverScheduledSavingViewportChangeDateInDefaults;
	NSDate* _lastViewportChangeDate;
	NSTimer* _lastViewportSaveTimer;
	UIView* _containingView;
	BOOL _suppressed;
	BOOL _forceAccessoryAnimationForNextPush;
	NSString* _searchContextDefaultsKeysPrefix;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * modes; 
@property (nonatomic,readonly) id<ChromeModeController> currentMode; 
@property (nonatomic,readonly) id<ChromeModeController> topMode; 
@property (nonatomic,readonly) CGRect unobscuredBoundsInContainingView; 
@property (nonatomic,readonly) UserLocationView * userLocationView; 
@property (nonatomic,readonly) UserLocationView * userLocationViewIfExists; 
@property (assign,getter=isSuppressed,nonatomic) BOOL suppressed;                        //@synthesize suppressed=_suppressed - In the implementation block
@property (nonatomic,readonly) BOOL supportsSuppression; 
@property (nonatomic,copy) NSString * searchContextDefaultsKeysPrefix;                   //@synthesize searchContextDefaultsKeysPrefix=_searchContextDefaultsKeysPrefix - In the implementation block
@property (assign,nonatomic) BOOL forceAccessoryAnimationForNextPush;                    //@synthesize forceAccessoryAnimationForNextPush=_forceAccessoryAnimationForNextPush - In the implementation block
@property (nonatomic,readonly) MapsChromeViewItem * topItem; 
@property (nonatomic,readonly) NSArray * itemsStack; 
@property (nonatomic,retain) MKMapView * mapView; 
@property (nonatomic,retain) UIView * containingView;                                    //@synthesize containingView=_containingView - In the implementation block
@property (nonatomic,retain) UIView * mapViewReplacement;                                //@synthesize mapViewReplacement=_mapViewReplacement - In the implementation block
+(id)localizedLocationAuthorizationTitle;
+(id)localizedLocationAuthorizationMessage;
+(Class)userLocationViewClass;
+(id)mapReplacementColor;
+(Class)chromeViewItemClass;
+(Class)containingViewClass;
+(BOOL)canTransitionWithoutMap;
-(void)mapView:(id)arg1 willChangeRotation:(double)arg2 ;
-(void)mapView:(id)arg1 didChangeMapType:(unsigned long long)arg2 ;
-(void)mapView:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2 ;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(BOOL)arg3 fromTrackingButton:(BOOL)arg4 ;
-(BOOL)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2 ;
-(BOOL)mapView:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(double)mapView:(id)arg1 shouldDelayTapResponse:(id)arg2 onAnnotationView:(id)arg3 forDuration:(double)arg4 ;
-(void)mapViewDidStartUserInteraction:(id)arg1 ;
-(void)mapViewDidStopUserInteraction:(id)arg1 ;
-(id)mapViewCurrentRouteMatch:(id)arg1 ;
-(void)mapViewDidFinishInitialUserTrackingModeAnimation:(id)arg1 ;
-(void)mapViewWillStartFlyoverTour:(id)arg1 ;
-(void)mapView:(id)arg1 didStopFlyoverTourCompleted:(BOOL)arg2 ;
-(void)mapView:(id)arg1 flyoverTourLabelDidChange:(id)arg2 ;
-(void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(BOOL)arg3 ;
-(void)mapView:(id)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 didDecelerate:(BOOL)arg4 ;
-(void)mapView:(id)arg1 didBecomePitched:(BOOL)arg2 ;
-(void)mapView:(id)arg1 canZoomInDidChange:(BOOL)arg2 ;
-(void)mapView:(id)arg1 canZoomOutDidChange:(BOOL)arg2 ;
-(void)mapView:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2 ;
-(void)mapView:(id)arg1 showingFlyoverDidChange:(BOOL)arg2 ;
-(void)mapViewDidFinishCalloutExpansion:(id)arg1 ;
-(void)mapViewWillAnimateInAnnotationViews:(id)arg1 ;
-(void)mapViewDidAnimateInAnnotationViews:(id)arg1 ;
-(void)mapView:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)_mapView:(id)arg1 calloutDidAppearForAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2 ;
-(void)_mapView:(id)arg1 willDeselectLabelMarker:(id)arg2 ;
-(void)_mapView:(id)arg1 willDeselectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 ;
-(void)mapViewWillStartLoadingMap:(id)arg1 ;
-(void)mapViewDidFinishLoadingMap:(id)arg1 ;
-(void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2 ;
-(void)mapViewWillStartRenderingMap:(id)arg1 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapViewWillStartLocatingUser:(id)arg1 ;
-(void)mapViewDidStopLocatingUser:(id)arg1 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4 ;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(BOOL)arg3 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)mapView:(id)arg1 didAddOverlayRenderers:(id)arg2 ;
-(id<ChromeModeController>)topMode;
-(id)enteredForegroundDate;
-(id)lastViewportChangedDate;
-(void)didLoadView;
-(void)mapViewInstanceDidChange;
-(id)mapViewDelegateForSelector:(SEL)arg1 ;
-(void)didUnsuppress;
-(id)newTraits;
-(BOOL)supportsSuppression;
-(BOOL)isCurrentMode:(id)arg1 ;
-(void)reinsertMapViewInViewHierarchy;
-(void)layoutForUnobscuredBoundsChange;
-(void)prepareRemovingMapViewFromViewHierarchyWithReplacement:(id)arg1 ;
-(BOOL)isSuppressed;
-(void)setMapEdgeInsets:(UIEdgeInsets)arg1 forMode:(id)arg2 ;
-(void)replaceMode:(id)arg1 withMode:(id)arg2 animated:(BOOL)arg3 ;
-(void)insertMode:(id)arg1 aboveMode:(id)arg2 animated:(BOOL)arg3 ;
-(void)removeMode:(id)arg1 animated:(BOOL)arg2 ;
-(void)popToMode:(id)arg1 animated:(BOOL)arg2 ;
-(void)popModeAnimated:(BOOL)arg1 ;
-(void)pushMode:(id)arg1 animated:(BOOL)arg2 ;
-(void)replaceTopModeWithMode:(id)arg1 animated:(BOOL)arg2 ;
-(CGRect)unobscuredBoundsInContainingViewWithOptions:(long long)arg1 ;
-(void)setSuppressed:(BOOL)arg1 ;
-(UserLocationView *)userLocationViewIfExists;
-(BOOL)isTopMode:(id)arg1 ;
-(void)whenModeNextBecomesCurrent:(id)arg1 performActionWithKey:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setSearchContextDefaultsKeysPrefix:(NSString *)arg1 ;
-(BOOL)getPreferredUserInterfaceIdiom:(out long long*)arg1 ;
-(CGRect)unobscuredBoundsInContainingView;
-(void)willLoadView;
-(void)setContainingView:(UIView *)arg1 ;
-(void)pushTopItemOnTopOfStackAfterViewLoadIfNeeded;
-(id)chromeViewItemForMode:(id)arg1 ;
-(void)invalidateLabelEdgeInsetsWithAnimation:(id)arg1 ;
-(UIEdgeInsets)mapInsetsIncludingBarsWithNonopaqueParts:(BOOL)arg1 ;
-(UIView *)mapViewReplacement;
-(void)performAllowingInsetsAnimation:(/*^block*/id)arg1 ;
-(void)addReplacementViewToViewHierarchy:(id)arg1 ;
-(void)currentModeDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)currentModeWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(BOOL)arg3 ;
-(CGSize)attributionAnchorOffset;
-(void)setMapViewReplacement:(UIView *)arg1 ;
-(void)stackWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 ;
-(void)_performTransitionWithAnimation:(BOOL)arg1 toItem:(id)arg2 fromItem:(id)arg3 itemsLeavingTheStack:(id)arg4 byChangingStackInBlock:(/*^block*/id)arg5 ;
-(void)stackDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 ;
-(void)_popToItem:(id)arg1 atIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)_newChromeItemForMode:(id)arg1 ;
-(void)setModes:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)forceAccessoryAnimationForNextPush;
-(void)moveToAccessoryViewsForMode:(id)arg1 animation:(id)arg2 ;
-(void)setForceAccessoryAnimationForNextPush:(BOOL)arg1 ;
-(void)_invokeWhenNextCurrentBlocksForMode:(id)arg1 animated:(BOOL)arg2 ;
-(id)_whenNextCurrentBlocksDictionaryForMode:(id)arg1 creatingIfMissing:(BOOL)arg2 ;
-(void)_removeWhenNextCurrentBlocksDictionaryFromMode:(id)arg1 ;
-(NSArray *)itemsStack;
-(void)_loadMapViewIfNeeded;
-(void)performInitialConfigurationOnMapView:(id)arg1 ;
-(UIEdgeInsets)obscuredInsetsForBoundsOptions:(long long)arg1 ;
-(void)_scheduleAnimationForUpdatingEdgeInsetsForCurrentMode;
-(void)invalidateLabelEdgeInsetsWithAnimation:(id)arg1 animationShouldHideLabelsAtStart:(BOOL)arg2 ;
-(BOOL)isViewLoadedOrLoading;
-(NSString *)searchContextDefaultsKeysPrefix;
-(BOOL)_shouldSaveLastViewportChangeDateInDefaults;
-(void)_saveLastViewportChangeDate;
-(id)_lastViewportChangeDateDefaultsKey;
-(id)_lastViewportChangeDateLoadingFromDefaultsIfNeeded;
-(void)popToRootModeAnimated:(BOOL)arg1 ;
-(void)setModes:(NSArray *)arg1 ;
-(BOOL)isWhenNextCurrentActionScheduledWithKey:(id)arg1 forMode:(id)arg2 ;
-(void)cancelWhenNextCurrentActionWithKey:(id)arg1 forMode:(id)arg2 ;
-(void)invalidateMapInsets;
-(void)prepareRemovingMapViewFromViewHierarchyWithReplacement:(id)arg1 retainOwnershipOfMapView:(BOOL)arg2 ;
-(void)reinsertMapViewInViewHierarchy:(id)arg1 userLocationView:(id)arg2 ;
-(UserLocationView *)userLocationView;
-(id)mapView:(id)arg1 painterForVectorOverlay:(id)arg2 ;
-(void)_setLabelEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(MKMapView *)mapView;
-(UIView *)containingView;
-(void)dealloc;
-(id)init;
-(void)viewDidLayoutSubviews;
-(MapsChromeViewItem *)topItem;
-(id<ChromeModeController>)currentMode;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_updateInsets;
-(id)mapViewDelegate;
-(NSArray *)modes;
-(UIEdgeInsets)labelEdgeInsets;
@end

