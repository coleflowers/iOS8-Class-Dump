/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:04:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdSheet/AdSheet-Structs.h>
#import <UIKit/UIViewController.h>
#import <AdSheet/ADSStoryboardWebViewDelegate.h>
#import <AdSheet/ADSWebViewControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <AdSheet/QLPreviewControllerDelegate.h>
#import <AdSheet/QLPreviewControllerDataSource.h>

@class ADSAdSpaceController, ADSStoryboardActionViewController, NSURL, ADSStoryboardWebView, ADCountdownButton, UIProgressView, UIPopoverController, NSTimer, UIImageView, ADSAdImpressionController, ADQuicklookPreview, ADSAdImpression, NSString;

@interface ADSStoryboardController : UIViewController <ADSStoryboardWebViewDelegate, ADSWebViewControllerDelegate, UIPopoverControllerDelegate, UIGestureRecognizerDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource> {

	ADSAdSpaceController* _adSpaceController;
	ADSStoryboardActionViewController* _actionViewController;
	NSURL* _frontmostAppURL;
	BOOL _contentIsFullyLoaded;
	BOOL _hasAppeared;
	BOOL _hasStartedFirstLoad;
	BOOL _adIsDismissing;
	BOOL _forcePortraitOnly;
	BOOL _hasShownDismissButton;
	BOOL _playingFullScreenVideo;
	BOOL _suspended;
	ADSStoryboardWebView* _webView;
	ADCountdownButton* _dismissButton;
	UIProgressView* _progressView;
	UIPopoverController* _popover;
	/*^block*/id _popoverDismissalHandler;
	NSTimer* _autoDismissTimer;
	UIImageView* _interstitialBrandingCorner;
	ADSAdImpressionController* _adImpressionController;
	ADQuicklookPreview* _previewItem;
	/*^block*/id _previewCompletion;
	double _loadStartTime;
	NSTimer* _progressTimer;

}

