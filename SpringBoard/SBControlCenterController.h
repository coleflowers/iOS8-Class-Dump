/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBControlCenterViewControllerDelegate.h>
#import <SpringBoard/SBCoordinatedPresenting.h>

@class SBWindow, SBControlCenterRootView, SBControlCenterViewController, UIImageView, UIView, _UIBackdropView, SBChevronView, FBUIApplicationResignActiveAssertion, NSMutableSet, NSHashTable, _UIDynamicValueAnimation, UIDynamicAnimator, NSString, NSSet;

@interface SBControlCenterController : UIViewController <SBControlCenterViewControllerDelegate, SBCoordinatedPresenting> {

	SBWindow* _window;
	SBControlCenterRootView* _rootView;
	SBControlCenterViewController* _viewController;
	UIImageView* _coveredContentSnapshot;
	UIView* _fullScreenGrabberContainer;
	_UIBackdropView* _fullScreenGrabberBackdrop;
	SBChevronView* _fullScreenChevron;
	FBUIApplicationResignActiveAssertion* _resignActiveAssertion;
	NSMutableSet* _preventDismissalOnLockReasons;
	BOOL _uiLocked;
	NSHashTable* _observers;
	long long _orientation;
	BOOL _animatingInitialPresentation;
	BOOL _gotFirstBackdropUpdate;
	BOOL _completingTransitionOpen;
	_UIDynamicValueAnimation* _bounceAnimation;
	UIDynamicAnimator* _animator;
	unsigned long long _animatorStopCount;
	CGRect _animatorStopFrame;
	BOOL _inGrabberOnlyMode;
	BOOL _presented;
	BOOL _transitioning;
	BOOL _fullyRevealed;
	double _backgroundBrightness;

}

@property (assign,nonatomic) BOOL inGrabberOnlyMode;                                             //@synthesize inGrabberOnlyMode=_inGrabberOnlyMode - In the implementation block
@property (assign,getter=isUILocked,nonatomic) BOOL UILocked;                                    //@synthesize uiLocked=_uiLocked - In the implementation block
@property (assign,getter=isPresented,nonatomic) BOOL presented;                                  //@synthesize presented=_presented - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                          //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,getter=isFullyRevealed,nonatomic) BOOL fullyRevealed;                          //@synthesize fullyRevealed=_fullyRevealed - In the implementation block
@property (assign,nonatomic) double backgroundBrightness;                                        //@synthesize backgroundBrightness=_backgroundBrightness - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long coordinatedPresentingControllerIdentifier; 
@property (nonatomic,readonly) double hintDisplacement; 
@property (nonatomic,readonly) unsigned long long hintEdge; 
@property (assign,nonatomic) id<SBPresentingDelegate> presentingDelegate; 
@property (nonatomic,readonly) NSSet * gestures; 
@property (nonatomic,readonly) NSSet * conflictingGestures; 
@property (nonatomic,readonly) NSSet * tapExcludedViews; 
+(void)notifyControlCenterControl:(id)arg1 didActivate:(BOOL)arg2 ;
+(id)_sharedInstanceCreatingIfNeeded:(BOOL)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(BOOL)isUILocked;
-(void)beginPresentationWithTouchLocation:(CGPoint)arg1 ;
-(BOOL)isGrabberVisible;
-(BOOL)allowShowTransitionSystemGesture;
-(void)cancelTransition;
-(void)hideGrabberAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)showGrabberAnimated:(BOOL)arg1 ;
-(BOOL)isAvailableWhileLocked;
-(void)presentAnimated:(BOOL)arg1 ;
-(void)presentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dismissOnLock;
-(BOOL)isPresentingControllerTransitioning;
-(void)endTransitionWithVelocity:(CGPoint)arg1 wasCancelled:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)abortAnimatedTransition;
-(long long)coordinatedPresentingControllerIdentifier;
-(double)hintDisplacement;
-(unsigned long long)hintEdge;
-(void)_lockStateChangedNotification:(id)arg1 ;
-(void)_uiRelockedNotification:(id)arg1 ;
-(void)setUILocked:(BOOL)arg1 ;
-(void)_enumerateObservers:(/*^block*/id)arg1 ;
-(void)_updateCoveredContentSnapshot;
-(void)_clearCoveredContentSnapshot;
-(BOOL)inGrabberOnlyMode;
-(double)_yValueForOpen;
-(double)_yValueForClosed;
-(void)_updateRevealPercentage:(double)arg1 ;
-(void)_updateGrabberVisibility;
-(void)hideGrabberAnimated:(BOOL)arg1 ;
-(BOOL)allowShowTransition;
-(BOOL)_allowShowTransitionSystemGesture;
-(void)_revealSlidingViewToHeight:(double)arg1 ;
-(void)_cleanupAnimator;
-(void)setInGrabberOnlyMode:(BOOL)arg1 ;
-(void)_beginPresentation;
-(void)setTransitioning:(BOOL)arg1 ;
-(double)_controlCenterHeightForTouchLocation:(CGPoint)arg1 ;
-(void)_setLockHUDHidden:(BOOL)arg1 ;
-(void)_finishPresenting:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(double)_verticalPercentageMovedOnScreenForY:(double)arg1 stopY:(double)arg2 ;
-(id)_newDynamicAnimationForShow:(BOOL)arg1 currentValue:(double)arg2 velocity:(double)arg3 unitSize:(double)arg4 ;
-(void)_endPresentation;
-(void)_presentWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isFullyRevealed;
-(void)dismissAnimated:(BOOL)arg1 withAdditionalAnimations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dismissWithDuration:(double)arg1 additionalAnimations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFullyRevealed:(BOOL)arg1 ;
-(void)resetControlAlpha;
-(void)setBackgroundBrightness:(double)arg1 ;
-(void)updateControlAlphaForBrightness:(double)arg1 ;
-(void)controlCenterViewControllerWantsDismissal:(id)arg1 ;
-(BOOL)controlCenterViewController:(id)arg1 canHandleGestureRecognizer:(id)arg2 ;
-(void)controlCenterViewController:(id)arg1 handleTap:(id)arg2 ;
-(void)controlCenterViewController:(id)arg1 handlePan:(id)arg2 ;
-(void)controlCenterViewController:(id)arg1 backdropViewDidUpdate:(id)arg2 ;
-(void)preventDismissalOnLock:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)allowHideTransition;
-(double)backgroundBrightness;
-(void)dealloc;
-(id)init;
-(id)_window;
-(void)removeObserver:(id)arg1 ;
-(BOOL)wantsFullScreenLayout;
-(BOOL)isTransitioning;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)isVisible;
-(void)dismissAnimated:(BOOL)arg1 ;
-(BOOL)isPresented;
-(void)addObserver:(id)arg1 ;
-(void)beginTransitionWithTouchLocation:(CGPoint)arg1 ;
-(void)updateTransitionWithTouchLocation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)endTransitionWithVelocity:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPresented:(BOOL)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)handleMenuButtonTap;
@end
