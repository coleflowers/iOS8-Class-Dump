/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/BSTransactionObserver.h>

@protocol BSLogging;
@class UIWindow, UIView, SBApplication, SBDisplaySettings, NSHashTable, NSMutableArray, BSTransaction, NSString;

@interface SBUIAnimationController : NSObject <BSTransactionObserver> {

	UIWindow* _transitionWindow;
	UIView* _transitionContainer;
	SBApplication* _activatingApp;
	SBApplication* _deactivatingApp;
	SBDisplaySettings* _activatingAppSettings;
	SBDisplaySettings* _deactivatingAppSettings;
	/*^block*/id _commitBlock;
	int _animationState;
	BOOL _cancelOnNextSuspendIfNecessary;
	BOOL _didPostBeginAnimationNotification;
	BOOL _didNotifyObserversOfCompletion;
	BOOL _needsCATransactionActivate;
	NSHashTable* _observers;
	NSMutableArray* _startDependencies;
	BOOL _preparing;
	SBApplication* _progressDependency;
	BSTransaction* _waitForActivationDependency;
	id<BSLogging> _debugLogger;

}

@property (nonatomic,retain) id<BSLogging> debugLogger; 
@property (nonatomic,retain,readonly) UIView * containerView;                          //@synthesize transitionContainer=_transitionContainer - In the implementation block
@property (nonatomic,retain) SBApplication * activatingApp;                            //@synthesize activatingApp=_activatingApp - In the implementation block
@property (nonatomic,retain) SBApplication * deactivatingApp;                          //@synthesize deactivatingApp=_deactivatingApp - In the implementation block
@property (nonatomic,copy) id commitBlock;                                             //@synthesize commitBlock=_commitBlock - In the implementation block
@property (assign,nonatomic) BOOL cancelOnNextSuspendIfNecessary;                      //@synthesize cancelOnNextSuspendIfNecessary=_cancelOnNextSuspendIfNecessary - In the implementation block
@property (nonatomic,retain) SBDisplaySettings * activatingAppSettings;                //@synthesize activatingAppSettings=_activatingAppSettings - In the implementation block
@property (nonatomic,retain) SBDisplaySettings * deactivatingAppSettings;              //@synthesize deactivatingAppSettings=_deactivatingAppSettings - In the implementation block
@property (assign,nonatomic) BOOL needsCATransactionActivate;                          //@synthesize needsCATransactionActivate=_needsCATransactionActivate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2 ;
-(void)_prepareAnimation;
-(id)_animationIdentifier;
-(void)_noteAnimationDidFinish;
-(void)_noteAnimationDidCommit:(BOOL)arg1 withDuration:(double)arg2 afterDelay:(double)arg3 ;
-(SBApplication *)deactivatingApp;
-(id)_getTransitionWindow;
-(SBDisplaySettings *)deactivatingAppSettings;
-(SBApplication *)activatingApp;
-(void)_cleanupAnimation;
-(void)_noteAnimationDidFail;
-(int)_animationState;
-(void)_addStartTransactionDependency:(id)arg1 ;
-(void)_cancelAnimation;
-(void)_setupStartDependencies;
-(id)_animationProgressDependency;
-(void)_applicationDependencyStateChanged;
-(SBDisplaySettings *)activatingAppSettings;
-(void)_noteAnimationDidRevealApplication;
-(BOOL)_shouldDismissBanner;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(BOOL)isReasonableMomentToInterrupt;
-(void)setActivatingApp:(SBApplication *)arg1 ;
-(void)setDeactivatingApp:(SBApplication *)arg1 ;
-(void)_setAnimationState:(int)arg1 ;
-(BOOL)__animationShouldStart;
-(void)__startAnimation;
-(BOOL)_willAnimate;
-(void)setActivatingAppSettings:(SBDisplaySettings *)arg1 ;
-(void)setDeactivatingAppSettings:(SBDisplaySettings *)arg1 ;
-(id)__newWaitForAppActivationTransaction;
-(BOOL)__wantsInitialProgressStateChange;
-(void)_startMonitoringStartDependency:(id)arg1 ;
-(void)__evaluateStartDependencies;
-(void)_applicationActivationStateDidChange;
-(void)__cancelAnimation;
-(void)__cleanupAnimation;
-(BOOL)_isNullAnimation;
-(id)commitBlock;
-(void)setCommitBlock:(id)arg1 ;
-(void)__noteAnimationDidTerminateWithSuccess:(BOOL)arg1 ;
-(void)_stopMonitoringStartDependency:(id)arg1 ;
-(void)_startTransactionDependency:(id)arg1 didComplete:(BOOL)arg2 ;
-(BOOL)waitingToStart;
-(void)endAnimation;
-(id)_startTransactionDependencies;
-(void)_removeStartTransactionDependency:(id)arg1 ;
-(BOOL)cancelOnNextSuspendIfNecessary;
-(void)setCancelOnNextSuspendIfNecessary:(BOOL)arg1 ;
-(BOOL)needsCATransactionActivate;
-(void)setNeedsCATransactionActivate:(BOOL)arg1 ;
-(void)_startAnimation;
-(BOOL)isComplete;
-(void)dealloc;
-(id)init;
-(UIView *)containerView;
-(void)removeObserver:(id)arg1 ;
-(BOOL)animating;
-(void)_setHidden:(BOOL)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_enumerateObserversSafely:(/*^block*/id)arg1 ;
-(void)_notifyObserversOfCompletion;
-(id<BSLogging>)debugLogger;
-(void)transactionDidComplete:(id)arg1 ;
-(void)setDebugLogger:(id<BSLogging>)arg1 ;
-(void)beginAnimation;
@end

