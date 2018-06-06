/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/LoadingController.h>

@protocol LoadingControllerDelegateWK2;
@class NSString, NSURL, WKWebView;

@interface LoadingControllerWK2 : NSObject <LoadingController> {

	BOOL _loading;
	NSURL* _URL;
	NSString* _title;
	id<LoadingControllerDelegateWK2> _delegate;
	WKWebView* _webView;

}

@property (assign,nonatomic,__weak) id<LoadingControllerDelegateWK2> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) WKWebView * webView;                                           //@synthesize webView=_webView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
@property (assign,nonatomic) float estimatedProgress; 
@property (nonatomic,readonly) BOOL canGoBack; 
@property (nonatomic,readonly) BOOL canGoForward; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) NSURL * URL; 
@property (getter=isSecure,nonatomic,readonly) BOOL secure; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setDelegate:(id<LoadingControllerDelegateWK2>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)reload;
-(id<LoadingControllerDelegateWK2>)delegate;
-(NSString *)title;
-(BOOL)isSecure;
-(WKWebView *)webView;
-(NSURL *)URL;
-(void)setWebView:(WKWebView *)arg1 ;
-(BOOL)isLoading;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)setURL:(NSURL *)arg1 ;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(float)estimatedProgress;
-(void)setLoading:(BOOL)arg1 ;
-(void)setEstimatedProgress:(float)arg1 ;
-(void)loadRequest:(id)arg1 userDriven:(BOOL)arg2 ;
@end

