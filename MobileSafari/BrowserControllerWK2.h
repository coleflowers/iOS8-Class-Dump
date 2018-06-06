/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/BrowserController.h>

@class SafariWebView, WKPreferences, DownloadController, WKProcessPool;

@interface BrowserControllerWK2 : BrowserController {

	SafariWebView* _webView;
	WKPreferences* _wkPreferences;
	DownloadController* _downloadController;

}

@property (nonatomic,readonly) WKProcessPool * processPool; 
@property (nonatomic,readonly) WKPreferences * wkPreferences;                        //@synthesize wkPreferences=_wkPreferences - In the implementation block
@property (nonatomic,readonly) DownloadController * downloadController;              //@synthesize downloadController=_downloadController - In the implementation block
-(void)fraudWarningsToggledFromSettings;
-(void)_initializeAntiPhishingService;
-(void)_prepareContentForMailController:(id)arg1 ;
-(id)_hostViewForFindOnPageUI;
-(id)_findOnPageSearchText;
-(void)_removeFindOnPageHighlighter;
-(void)_clearSelectionAfterFindingOnPage;
-(id)_webViewForFindOnPage;
-(BOOL)placeViewController:(id)arg1 shouldOpenHomePage:(id)arg2 ;
-(void)addFindOnPageHighlighter;
-(void)_contentViewWillRotate;
-(BOOL)_isShowingFullScreenPlugInUI;
-(void)_contentViewDidRotate;
-(void)didReadDefaults;
-(void)setCookiePolicyMessageReceived;
-(void)didCompleteGestures;
-(void)didCompleteScrolling;
-(void)updateExposedScrollViewRect;
-(void)updateWebViewSizeAttributes;
-(id)contentContainerView;
-(BOOL)_canSuppressNavigationBarBlur;
-(CGRect)contentContainerViewFrameForBrowserSize:(CGSize)arg1 ;
-(void)setWebViewFromTabDocument:(id)arg1 ;
-(void)_updateContentContainerViewHitTestInsets;
-(double)_verticalOffsetForStoreBanner;
-(double)_verticalOffsetForContinuousReadingBanner;
-(void)document:(id)arg1 willMakeReaderVisible:(BOOL)arg2 ;
-(void)_commitToSpeculativeLoadForDocument:(id)arg1 ;
-(void)_setContinuousReadingContentViewFromTabDocument:(id)arg1 useReaderView:(BOOL)arg2 ;
-(void)setDoNotTrackEnabledPreference:(id)arg1 ;
-(void)updateInsetsForBackgroundWebView:(id)arg1 ;
-(id)findOnPageToolbarDelegate;
-(void)dynamicBarAnimatorWillEnterSteadyState:(id)arg1 ;
-(void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1 ;
-(void)setShowingStoreBanner:(id)arg1 isShowing:(BOOL)arg2 ;
-(void)didSelectFindOnPageCompletionItemWithString:(id)arg1 ;
-(void)findOnPageCompletionProvider:(id)arg1 setStringToComplete:(id)arg2 ;
-(void)_updateStorageBlockingPreference;
-(double)_adjustedTopObscuredInsetForBanners:(double)arg1 ;
-(BOOL)shouldDeferHistoryUpdatesForWKWebView:(id)arg1 ;
-(WKPreferences *)wkPreferences;
-(DownloadController *)downloadController;
-(id)init;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setWebView:(id)arg1 ;
-(void)scrollViewWasRemoved:(id)arg1 ;
-(BOOL)documentIsEmpty;
-(void)setDocumentView:(id)arg1 ;
-(WKProcessPool *)processPool;
-(id)_formDataController;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(id)browserView;
@end
