/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileMail/MFTiltedTabViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol OS_dispatch_queue, MFApplicationSceneDelegate;
@class UIView, UITapGestureRecognizer, UIPanGestureRecognizer, NSTimer, NSMapTable, NSObject, NSMutableArray, _MFActorItem, MFTiltedTabView, UIColor, NSMutableSet, NSArray, NSString;

@interface MFApplicationSceneController : UIViewController <MFTiltedTabViewDelegate, UIGestureRecognizerDelegate> {

	UIView* _containerView;
	UIView* _sceneDimmingView;
	BOOL _isPrimaryViewProstrated;
	BOOL _isPrimaryViewConstricted;
	BOOL _isWallpaperVisible;
	CGPoint _engagementPoint;
	UITapGestureRecognizer* _engageTapGesture;
	UIPanGestureRecognizer* _engagePanGesture;
	NSTimer* _purgingTimer;
	NSMapTable* _actorItemToDecayTimeMapTable;
	NSObject*<OS_dispatch_queue> _purgingQueue;
	NSMutableArray* _actorItems;
	_MFActorItem* _activeActorItem;
	_MFActorItem* _primaryActorItem;
	UIViewController* _primaryViewController;
	MFTiltedTabView* _tiltedTabView;
	BOOL _exposeModeActivated;
	unsigned long long _tabItemIndexToSelect;
	_MFActorItem* _interactivelyAnimatingActorItem;
	UIColor* _opaqueBackgroundColor;
	NSMutableSet* _savedSnapshotUUIDs;
	BOOL _automaticallyPurgesInactiveActors;
	id<MFApplicationSceneDelegate> _sceneDelegate;

}

