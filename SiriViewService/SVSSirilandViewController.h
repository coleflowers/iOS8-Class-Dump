/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <UIKit/UIViewController.h>
#import <SiriViewService/AFUIDebugControllerDelegate.h>
#import <SiriViewService/SVSPagerViewControllerDelegate.h>
#import <SiriViewService/SVSSirilandViewDelegate.h>
#import <SiriViewService/SVSTranscriptStackViewControllerDataSource.h>
#import <SiriViewService/SVSSuggestionsViewControllerDelegate.h>
#import <SiriViewService/SVSTranscriptStackViewControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <SiriViewService/RadiosPreferencesDelegate.h>
#import <SiriViewService/SiriUIPresentation.h>

@protocol SiriUIPresentationDataSource, SiriUIPresentationDelegate, AFUIDebugControlling;
@class SVSSuggestionsViewController, SVSPagerViewController, UIActionSheet, RadiosPreferences, SVSSirilandView, NSString;

@interface SVSSirilandViewController : UIViewController <AFUIDebugControllerDelegate, SVSPagerViewControllerDelegate, SVSSirilandViewDelegate, SVSTranscriptStackViewControllerDataSource, SVSSuggestionsViewControllerDelegate, SVSTranscriptStackViewControllerDelegate, UIActionSheetDelegate, RadiosPreferencesDelegate, SiriUIPresentation> {

	BOOL _shouldDisplayNetworkUnavailable;
	BOOL _needsUpdatedUtterances;
	BOOL _hasUpdatedAvailability;
	unsigned long long _lastAvailability;
	BOOL _userInteractionDidOccurSinceActivation;
	long long _currentRequestSource;
	BOOL _airplaneModeOn;
	BOOL _wifiPowerOn;
	id<SiriUIPresentationDataSource> _dataSource;
	id<SiriUIPresentationDelegate> _delegate;
	SVSSuggestionsViewController* _siriUnavailableViewController;
	SVSPagerViewController* _pagerViewController;
	id<AFUIDebugControlling> _debugController;
	double _lastPresentationTime;
	UIActionSheet* _debugActionSheet;
	RadiosPreferences* _radioPreferences;
	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;

}

