/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <UIKit/UIViewController.h>
#import <SiriViewService/AFUIDomainObjectStore.h>
#import <SiriViewService/AFUIVoicemailPlayerDelegate.h>
#import <SiriViewService/SVSAceCommandRecordsDelegate.h>
#import <SiriViewService/SVSConversationDelegate.h>
#import <SiriViewService/SiriUIPresentationDataSource.h>
#import <SiriViewService/SiriUIPresentationDelegate.h>
#import <SiriViewService/AFUISiriLanguageDelegate.h>
#import <SiriViewService/SVSSiriViewControllerServing.h>

@protocol AFUISiriSession, SiriUIPresentation, AFUISpeechSynthesis;
@class NSMutableSet, NSMutableDictionary, NSString, SVSPreferences, SVSConversationStore, NSMutableArray, AFUISiriLanguage, AFUIVoicemailPlayer, SVSAceCommandRecords, AFUIRequestOptions, NSTimer, AFManagedStorageConnection;

@interface SVSSiriViewController : UIViewController <AFUIDomainObjectStore, AFUIVoicemailPlayerDelegate, SVSAceCommandRecordsDelegate, SVSConversationDelegate, SiriUIPresentationDataSource, SiriUIPresentationDelegate, AFUISiriLanguageDelegate, SVSSiriViewControllerServing> {

	BOOL _synthesisIsSpeaking;
	unsigned long long _lockState;
	NSMutableSet* _presentedConversationItemRevisionIdentifiers;
	NSMutableDictionary* _synthesisPreparationDictionary;
	NSMutableDictionary* _synthesisAnimationDictionary;
	NSString* _punchoutIdentifierToRegisterAfterUnlock;
	BOOL _supportsSpeechSynthesis;
	BOOL __idleTimerEnabled;
	BOOL _acousticIdAllowed;
	BOOL _waitingForStartRequest;
	BOOL _requestActive;
	id<AFUISiriSession> _session;
	SVSPreferences* _preferences;
	SVSConversationStore* _conversationStore;
	NSMutableArray* _conversations;
	id<SiriUIPresentation> _presentation;
	AFUISiriLanguage* _language;
	id<AFUISpeechSynthesis> _speechSynthesis;
	AFUIVoicemailPlayer* _voicemailPlayer;
	SVSAceCommandRecords* _aceCommandRecords;
	AFUIRequestOptions* _requestOptions;
	NSString* _currentAVRecordRoute;
	unsigned long long _requestStartedCount;
	long long _siriState;
	NSTimer* __idleTimer;
	unsigned long long _wasSiriIdleAndQuiet;
	AFManagedStorageConnection* _domainObjectStorageConnection;
	long long _networkErrorIndex;
	NSMutableArray* _repeatablePhrases;
	NSString* _utteranceToSpeakAfterClearScreenCommand;
	CGRect _statusBarFrame;

}

