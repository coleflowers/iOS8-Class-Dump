/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:35:41 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSMS.app/MobileSMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSMS/MobileSMS-Structs.h>
#import <UIKit/UIApplication.h>
#import <MobileSMS/CNFRegWizardControllerDelegate.h>
#import <MobileSMS/IMSystemMonitorListener.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, CKMessagesController, CNFRegWizardController, NSString, NSArray, BKSProcessAssertion, TLAlert, NSURL;

@interface SMSApplication : UIApplication <CNFRegWizardControllerDelegate, IMSystemMonitorListener, UIApplicationDelegate> {

	BOOL _waitToSendFinishLaunching;
	BOOL _isLocked;
	BOOL _isSuspended;
	BOOL _isHandlingSiriTask;
	UIWindow* _window;
	CKMessagesController* _messagesController;
	CNFRegWizardController* _madridRegistrationController;
	NSString* _defaultPng;
	NSArray* _suspendUnreadMessages;
	BKSProcessAssertion* _backgroundAssertion;
	TLAlert* _alert;
	NSURL* _deferredLoadURL;
	/*^block*/id _alertViewHandler;

}

@property (nonatomic,retain) NSURL * deferredLoadURL;                                //@synthesize deferredLoadURL=_deferredLoadURL - In the implementation block
@property (nonatomic,retain) CKMessagesController * messagesController;              //@synthesize messagesController=_messagesController - In the implementation block
@property (nonatomic,copy) id alertViewHandler;                                      //@synthesize alertViewHandler=_alertViewHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)startShowMessagesTest:(id)arg1 ;
-(void)startShowNewComposeTest:(id)arg1 ;
-(void)startScrollConversationsTest:(id)arg1 ;
-(void)startScrollTranscriptTest:(id)arg1 ;
-(void)startRotationTest:(id)arg1 ;
-(void)showTranscriptListNotAnimated;
-(void)showNextMessage;
-(void)showTranscriptList;
-(void)scrollTranscript;
-(void)didShowNewCompose;
-(void)didChangeOrientation:(id)arg1 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(void)failedTest:(id)arg1 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)showKeyboard;
-(void)didShowAMessage;
-(void)didShowTranscriptList;
-(BOOL)_shouldShowMadridRegistrationView;
-(BOOL)_restoreState:(out /*^block*/id*)arg1 ;
-(void)_messageSent:(id)arg1 ;
-(void)_messageSendFailed:(id)arg1 ;
-(void)_handleAccountsChanged:(id)arg1 ;
-(void)_destroyMadridRegistrationView;
-(void)_playMessageReceivedForMessage:(id)arg1 inChat:(id)arg2 ;
-(void)_playMessageSent;
-(void)setAlertViewHandler:(id)arg1 ;
-(void)_loadURLMessageGUID:(id)arg1 ;
-(void)_activateSiriForConversation:(id)arg1 ;
-(void)_activateSiriForRecipient:(id)arg1 ;
-(void)setWaitToSendFinishLaunching:(BOOL)arg1 ;
-(id)defaultPng;
-(NSURL *)deferredLoadURL;
-(void)setDeferredLoadURL:(NSURL *)arg1 ;
-(void)reportAppLaunchFinished;
-(void)setDefaultPng:(id)arg1 ;
-(void)_storeState;
-(void)_updateMadridRegistrationViewAnimated:(BOOL)arg1 ;
-(BOOL)_restoreState;
-(void)_scheduleDeferredSetup;
-(void)_prepareForResume:(BOOL)arg1 ;
-(void)_showMadridRegistrationViewIfNecessary;
-(void)__updateAppSnapshot;
-(BOOL)_isShowingNewComposition;
-(void)_updateAppSnapshot;
-(void)_updateDefaultPNGSuspended;
-(void)__showMadridRegistrationViewIfNecessary;
-(void)_createMadridRegistrationViewIfNecessary;
-(id)alertViewHandler;
-(void)_prepareForSuspend;
-(void)dealloc;
-(id)init;
-(void)applicationSignificantTimeChange:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)_application:(id)arg1 handleSiriTask:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)applicationDidResumeFromUnderLock;
-(BOOL)applicationSuspendWithSettings:(id)arg1 ;
-(BOOL)openURL:(id)arg1 ;
-(void)applicationOpenURL:(id)arg1 ;
-(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(BOOL)isHandlingURL;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(BOOL)isLocked;
-(void)_resetIdleTimer;
-(void)_chatItemsDidChange:(id)arg1 ;
-(CKMessagesController *)messagesController;
-(void)setMessagesController:(CKMessagesController *)arg1 ;
-(void)_messageReceived:(id)arg1 ;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidSuspendForEventsOnly;
-(void)systemApplicationDidResumeForEventsOnly;
-(void)firstRunControllerDidFinish:(id)arg1 finished:(BOOL)arg2 ;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)_clearFailureBadge;
@end

