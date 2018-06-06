/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/BrowserController.h>
#import <MobileSafari/NavigationSnapshotControllerDelegate.h>
#import <UIKit/UIWebFindOnPageHighlighterDelegate.h>
#import <MobileSafari/FindOnPageToolbarDelegate.h>

@protocol UIWebFindOnPageHighlighter;
@class UIWebBrowserView, NavigationSnapshotController, NSString;

@interface BrowserControllerWK1 : BrowserController <NavigationSnapshotControllerDelegate, UIWebFindOnPageHighlighterDelegate, FindOnPageToolbarDelegate> {

	UIWebBrowserView* _browserView;
	id<UIWebFindOnPageHighlighter> _findOnPageHighlighter;
	NavigationSnapshotController* _navigationSnapshotController;

}

@property (nonatomic,retain,readonly) id<UIWebFindOnPageHighlighter> findOnPageHighlighter;              //@synthesize findOnPageHighlighter=_findOnPageHighlighter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)findOnPageToolbarDelegate;
-(void)didSelectFindOnPageCompletionItemWithString:(id)arg1 ;
-(void)findOnPageCompletionProvider:(id)arg1 setStringToComplete:(id)arg2 ;
-(id)textForCurrentResultLabel;
-(id)textForToolbarLabel;
-(BOOL)hasMatches;
-(void)updateSearchText:(id)arg1 ;
-(void)_setFindOnPageAnimationStateActivityIndicator:(BOOL)arg1 ;
-(void)next;
-(void)previous;
-(void)done;
-(void)highlightSearchResultBounds:(CGRect)arg1 resultRects:(id)arg2 contentViews:(id)arg3 forPDFViewHandler:(id)arg4 ;
-(void)findOnPageHighlighterDidHighlightMatch:(id)arg1 ;
-(void)findOnPageHighlighterSearchDidBegin:(id)arg1 ;
-(void)findOnPageHighlighterSearchDidTimeOut:(id)arg1 ;
-(void)findOnPageHighlighterSearchWasCancelled:(id)arg1 ;
-(void)findOnPageHighlighterSearchLimitHit:(id)arg1 ;
-(void)findOnPageHighlighterSearchDidFinish:(id)arg1 ;
-(void)findOnPageHighlighter:(id)arg1 hasPartialSearchResults:(id)arg2 ;
-(BOOL)tabDocumentCanClearRenderTreeSizeThresholdForReset:(id)arg1 ;
-(void)tabDocument:(id)arg1 didFinishLoadingWithError:(BOOL)arg2 ;
-(void)tabDocumentDidChangeLocationWithinPageForMainFrame:(id)arg1 ;
-(void)tabDocumentDidCompleteCheckForStoreBanner:(id)arg1 ;
-(void)_prepareContentForMailController:(id)arg1 ;
-(id)_hostViewForFindOnPageUI;
-(id)_findOnPageSearchText;
-(void)_removeFindOnPageHighlighter;
-(void)_clearSelectionAfterFindingOnPage;
-(void)_setShowingAlert:(BOOL)arg1 ;
-(void)_animateNode:(id)arg1 intoButton:(int)arg2 afterLinkImageDisappears:(/*^block*/id)arg3 ;
-(id)_openInNewPageActionForElement:(id)arg1 withTargetURL:(id)arg2 ;
-(id)_addToReadingListActionForElement:(id)arg1 withTargetURL:(id)arg2 ;
-(void)_animateTabDocument:(id)arg1 intoBackgroundFromLinkNode:(id)arg2 ;
-(id)_actionsForElement:(id)arg1 withTargetURL:(id)arg2 suggestedActions:(id)arg3 ;
-(id)webView:(id)arg1 actionsForImageElement:(id)arg2 withTargetURL:(id)arg3 suggestedActions:(id)arg4 ;
-(id)webView:(id)arg1 actionsForLinkElement:(id)arg2 withTargetURL:(id)arg3 suggestedActions:(id)arg4 ;
-(void)addFindOnPageHighlighter;
-(void)_contentViewWillRotate;
-(BOOL)_isShowingFullScreenPlugInUI;
-(void)_contentViewDidRotate;
-(id)_pdfView;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3 ;
-(CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(CGSize)arg3 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(float)_minZoomScale;
-(float)_maxZoomScale;
-(void)updateNavigationSnapshotForActiveTabDocument;
-(void)didCompleteGestures;
-(void)didCompleteScrolling;
-(void)updateExposedScrollViewRect;
-(void)updateWebViewSizeAttributes;
-(void)updateScrollViewContentSize;
-(BOOL)_canSuppressNavigationBarBlur;
-(void)navigationSnapshotControllerGestureBegan:(id)arg1 ;
-(void)navigationSnapshotControllerGestureEnded:(id)arg1 willNavigate:(BOOL)arg2 toHistoryPosition:(long long)arg3 ;
-(void)navigationSnapshotController:(id)arg1 willNavigateAtEndOfGesture:(BOOL)arg2 toHistoryPosition:(long long)arg3 ;
-(void)navigationSnapshotControllerWillUnhideWebContent:(id)arg1 ;
-(id)navigationSnapshotControllerDocumentToSnapshot:(id)arg1 ;
-(BOOL)navigationSnapshotController:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)navigationSnapshotControllerShouldDelaySnapshotForOngoingLoad:(id)arg1 ;
-(void)_setContentViewRootLayer:(id)arg1 ;
-(CGRect)contentContainerViewFrameForBrowserSize:(CGSize)arg1 ;
-(void)setWebViewFromTabDocument:(id)arg1 ;
-(void)_initScrollView;
-(void)resetViewOnTabDocument:(id)arg1 ;
-(void)_updateContentContainerViewHitTestInsets;
-(void)_installNavigationSnapshotController;
-(double)_verticalOffsetForStoreBanner;
-(double)_verticalOffsetForContinuousReadingBanner;
-(void)document:(id)arg1 willMakeReaderVisible:(BOOL)arg2 ;
-(void)_commitToSpeculativeLoadForDocument:(id)arg1 ;
-(void)_setContinuousReadingContentViewFromTabDocument:(id)arg1 useReaderView:(BOOL)arg2 ;
-(void)history:(id)arg1 didNavigateInMainFrameInTabDocument:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(id)webView;
-(void)view:(id)arg1 didSetFrame:(CGRect)arg2 oldFrame:(CGRect)arg3 asResultOfZoom:(BOOL)arg4 ;
-(void)webViewMainFrameDidFinishLoad:(id)arg1 ;
-(void)webThreadWebViewDidLayout:(id)arg1 ;
-(void)webViewMainFrameDidFailLoad:(id)arg1 withError:(id)arg2 ;
-(void)webViewMainFrameDidCommitLoad:(id)arg1 ;
-(void)didResetViewForNewPage:(id)arg1 ;
-(void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2 ;
-(void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2 ;
-(void)webViewDidDrawTiles:(id)arg1 ;
-(void)webView:(id)arg1 willClickElement:(id)arg2 ;
-(void)webViewDidClick:(id)arg1 ;
-(void)webViewDidNotClick:(id)arg1 ;
-(void)webViewWillShowInteractionHighlight:(id)arg1 ;
-(void)scrollViewWasRemoved:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4 ;
-(void)webViewMainFrameDidFirstVisuallyNonEmptyLayoutInFrame:(id)arg1 ;
-(void)webView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4 ;
-(void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3 ;
-(void)webView:(id)arg1 printFrameView:(id)arg2 ;
-(void)webViewClose:(id)arg1 ;
-(void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3 ;
-(id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4 ;
-(id)webView:(id)arg1 createWebViewWithRequest:(id)arg2 ;
-(void)webView:(id)arg1 willAssistFormNode:(id)arg2 ;
-(BOOL)webViewRotateShouldCenterSelectionRect:(id)arg1 ;
-(BOOL)documentIsEmpty;
-(id<UIWebFindOnPageHighlighter>)findOnPageHighlighter;
-(void)setDocumentView:(id)arg1 ;
-(id)_formDataController;
-(void)webViewFocus:(id)arg1 ;
-(BOOL)webViewShouldInterruptJavaScript:(id)arg1 ;
-(void)webView:(id)arg1 didDrawRect:(CGRect)arg2 ;
-(BOOL)webViewCanCheckGeolocationAuthorizationStatus:(id)arg1 ;
-(id)browserView;
@end

