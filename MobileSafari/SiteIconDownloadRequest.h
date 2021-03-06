/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebViewDelegate.h>

@protocol SiteIconDownloadRequestDelegate;
@class NSURL, UIWebView, NSString, NSMutableArray, NSURLConnection, NSMutableData;

@interface SiteIconDownloadRequest : NSObject <UIWebViewDelegate> {

	NSURL* _mainResourceURL;
	UIWebView* _webView;
	NSString* _userAgentString;
	BOOL _fetchForFavoritesIcon;
	BOOL _paused;
	NSMutableArray* _iconURLs;
	NSURLConnection* _URLConnection;
	NSMutableData* _iconData;
	unsigned _bookmarkID;
	NSString* _bookmarkUUID;
	NSString* _bookmarkAddress;
	id<SiteIconDownloadRequestDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * bookmarkUUID;                                        //@synthesize bookmarkUUID=_bookmarkUUID - In the implementation block
@property (nonatomic,readonly) unsigned bookmarkID;                                            //@synthesize bookmarkID=_bookmarkID - In the implementation block
@property (nonatomic,readonly) NSString * bookmarkAddress;                                     //@synthesize bookmarkAddress=_bookmarkAddress - In the implementation block
@property (assign,nonatomic,__weak) id<SiteIconDownloadRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)iconURLListForBrowserView:(id)arg1 ;
+(id)iconURLListForWebClipIcons:(id)arg1 faviconURL:(id)arg2 pageURL:(id)arg3 ;
-(id)initWithBookmark:(id)arg1 ;
-(id)initWithBookmark:(id)arg1 iconURLs:(id)arg2 ;
-(void)_clearWebView;
-(void)_fetchMainResource;
-(void)_fetchNextIcon;
-(void)_buildIconURLListWithBrowserView:(id)arg1 ;
-(void)setBookmarkFetchedIconData;
-(id)_bestImageWithData:(id)arg1 forWidth:(double)arg2 ;
-(void)_cancelConnectionAndFetchNextIcon;
-(void)_processIconDataAndNotifyDelegate;
-(id)initWithBookmark:(id)arg1 singleResourceURL:(id)arg2 ;
-(NSString *)bookmarkUUID;
-(NSString *)bookmarkAddress;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<SiteIconDownloadRequestDelegate>)arg1 ;
-(id<SiteIconDownloadRequestDelegate>)delegate;
-(void)start;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)uiWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(unsigned)bookmarkID;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
@end