@property (assign,nonatomic,__weak) ADSStoryboardActionViewController * actionViewController; 
@property (nonatomic,retain) ADSStoryboardWebView * webView;                                               //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) ADCountdownButton * dismissButton;                                            //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                                //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIPopoverController * popover;                                                //@synthesize popover=_popover - In the implementation block
@property (nonatomic,copy) id popoverDismissalHandler;                                                     //@synthesize popoverDismissalHandler=_popoverDismissalHandler - In the implementation block
@property (nonatomic,retain) NSTimer * autoDismissTimer;                                                   //@synthesize autoDismissTimer=_autoDismissTimer - In the implementation block
@property (nonatomic,retain) UIImageView * interstitialBrandingCorner;                                     //@synthesize interstitialBrandingCorner=_interstitialBrandingCorner - In the implementation block
@property (nonatomic,readonly) ADSAdImpressionController * adImpressionController;                         //@synthesize adImpressionController=_adImpressionController - In the implementation block
@property (nonatomic,readonly) ADSAdImpression * ad; 
@property (nonatomic,retain) ADQuicklookPreview * previewItem;                                             //@synthesize previewItem=_previewItem - In the implementation block
@property (nonatomic,copy) id previewCompletion;                                                           //@synthesize previewCompletion=_previewCompletion - In the implementation block
@property (assign,nonatomic) double loadStartTime;                                                         //@synthesize loadStartTime=_loadStartTime - In the implementation block
@property (assign,nonatomic) BOOL contentIsFullyLoaded;                                                    //@synthesize contentIsFullyLoaded=_contentIsFullyLoaded - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared;                                                             //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (assign,nonatomic) BOOL hasStartedFirstLoad;                                                     //@synthesize hasStartedFirstLoad=_hasStartedFirstLoad - In the implementation block
@property (assign,nonatomic) BOOL adIsDismissing;                                                          //@synthesize adIsDismissing=_adIsDismissing - In the implementation block
@property (assign,nonatomic) BOOL forcePortraitOnly;                                                       //@synthesize forcePortraitOnly=_forcePortraitOnly - In the implementation block
@property (nonatomic,retain) NSTimer * progressTimer;                                                      //@synthesize progressTimer=_progressTimer - In the implementation block
@property (assign,nonatomic) BOOL hasShownDismissButton;                                                   //@synthesize hasShownDismissButton=_hasShownDismissButton - In the implementation block
@property (assign,nonatomic) BOOL playingFullScreenVideo;                                                  //@synthesize playingFullScreenVideo=_playingFullScreenVideo - In the implementation block
@property (assign,nonatomic) BOOL suspended;                                                               //@synthesize suspended=_suspended - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDownloader;
-(ADSAdImpressionController *)adImpressionController;
-(void)clientApplicationDidEnterBackground;
-(void)clientApplicationCancelledAction;
-(id)adSpaceController;
-(void)setAdSpaceController:(id)arg1 ;
-(id)initWithAdSpaceController:(id)arg1 ;
-(void)setActionViewController:(ADSStoryboardActionViewController *)arg1 ;
-(void)setAutoDismissTimer:(NSTimer *)arg1 ;
-(void)_handleLowMemory:(id)arg1 ;
-(CGRect)_contentFrame;
-(void)_dismissButtonTapped;
-(void)_videoPlayerWentFullScreen:(id)arg1 ;
-(void)_videoPlayerExitedFullScreen:(id)arg1 ;
-(void)setLoadStartTime:(double)arg1 ;
-(BOOL)hasAppeared;
-(void)setHasAppeared:(BOOL)arg1 ;
-(void)_showDismissButton;
-(ADSStoryboardActionViewController *)actionViewController;
-(void)_clientWillResignActive;
-(void)_clientDidBecomeActive;
-(BOOL)contentIsFullyLoaded;
-(BOOL)forcePortraitOnly;
-(BOOL)playingFullScreenVideo;
-(void)setPlayingFullScreenVideo:(BOOL)arg1 ;
-(void)_dismissWithSystemEvent:(int)arg1 ;
-(BOOL)adIsDismissing;
-(void)setAdIsDismissing:(BOOL)arg1 ;
-(void)setPopoverDismissalHandler:(id)arg1 ;
-(void)_dismissKeyboard;
-(void)_autoDismissStoryboard;
-(BOOL)hasShownDismissButton;
-(void)setHasShownDismissButton:(BOOL)arg1 ;
-(void)_homeButtonTapped;
-(void)_resetAutoDismissTimer;
-(BOOL)hasStartedFirstLoad;
-(void)setHasStartedFirstLoad:(BOOL)arg1 ;
-(double)loadStartTime;
-(void)setContentIsFullyLoaded:(BOOL)arg1 ;
-(void)_openWhitelistURL:(id)arg1 ;
-(void)webView:(id)arg1 requestsPresentModalViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)setForcePortraitOnly:(BOOL)arg1 ;
-(void)webView:(id)arg1 requestsDismissModalViewControllerAnimated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPreviewCompletion:(id)arg1 ;
-(void)_userSelectedCustomAction:(BOOL)arg1 ;
-(void)storyboardWebViewPrivilegedAdWantsToDismiss:(id)arg1 ;
-(BOOL)storyboardWebViewVoiceOverWantsToDismiss:(id)arg1 ;
-(void)webView:(id)arg1 requestsPresentPopoverViewController:(id)arg2 fromRect:(CGRect)arg3 animated:(BOOL)arg4 tapDismissalHandler:(/*^block*/id)arg5 ;
-(void)webViewPopoverShouldResize:(id)arg1 ;
-(void)webView:(id)arg1 requestsDismissPopoverViewControllerAnimated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 requestsPreview:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)storyboardWebViewRequestsSupportedInterfaceOrientations:(id)arg1 ;
-(void)storyboardWebView:(id)arg1 didChangeSupportedInterfaceOrientations:(unsigned long long)arg2 ;
-(void)webViewWillTakeScreenShot:(id)arg1 ;
-(void)webViewDidTakeScreenShot:(id)arg1 ;
-(void)webView:(id)arg1 didReportEventWithMessage:(id)arg2 ;
-(void)webView:(id)arg1 didReportSystemEventWithType:(int)arg2 ;
-(void)adWebView:(id)arg1 failedToLoadAssetAtURL:(id)arg2 details:(id)arg3 ;
-(void)adWebView:(id)arg1 hadScriptErrorWithInfo:(id)arg2 ;
-(void)adWebViewControllerShouldDismiss:(id)arg1 ;
-(void)adWebViewController:(id)arg1 routeExternalURL:(id)arg2 ;
-(void)adWebViewControllerWillPresentViewController:(id)arg1 ;
-(void)adWebViewControllerDidDismissViewController:(id)arg1 ;
-(id)popoverDismissalHandler;
-(NSTimer *)autoDismissTimer;
-(UIImageView *)interstitialBrandingCorner;
-(void)setInterstitialBrandingCorner:(UIImageView *)arg1 ;
-(id)previewCompletion;
-(BOOL)suspended;
-(void)_updateProgress:(id)arg1 ;
-(ADQuicklookPreview *)previewItem;
-(void)setPreviewItem:(ADQuicklookPreview *)arg1 ;
-(void)previewController:(id)arg1 customActionButtonWasTappedForPreviewItem:(id)arg2 ;
-(id)previewController:(id)arg1 customActionButtonTittleForPreviewItem:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(ADSStoryboardWebView *)webView;
-(void)setWebView:(ADSStoryboardWebView *)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)popoverController:(id)arg1 animationCompleted:(long long)arg2 ;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(void)setProgressTimer:(NSTimer *)arg1 ;
-(NSTimer *)progressTimer;
-(void)setSuspended:(BOOL)arg1 ;
-(UIPopoverController *)popover;
-(void)setPopover:(UIPopoverController *)arg1 ;
-(void)setDismissButton:(ADCountdownButton *)arg1 ;
-(ADCountdownButton *)dismissButton;
-(ADSAdImpression *)ad;
@end