@property (nonatomic,retain) SVSSirilandView * view; 
@property (getter=_siriUnavailableViewController,nonatomic,readonly) SVSSuggestionsViewController * siriUnavailableViewController;              //@synthesize siriUnavailableViewController=_siriUnavailableViewController - In the implementation block
@property (getter=_pagerViewController,nonatomic,readonly) SVSPagerViewController * pagerViewController;                                        //@synthesize pagerViewController=_pagerViewController - In the implementation block
@property (nonatomic,retain) id<AFUIDebugControlling> debugController;                                                                          //@synthesize debugController=_debugController - In the implementation block
@property (assign,nonatomic) double lastPresentationTime;                                                                                       //@synthesize lastPresentationTime=_lastPresentationTime - In the implementation block
@property (getter=_debugActionSheet,nonatomic,retain) UIActionSheet * debugActionSheet;                                                         //@synthesize debugActionSheet=_debugActionSheet - In the implementation block
@property (assign,nonatomic) BOOL airplaneModeOn;                                                                                               //@synthesize airplaneModeOn=_airplaneModeOn - In the implementation block
@property (nonatomic,retain) RadiosPreferences * radioPreferences;                                                                              //@synthesize radioPreferences=_radioPreferences - In the implementation block
@property (assign,nonatomic) BOOL wifiPowerOn;                                                                                                  //@synthesize wifiPowerOn=_wifiPowerOn - In the implementation block
@property (assign,nonatomic) WiFiManagerClientRef wifiManager;                                                                                  //@synthesize wifiManager=_wifiManager - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef wifiDevice;                                                                                    //@synthesize wifiDevice=_wifiDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SiriUIPresentationDataSource> dataSource;                                                                //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIPresentationDelegate> delegate;                                                                    //@synthesize delegate=_delegate - In the implementation block
-(void)suggestionsViewDidShowSuggestions:(id)arg1 ;
-(CGRect)statusBarFrameForSuggestionsViewController:(id)arg1 ;
-(double)statusViewHeightForSuggestionsViewController:(id)arg1 ;
-(void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2 ;
-(void)statusBarFrameDidChange;
-(void)updateSuggestedUtterances:(id)arg1 forLanguage:(id)arg2 ;
-(void)siriRequestWillStart;
-(id)_createTranscriptStackViewController;
-(id)_siriUnavailableViewController;
-(id)_pagerViewController;
-(void)_updateSiriAvailabilityAnimated:(BOOL)arg1 ;
-(id)_previousConversation;
-(id)_previousTranscriptStackViewController;
-(id)_activeTranscriptStackViewController;
-(id)_activeConversation;
-(id)_conversationIdentifiers;
-(id)_identifierOfPreviousConversation;
-(id)_transcriptStackViewControllers;
-(id)conversationForTranscriptStackViewController:(id)arg1 ;
-(void)_speakText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_speakUnavailableText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_speakText:(id)arg1 ;
-(id)_transcriptStackViewControllerForConversation:(id)arg1 ;
-(id)_freshTranscriptStackViewController;
-(void)_cancelRequest;
-(void)_requestUpdatedSuggestionsIfNecessary;
-(void)_presentRadarComposeController;
-(BOOL)_shouldEnableIdleTimerForRequestSource:(long long)arg1 andAVRecordRoute:(id)arg2 ;
-(void)_hideAcousticIDSpinner;
-(id)_conversationItemAtIndexPath:(id)arg1 forTranscriptStackViewController:(id)arg2 ;
-(void)_updateConversationAvailability:(unsigned long long)arg1 ;
-(id)_topTranscriptViewController;
-(void)debugController:(id)arg1 stateDidChangeWithAddViews:(id)arg2 ;
-(void)debugController:(id)arg1 wantsPresentViewController:(id)arg2 ;
-(void)debugController:(id)arg1 wantsDismissViewController:(id)arg2 ;
-(void)getScreenshotImageForDebugController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)pagerViewController:(id)arg1 didActivatePageViewController:(id)arg2 oldActivePageViewController:(id)arg3 ;
-(void)pagerViewControllerDidChangeTransitionState:(id)arg1 ;
-(CGRect)statusBarFrameForSirilandView:(id)arg1 ;
-(long long)siriStateForTranscriptStackViewController:(id)arg1 ;
-(id)domainObjectStoreForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewControllerWillEnterSiriland:(id)arg1 ;
-(void)transcriptStackViewControllerDidExitSiriland:(id)arg1 ;
-(CGRect)statusBarFrameForTranscriptStackViewController:(id)arg1 ;
-(long long)initialDisplayTypeForTranscriptStackViewController:(id)arg1 ;
-(BOOL)transcriptStackViewControllerWillShowSuggestions:(id)arg1 ;
-(void)transcriptStackViewControllerDidShowSuggestions:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 didHideVibrantView:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2 ;
-(void)transcriptStackViewControllerWillBeginEditing:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndexPath:(id)arg4 ;
-(void)transcriptStackViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)cancelRequestForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)stopSpeakingForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 synthesizeSpeechWithPhoneticText:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)effectiveCoreLocationBundleForTranscriptStackViewController:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)transcriptStackViewControllerShouldPreventUserInteraction:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 setStatusViewHidden:(BOOL)arg2 ;
-(void)transcriptStackViewController:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 willDismissViewController:(id)arg2 ;
-(void)transcriptStackViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 ;
-(void)transcriptStackViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)transcriptStackViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3 ;
-(void)transcriptStackViewController:(id)arg1 didScrollForInterval:(double)arg2 ;
-(void)transcriptStackViewController:(id)arg1 didShowSnippetWithIdentifier:(id)arg2 forInterval:(double)arg3 ;
-(void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 ;
-(void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4 ;
-(void)conversation:(id)arg1 didChangePresentationStateForItemsAtIndexPaths:(id)arg2 ;
-(void)siriDidFinishActionsForConversationItemWithIdentifier:(id)arg1 inConversation:(id)arg2 ;
-(void)startNewConversation;
-(void)siriWillHidePasscodeUnlock;
-(id)siriWillStartRequestWithOptions:(id)arg1 ;
-(double)idleTimerInterval;
-(BOOL)shouldDismissForIdling;
-(void)siriNetworkAvailabilityDidChange;
-(void)speechRecordingDidEndForRequest:(id)arg1 onAVRecordRoute:(id)arg2 ;
-(void)speechRecordingDidCancelForRequest:(id)arg1 onAVRecordRoute:(id)arg2 ;
-(void)speechRecordingDidFailForRequest:(id)arg1 onAVRecordRoute:(id)arg2 withError:(id)arg3 ;
-(void)siriDidDetectMusic;
-(id)_itemInPreviousConversationAtIndexPath:(id)arg1 ;
-(id)_itemInCurrentConversationAtIndexPath:(id)arg1 ;
-(void)transcriptStackViewController:(id)arg1 setHelpButtonEmphasized:(BOOL)arg2 ;
-(void)transcriptStackViewControllerPulseHelpButton:(id)arg1 ;
-(void)wifiPowerChanged;
-(id<AFUIDebugControlling>)debugController;
-(void)setDebugController:(id<AFUIDebugControlling>)arg1 ;
-(double)lastPresentationTime;
-(void)setLastPresentationTime:(double)arg1 ;
-(id)_debugActionSheet;
-(void)setDebugActionSheet:(UIActionSheet *)arg1 ;
-(BOOL)airplaneModeOn;
-(void)setAirplaneModeOn:(BOOL)arg1 ;
-(RadiosPreferences *)radioPreferences;
-(void)setRadioPreferences:(RadiosPreferences *)arg1 ;
-(BOOL)wifiPowerOn;
-(void)setWifiPowerOn:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id<SiriUIPresentationDataSource>)arg1 ;
-(void)setDelegate:(id<SiriUIPresentationDelegate>)arg1 ;
-(void)reloadData;
-(id<SiriUIPresentationDataSource>)dataSource;
-(id<SiriUIPresentationDelegate>)delegate;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)viewController;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)acousticIDRequestDidFinishWithSuccess:(BOOL)arg1 ;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(void)siriWillShowPasscodeUnlockAndCancelRequest:(BOOL)arg1 ;
-(void)siriDidHidePasscodeUnlock;
-(void)userInteractionDidOccur;
-(void)didReceiveHelpAction;
-(void)didReceiveReportBugAction;
-(void)didReceiveBugButtonLongPress;
-(void)siriWillShowPasscodeUnlock;
-(void)airplaneModeChanged;
-(WiFiManagerClientRef)wifiManager;
-(WiFiDeviceClientRef)wifiDevice;
-(void)setWifiDevice:(WiFiDeviceClientRef)arg1 ;
-(void)setWifiManager:(WiFiManagerClientRef)arg1 ;
-(id)requestContext;
@end

