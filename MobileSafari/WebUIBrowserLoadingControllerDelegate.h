/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebUIBrowserLoadingControllerDelegate <NSObject>
@optional
-(void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
-(void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
-(void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
-(void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
-(void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
-(void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
-(void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
-(void)browserLoadingControllerDidUpdateURL:(id)arg1;
-(void)browserLoadingControllerDidUpdateURLString:(id)arg1;
-(void)browserLoadingControllerDidUpdateTitle:(id)arg1;
-(void)browserLoadingControllerDidUpdateBackForward:(id)arg1;
-(void)browserLoadingControllerDidUpdateSecurity:(id)arg1;
-(void)browserLoadingControllerDidUpdateEstimatedProgress:(id)arg1;
-(void)browserLoadingController:(id)arg1 willLoadRequest:(id)arg2 userDriven:(BOOL)arg3;
-(void)browserLoadingController:(id)arg1 failedToStartLoadingRequest:(id)arg2 error:(id)arg3;
-(BOOL)browserLoadingControllerShouldShowProvisionalURLs:(id)arg1;
-(void)browserLoadingControllerWillStartUserDrivenLoad:(id)arg1;
-(void)browserLoadingControllerDidStartLoading:(id)arg1;
-(void)browserLoadingController:(id)arg1 didFinishLoadingWithError:(id)arg2 dataSource:(id)arg3;
-(void)browserLoadingControllerDidUpdateLoadingState:(id)arg1;
-(id)browserLoadingController:(id)arg1 userVisibleStringForURL:(id)arg2;
-(BOOL)browserLoadingControllerShouldEvaluateUserEnteredJavaScript:(id)arg1;
-(void)webView:(id)arg1 didHandleOnloadEventsForFrame:(id)arg2;
-(void)webThreadWebView:(id)arg1 didLayout:(unsigned long long)arg2;

@end