@property (nonatomic,retain) UIViewController*<MFApplicationSceneActor> primaryViewController; 
@property (nonatomic,readonly) NSArray * actorViewControllers; 
@property (assign,nonatomic) BOOL automaticallyPurgesInactiveActors;                                        //@synthesize automaticallyPurgesInactiveActors=_automaticallyPurgesInactiveActors - In the implementation block
@property (assign,getter=isExposeModeActivated,nonatomic) BOOL exposeModeActivated;                         //@synthesize exposeModeActivated=_exposeModeActivated - In the implementation block
@property (assign,nonatomic) id<MFApplicationSceneDelegate> sceneDelegate;                                  //@synthesize sceneDelegate=_sceneDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_wallpaperColor;
+(id)_dimmedWallpaperColor;
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)withdrawActiveViewControllerAnimated:(BOOL)arg1 ;
-(id)initWithPrimaryViewController:(UIViewController*)arg1 ;
-(void)setSceneDelegate:(id<MFApplicationSceneDelegate>)arg1 ;
-(void)setAutomaticallyPurgesInactiveActors:(BOOL)arg1 ;
-(BOOL)restoreStateFromDisk;
-(void)presentModalViewController:(UIViewController*)arg1 animated:(BOOL)arg2 options:(id)arg3 ;
-(NSArray *)actorViewControllers;
-(void)dismissViewController:(UIViewController*)arg1 animated:(BOOL)arg2 options:(id)arg3 ;
-(void)flushRestorableStateToDisk;
-(void)forciblyPurgeAllInactiveActorViewControllers;
-(void)dismissViewController:(UIViewController*)arg1 animated:(BOOL)arg2 ;
-(void)_handleEngageTapGesture:(id)arg1 ;
-(void)_handleEngagePanGesture:(id)arg1 ;
-(void)_setWallpaperVisible:(BOOL)arg1 animated:(BOOL)arg2 duration:(double)arg3 ;
-(void)setPrimaryViewController:(UIViewController*<MFApplicationSceneActor>)arg1 ;
-(void)_layoutTiltedTabView;
-(void)_layoutPrimaryViewControllerView;
-(void)_layoutActiveViewControllerView;
-(void)_layoutActorViewControllers;
-(void)_didWithdrawActorItem:(id)arg1 ;
-(BOOL)_sceneDelegateSupportsPurgingAndResurrection;
-(void)_purgeInactiveActorsTimerFired:(id)arg1 ;
-(void)_setPrimaryViewProstrated:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setDimmingViewDimmed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setActorViewBordersVisible:(BOOL)arg1 ;
-(BOOL)_useRegularSizeClassBehavior;
-(CGRect)_activeViewControllerFrame;
-(double)_bottomShelfHeight;
-(BOOL)isExposeModeActivated;
-(void)_setPrimaryViewConstrictedForBottomShelf:(BOOL)arg1 ;
-(void)_layoutActorItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_beginPurgingDecayForActorItemIfNecessary:(id)arg1 ;
-(void)_sceneStateDidChange;
-(void)_willWithdrawActorItem:(id)arg1 ;
-(BOOL)_resurrectActorItemIfNecessary:(id)arg1 ;
-(id)primarySplitViewController;
-(void)_animate:(BOOL)arg1 sceneForActiveActorItem:(id)arg2 ;
-(UIViewController*<MFApplicationSceneActor>)primaryViewController;
-(void)_setActiveActorItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_purgeInactiveActorsBeyondDepthThreshold;
-(void)setExposeModeActivated:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_actorItemForActorViewController:(UIViewController*)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)_presentActorItem:(id)arg1 animated:(BOOL)arg2 options:(id)arg3 ;
-(void)_removeActorItem:(id)arg1 ;
-(void)_purgeActorItem:(id)arg1 ;
-(void)_populateSavedSnapshotUUIDsIfNecessary;
-(void)_saveActorSnapshotToDisk:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeAllActorSnapshotsExcludingIdentifiers:(id)arg1 ;
-(void)_flushRestorableStateToDiskWithNewSnapshots:(BOOL)arg1 ;
-(BOOL)automaticallyPurgesInactiveActors;
-(CGImageRef)_copySnapshotImageContentsForIdentifier:(id)arg1 ;
-(CGRect)_engagementRect;
-(id)_actorItemAtIndex:(unsigned long long)arg1 ;
-(void)tiltedTabViewWillPresent:(id)arg1 ;
-(void)tiltedTabViewDidPresent:(id)arg1 ;
-(void)tiltedTabViewWillDismiss:(id)arg1 ;
-(void)tiltedTabViewDidDismiss:(id)arg1 ;
-(long long)numberOfItemsInTiltedTabView:(id)arg1 ;
-(id)tiltedTabView:(id)arg1 contentViewForItemAtIndex:(unsigned long long)arg2 ;
-(id)tiltedTabView:(id)arg1 snapshotViewForItemAtIndex:(unsigned long long)arg2 withBoundsInsets:(out UIEdgeInsets*)arg3 ;
-(void)tiltedTabView:(id)arg1 relinquishContentView:(id)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(void)tiltedTabView:(id)arg1 relinquishSnapshotView:(id)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(void)tiltedTabView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 ;
-(BOOL)tiltedTabView:(id)arg1 canCloseItemAtIndex:(unsigned long long)arg2 ;
-(void)tiltedTabView:(id)arg1 closeItemAtIndex:(unsigned long long)arg2 ;
-(void)tiltedTabView:(id)arg1 didMoveItemAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(double)tiltedTabView:(id)arg1 headerHeightForItemAtIndex:(unsigned long long)arg2 ;
-(CGRect)tiltedTabView:(id)arg1 frameForItemAtIndex:(unsigned long long)arg2 ;
-(CATransform3D)tiltedTabView:(id)arg1 layerTransformForItemAtIndex:(unsigned long long)arg2 ;
-(double)tiltedTabView:(id)arg1 alphaValueForItemAtIndex:(unsigned long long)arg2 ;
-(void)setExposeModeActivated:(BOOL)arg1 ;
-(id)actorViewControllersOfKind:(Class)arg1 ;
-(void)_invalidatePurgingDecayForActorItem:(id)arg1 ;
-(id<MFApplicationSceneDelegate>)sceneDelegate;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)presentModalViewController:(UIViewController*)arg1 animated:(BOOL)arg2 ;
-(id)_additionalViewControllersToCheckForUserActivity;
-(UIViewController*)activeViewController;
@end