@property (getter=_session,nonatomic,retain) id<AFUISiriSession> session;                                                                                                                         //@synthesize session=_session - In the implementation block
@property (getter=_preferences,nonatomic,readonly) SVSPreferences * preferences;                                                                                                                  //@synthesize preferences=_preferences - In the implementation block
@property (assign,setter=_setStatusBarFrame:,getter=_statusBarFrame,nonatomic) CGRect statusBarFrame;                                                                                             //@synthesize statusBarFrame=_statusBarFrame - In the implementation block
@property (getter=_conversationStore,nonatomic,readonly) SVSConversationStore * conversationStore;                                                                                                //@synthesize conversationStore=_conversationStore - In the implementation block
@property (getter=_conversations,nonatomic,readonly) NSMutableArray * conversations;                                                                                                              //@synthesize conversations=_conversations - In the implementation block
@property (getter=_presentation,nonatomic,readonly) id<SiriUIPresentation> presentation;                                                                                                          //@synthesize presentation=_presentation - In the implementation block
@property (getter=_language,nonatomic,readonly) AFUISiriLanguage * language;                                                                                                                      //@synthesize language=_language - In the implementation block
@property (getter=_speechSynthesis,nonatomic,readonly) id<AFUISpeechSynthesis> speechSynthesis;                                                                                                   //@synthesize speechSynthesis=_speechSynthesis - In the implementation block
@property (setter=_setVoicemailPlayer:,getter=_voicemailPlayer,nonatomic,retain) AFUIVoicemailPlayer * voicemailPlayer;                                                                           //@synthesize voicemailPlayer=_voicemailPlayer - In the implementation block
@property (getter=_aceCommandRecords,nonatomic,readonly) SVSAceCommandRecords * aceCommandRecords;                                                                                                //@synthesize aceCommandRecords=_aceCommandRecords - In the implementation block
@property (setter=_setRequestOptions:,getter=_requestOptions,nonatomic,retain) AFUIRequestOptions * requestOptions;                                                                               //@synthesize requestOptions=_requestOptions - In the implementation block
@property (setter=_setCurrentAVRecordRoute:,getter=_currentAVRecordRoute,nonatomic,retain) NSString * currentAVRecordRoute;                                                                       //@synthesize currentAVRecordRoute=_currentAVRecordRoute - In the implementation block
@property (assign,setter=_setRequestStartedCount:,getter=_requestStartedCount,nonatomic) unsigned long long requestStartedCount;                                                                  //@synthesize requestStartedCount=_requestStartedCount - In the implementation block
@property (assign,getter=_supportsSpeechSynthesis,nonatomic) BOOL supportsSpeechSynthesis;                                                                                                        //@synthesize supportsSpeechSynthesis=_supportsSpeechSynthesis - In the implementation block
@property (assign,setter=_setSiriState:,getter=_siriState,nonatomic) long long siriState;                                                                                                         //@synthesize siriState=_siriState - In the implementation block
@property (setter=_setIdleTimer:,nonatomic,retain) NSTimer * _idleTimer;                                                                                                                          //@synthesize _idleTimer=__idleTimer - In the implementation block
@property (assign,setter=_setIdleTimerEnabled:,getter=_isIdleTimerEnabled,nonatomic) BOOL _idleTimerEnabled;                                                                                      //@synthesize _idleTimerEnabled=__idleTimerEnabled - In the implementation block
@property (assign,setter=_setAcousticIdAllowed:,getter=_isAcousticIdAllowed,nonatomic) BOOL acousticIdAllowed;                                                                                    //@synthesize acousticIdAllowed=_acousticIdAllowed - In the implementation block
@property (assign,setter=_setWasSiriIdleAndQuiet:,getter=_wasSiriIdleAndQuiet,nonatomic) unsigned long long wasSiriIdleAndQuiet;                                                                  //@synthesize wasSiriIdleAndQuiet=_wasSiriIdleAndQuiet - In the implementation block
@property (getter=_domainObjectStorageConnection,nonatomic,readonly) AFManagedStorageConnection * domainObjectStorageConnection;                                                                  //@synthesize domainObjectStorageConnection=_domainObjectStorageConnection - In the implementation block
@property (assign,getter=_networkErrorIndex,nonatomic) long long networkErrorIndex;                                                                                                               //@synthesize networkErrorIndex=_networkErrorIndex - In the implementation block
@property (assign,setter=_setWaitingForStartRequest:,getter=_isWaitingForStartRequest,nonatomic) BOOL waitingForStartRequest;                                                                     //@synthesize waitingForStartRequest=_waitingForStartRequest - In the implementation block
@property (assign,setter=_setRequestActive:,getter=_isRequestActive,nonatomic) BOOL requestActive;                                                                                                //@synthesize requestActive=_requestActive - In the implementation block
@property (setter=_setRepeatablePhrases:,getter=_repeatablePhrases,nonatomic,retain) NSMutableArray * repeatablePhrases;                                                                          //@synthesize repeatablePhrases=_repeatablePhrases - In the implementation block
@property (setter=_setUtteranceToSpeakAfterClearScreenCommand:,getter=_utteranceToSpeakAfterClearScreenCommand,nonatomic,retain) NSString * utteranceToSpeakAfterClearScreenCommand;              //@synthesize utteranceToSpeakAfterClearScreenCommand=_utteranceToSpeakAfterClearScreenCommand - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(BOOL)_isSecureForRemoteViewService;
-(void)runSVSTestWithCommand:(id)arg1 ;
-(id)domainObjectForIdentifier:(id)arg1 ;
-(void)setDomainObject:(id)arg1 forIdentifier:(id)arg2 ;
-(id)_previousConversation;
-(id)_activeConversation;
-(id)conversationIdentifiersForSiriPresentation:(id)arg1 ;
-(id)siriPresentation:(id)arg1 conversationWithIdentifier:(id)arg2 ;
-(void)cancelRequestForSiriPresentation:(id)arg1 ;
-(void)siriPresentation:(id)arg1 synthesizeSpeechWithText:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)enableIdleTimerForSiriPresentation:(id)arg1 ;
-(void)notifyOnNextUserInteractionForSiriPresentation:(id)arg1 ;
-(void)disableIdleTimerForSiriPresentation:(id)arg1 ;
-(void)siriPresentation:(id)arg1 setHelpButtonEmphasized:(BOOL)arg2 ;
-(void)siriPresentation:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)siriPresentationRemoveAcousticIDSpinner:(id)arg1 ;
-(void)siriPresentationPresentAcousticIDSpinner:(id)arg1 ;
-(void)siriPresentation:(id)arg1 activateConversationWithIdentifier:(id)arg2 ;
-(id)startNewConversationForSiriPresentation:(id)arg1 ;
-(void)siriPresentation:(id)arg1 setStatusViewUserInteractionEnabled:(BOOL)arg2 ;
-(CGRect)statusBarFrameForSiriPresentation:(id)arg1 ;
-(void)siriPresentation:(id)arg1 setStatusViewHidden:(BOOL)arg2 ;
-(void)siriPresentationDidPresentBugReporter:(id)arg1 ;
-(void)siriPresentationDidDismissBugReporter:(id)arg1 ;
-(void)getScreenshotImageForSiriPresentation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)siriStateForSiriPresentation:(id)arg1 ;
-(id)domainObjectStoreForSiriPresentation:(id)arg1 ;
-(void)siriPresentationPulseHelpButton:(id)arg1 ;
-(void)siriPresentation:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2 ;
-(void)siriPresentation:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forConversationItemWithIdentifier:(id)arg4 ;
-(void)siriPresentation:(id)arg1 synthesizeSpeechWithPhoneticText:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopSpeakingForSiriPresentation:(id)arg1 ;
-(id)effectiveCoreLocationBundleForSiriPresentation:(id)arg1 ;
-(void)siriPresentation:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)siriPresentation:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)siriPresentation:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)siriPresentation:(id)arg1 setStatusBarHidden:(BOOL)arg2 ;
-(void)handlePasscodeUnlockForSiriPresentation:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)siriPresentation:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3 ;
-(void)siriPresentation:(id)arg1 didScrollForInterval:(double)arg2 ;
-(void)siriPresentation:(id)arg1 didShowSnippetWithIdentifier:(id)arg2 forInterval:(double)arg3 ;
-(void)siriPresentation:(id)arg1 setBugReportingAvailable:(BOOL)arg2 ;
-(void)siriPresentation:(id)arg1 setStatusViewDisabled:(BOOL)arg2 ;
-(void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 ;
-(void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4 ;
-(void)_setRequestOptions:(id)arg1 ;
-(id)_requestOptions;
-(void)endSiriSessionForSiriPresentation:(id)arg1 ;
-(void)siriPresentation:(id)arg1 setCarDisplaySnippetVisible:(BOOL)arg2 ;
-(void)siriPresentation:(id)arg1 didPrepareAnimationLinkedConversationItem:(id)arg2 animationBlock:(/*^block*/id)arg3 ;
-(void)stopRecordingSpeechForSiriPresentation:(id)arg1 ;
-(void)siriPresentation:(id)arg1 startRequestWithOptions:(id)arg2 ;
-(void)siriPresentation:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4 ;
-(id)_preferences;
-(void)conversation:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2 ;
-(void)aceCommandRecords:(id)arg1 didChangeResultForCommand:(id)arg2 ;
-(void)_didReceiveAceCommand:(id)arg1 ;
-(id)_startNewConversation;
-(BOOL)_languageMatchesConversation:(id)arg1 ;
-(void)_cancelLastRootProvisionalSnippetFromLastRequestInConversation:(id)arg1 ;
-(NSTimer *)_idleTimer;
-(id)_presentation;
-(void)_setStatusBarFrame:(CGRect)arg1 ;
-(id)_conversations;
-(void)_resetContext;
-(id)_conversationStore;
-(void)_removePreviousConversationFromStore;
-(void)_deleteConversationWithIdentifier:(id)arg1 ;
-(void)_saveConversation;
-(void)_activateConversation:(id)arg1 ;
-(void)_adjustVoiceTriggerThresholdForTTS:(BOOL)arg1 ;
-(id)_hostWithErrorHander:(/*^block*/id)arg1 ;
-(void)_openSensitiveURL:(id)arg1 delaySessionEndForTTS:(BOOL)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_punchoutMetricsAceCommandIdForItemWithIdentifier:(id)arg1 ;
-(id)_appPunchOutEventWithRefId:(id)arg1 URL:(id)arg2 appDisplayName:(id)arg3 bundleId:(id)arg4 ;
-(void)_performGenericAceCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setRequestActive:(BOOL)arg1 ;
-(void)_rescheduleIdleTimerIfNeeded;
-(void)_openSensitiveURL:(id)arg1 delaySessionEndForTTS:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_aceCommandRecords;
-(id)_aceCommandWithIdentifier:(id)arg1 ;
-(void)_didStartActionForAceCommand:(id)arg1 ;
-(BOOL)_supportsSpeechSynthesis;
-(id)_repeatablePhrases;
-(id)_speechSynthesis;
-(void)_synthesizeSpeechWithText:(id)arg1 isPhonetic:(BOOL)arg2 provisionally:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)_domainObjectStorageConnection;
-(void)_didCompleteActionForAceCommand:(id)arg1 ;
-(BOOL)_isAcousticIdAllowed;
-(void)_setWaitingForStartRequest:(BOOL)arg1 ;
-(void)_cancelSpeechSynthesis;
-(id)_utteranceToSpeakAfterClearScreenCommand;
-(void)_speakText:(id)arg1 provisionally:(BOOL)arg2 speakableUtteranceParser:(id)arg3 preparation:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 animationBlock:(/*^block*/id)arg6 ;
-(void)_setUtteranceToSpeakAfterClearScreenCommand:(id)arg1 ;
-(void)_handleRequestError:(id)arg1 ;
-(id)_voicemailPlayer;
-(void)_listenAfterSpeakingWithResult:(long long)arg1 recordedRequestCount:(unsigned long long)arg2 ;
-(id)_configuredSpeakableUtteranceParserForCommand:(id)arg1 context:(id)arg2 speakableText:(id)arg3 listenAfterSpeaking:(BOOL)arg4 subCompletion:(/*^block*/id)arg5 speakPreparation:(/*^block*/id*)arg6 speakCompletion:(/*^block*/id*)arg7 ;
-(void)_synthesizeText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performAppPunchOutCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setCurrentAVRecordRoute:(id)arg1 ;
-(id)_currentAVRecordRoute;
-(void)_deletePreviousConversation;
-(void)_didStartActionForItemAtIndexPath:(id)arg1 inConversation:(id)arg2 ;
-(id)_conversationWithIdentifier:(id)arg1 ;
-(id)_activeConversationItemAtIndexPath:(id)arg1 ;
-(id)_dialogPhaseForItemAtIndexPath:(id)arg1 ;
-(void)_setIdleTimerEnabled:(BOOL)arg1 ;
-(void)_siriPresentation:(id)arg1 speakTextForConversationItemIdentifier:(id)arg2 animationBlock:(/*^block*/id)arg3 ;
-(id)_presentedConversationItemRevisionIdentifiers;
-(BOOL)_isSpeechSynthesisSpeaking;
-(void)_synthesizePhoneticText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performAppPunchOutCommand:(id)arg1 conversationItemIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_openURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(BOOL)arg3 ;
-(void)_setAcousticIdAllowed:(BOOL)arg1 ;
-(void)_setPresentation:(id)arg1 ;
-(void)_cancelCurrentTTS:(id)arg1 ;
-(void)_setIdleTimer:(id)arg1 ;
-(void)_idleTimerFired:(id)arg1 ;
-(BOOL)_isIdleTimerEnabled;
-(BOOL)_isSiriIdleAndQuiet;
-(unsigned long long)_wasSiriIdleAndQuiet;
-(void)_setWasSiriIdleAndQuiet:(unsigned long long)arg1 ;
-(BOOL)_isWaitingForStartRequest;
-(BOOL)_isRequestActive;
-(void)_displayNotReadyError;
-(void)_addUtterance:(id)arg1 ;
-(void)siriPresentation:(id)arg1 deleteConversationWithIdentifier:(id)arg2 ;
-(id)siriPresentation:(id)arg1 domainObjectForIdentifier:(id)arg2 ;
-(void)siriPresentation:(id)arg1 setDomainObject:(id)arg2 forIdentifier:(id)arg3 ;
-(BOOL)siriPresentation:(id)arg1 itemAtIndexPathIsVirgin:(id)arg2 ;
-(void)siriPresentation:(id)arg1 insertAceViews:(id)arg2 withDialogPhase:(id)arg3 asItemsAtIndexPaths:(id)arg4 ;
-(void)siriPresentation:(id)arg1 removeItemsAtIndexPaths:(id)arg2 ;
-(void)siriPresentation:(id)arg1 addSelectionResponse:(id)arg2 ;
-(id)siriPresentation:(id)arg1 identifierOfItemAtIndexPath:(id)arg2 ;
-(id)siriPresentation:(id)arg1 indexPathForItemWithIdentifier:(id)arg2 ;
-(long long)siriPresentation:(id)arg1 typeOfItemAtIndexPath:(id)arg2 ;
-(long long)siriPresentation:(id)arg1 numberOfChildrenForItemAtIndexPath:(id)arg2 ;
-(id)siriPresentation:(id)arg1 dialogPhaseForItemAtIndexPath:(id)arg2 ;
-(id)siriPresentation:(id)arg1 aceObjectForItemAtIndexPath:(id)arg2 ;
-(id)siriPresentation:(id)arg1 aceCommandIdentifierForItemAtIndexPath:(id)arg2 ;
-(long long)siriPresentation:(id)arg1 presentationStateForItemAtIndexPath:(id)arg2 ;
-(void)siriPresentation:(id)arg1 didPresentItemsAtIndexPaths:(id)arg2 ;
-(BOOL)siriIsSpeakingForSiriPresentation:(id)arg1 ;
-(void)siriPresentation:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(id)arg4 ;
-(void)_synthesizeProvisionalText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)siriSessionShouldRequestUpdateForViewWithIdentifier:(id)arg1 ;
-(long long)_presentationOptions;
-(void)_setVoicemailPlayer:(id)arg1 ;
-(unsigned long long)_requestStartedCount;
-(void)_setRequestStartedCount:(unsigned long long)arg1 ;
-(void)setSupportsSpeechSynthesis:(BOOL)arg1 ;
-(long long)_siriState;
-(void)_setSiriState:(long long)arg1 ;
-(long long)_networkErrorIndex;
-(void)setNetworkErrorIndex:(long long)arg1 ;
-(void)_setRepeatablePhrases:(id)arg1 ;
-(void)_requestDismissal;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)_presentationViewController;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)voicemailPlaybackDidFinish:(id)arg1 ;
-(void)setHostFrontMostAppOrientation:(long long)arg1 ;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)setRequestOptions:(AFUIRequestOptions *)arg1 ;
-(void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2 ;
-(void)siriDidDeactivate;
-(void)siriWillShowPasscodeUnlockAndCancelRequest:(BOOL)arg1 ;
-(void)siriWillHidePasscodeUnlockForResult:(long long)arg1 ;
-(void)siriDidHidePasscodeUnlock;
-(void)setStatusBarFrameValue:(id)arg1 ;
-(void)userInteractionDidOccur;
-(void)setSpeechSynthesis:(id<AFUISpeechSynthesis>)arg1 ;
-(void)didReceiveHelpAction;
-(void)didReceiveReportBugAction;
-(void)didReceiveBugButtonLongPress;
-(void)siriWillShowPasscodeUnlock;
-(void)siriSessionResultForAceCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)siriSessionDidTransitionFromState:(long long)arg1 toState:(long long)arg2 event:(long long)arg3 ;
-(void)siriSessionWillStartRequestWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)siriSessionWillStartRequest;
-(void)siriSessionWillCancelRequest;
-(void)siriSessionDidFailToStartStarkNotificationRequestWithOptions:(id)arg1 ;
-(void)siriSessionAudioRecordingDidChangePowerLevel:(float)arg1 ;
-(void)siriSessionDidFinishAcousticIDRequestWithSuccess:(BOOL)arg1 ;
-(void)siriSessionDidFinishRequestWithError:(id)arg1 ;
-(void)siriSessionDidChangeNetworkAvailability;
-(void)siriSessionDidChangeLockState:(unsigned long long)arg1 ;
-(void)siriSessionOpenURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)siriSessionRequestsDismissal;
-(void)siriSessionSupportsSpeechSynthesis:(BOOL)arg1 ;
-(void)siriSessionGetRequestContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)siriSessionDidDetectMusic;
-(void)siriSessionDidReceiveSpeechRecognizedCommand:(id)arg1 ;
-(void)siriSessionDidReceiveSpeechPartialResultCommand:(id)arg1 ;
-(void)siriSessionDidReceiveAddViewsCommand:(id)arg1 ;
-(void)siriSessionDidReceiveOpenLinkCommand:(id)arg1 ;
-(void)siriSessionDidReceiveClearScreenCommand:(id)arg1 ;
-(void)siriSessionDidReceivePlayVoicemailCommand:(id)arg1 ;
-(void)siriSessionDidReceiveSayItCommand:(id)arg1 ;
-(void)siriSessionDidReceiveRepeatItCommand:(id)arg1 ;
-(void)siriSessionDidReceiveShowHelpCommand:(id)arg1 ;
-(void)siriSessionDidReceiveUpdateViewsCommand:(id)arg1 ;
-(void)siriSessionDidReceiveAppPunchOutCommand:(id)arg1 ;
-(void)siriSessionDidReceiveCloseAssistantCommand:(id)arg1 ;
-(void)siriSessionDidReceiveListenForPronunciationCommand:(id)arg1 ;
-(void)siriSessionDidReceiveSetSuggestedUtterancesCommand:(id)arg1 ;
-(void)siriSessionDidReceiveSetUIGuidedAccessCommand:(id)arg1 ;
-(void)siriSessionSpeechRecordingDidChangeAVRecordRoute:(id)arg1 ;
-(void)siriSessionSpeechRecordingDidEnd;
-(void)siriSessionSpeechRecordingDidCancel;
-(void)siriSessionSpeechRecordingDidFailWithError:(id)arg1 ;
-(void)speechSynthesisGetPreparedTextForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)speechSynthesisExecuteAnimationForIdentifier:(id)arg1 ;
-(void)speechSynthesisDidStartSpeaking;
-(void)speechSynthesisDidStopSpeakingQueueIsEmpty:(BOOL)arg1 ;
-(void)siriLanguageSpokenLanguageCodeDidChange:(id)arg1 ;
-(id)_session;
-(CGRect)_statusBarFrame;
-(void)setSession:(id<AFUISiriSession>)arg1 ;
-(id)_host;
-(void)_clearIdleTimer;
-(void)_scheduleIdleTimer;
-(void)_updateLanguageCode;
-(id)_language;
-(void)_startRequestWithOptions:(id)arg1 ;
@end

