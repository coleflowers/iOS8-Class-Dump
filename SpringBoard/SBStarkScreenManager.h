/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBScreenConnectionHandler.h>
#import <SpringBoard/SBStarkScreenControllerDelegate.h>

@protocol SBStarkScreenManagerDelegate;
@class NSMapTable, SBStarkScreenController, SBStarkStatusBarStateProvider, SBSpuriousScreenUndimmingAssertion, SBPasscodeLockDisableAssertion, SBLockScreenDisableAssertion, NSString;

@interface SBStarkScreenManager : NSObject <SBScreenConnectionHandler, SBStarkScreenControllerDelegate> {

	NSMapTable* _screenToControllerMap;
	SBStarkScreenController* _currentScreenController;
	SBStarkStatusBarStateProvider* _statusBarStateProvider;
	SBSpuriousScreenUndimmingAssertion* _spuriousScreenUndimmingAssertion;
	SBPasscodeLockDisableAssertion* _deviceLockDisableAssertion;
	SBLockScreenDisableAssertion* _lockScreenDisableAssertion;
	SBPasscodeLockDisableAssertion* _earlyConnectDeviceLockDisableAssertion;
	BOOL _hasShownConnectedAlert;
	BOOL _delayShowingConnectedAlert;
	BOOL _geoSupported;
	BOOL _earlyStarkConnection;
	BOOL _delayUpdatingLockOutMode;
	id<SBStarkScreenManagerDelegate> _delegate;

}

@property (assign,nonatomic) id<SBStarkScreenManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)isStarkActive;
-(id)currentScreenController;
-(BOOL)starkScreenIsAttached;
-(id)activeScreenController;
-(BOOL)screenManager:(id)arg1 shouldBindConnectionHandlerToScreen:(id)arg2 ;
-(void)screenManager:(id)arg1 didTriggerConnectionHandlerEvent:(long long)arg2 forScreen:(id)arg3 ;
-(BOOL)isGeoSupported;
-(id)statusBarStateProvider;
-(BOOL)starkScreenControllerShouldDelayUpdateLockoutMode:(id)arg1 ;
-(void)starkScreenControllerWantsRelockUI:(id)arg1 ;
-(void)_usbStarkConnected;
-(void)_updateGeoSupport;
-(BOOL)promptRelockUIIfAppropriate;
-(void)_setGeoSupported:(BOOL)arg1 ;
-(void)_earlyStarkConnection;
-(void)_clearEarlyConnectState;
-(void)_promptConnectionSteps;
-(void)_scheduleClearEarlyConnectStateExpirationTimer;
-(void)_unscheduleClearEarlyConnectStateExpirationTimer;
-(void)_clearEarlyConnectStateTimerExpired;
-(void)_clearPromptState;
-(void)_setCurrentController:(id)arg1 ;
-(void)prepareToHandleUnlockAttempt;
-(BOOL)handleUnlockAttempt;
-(void)dealloc;
-(void)setDelegate:(id<SBStarkScreenManagerDelegate>)arg1 ;
-(id)init;
-(id<SBStarkScreenManagerDelegate>)delegate;
@end

