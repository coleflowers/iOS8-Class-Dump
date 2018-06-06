/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <MobileSafari/CompletionProvider.h>

@protocol OS_dispatch_queue;
@class NSMutableData, NSString, WBSCompletionQuery, NSObject, WBSParsecSearchSession;

@interface SearchSuggestionProvider : CompletionProvider {

	CFURLConnectionRef _suggestionConnection;
	NSMutableData* _suggestionData;
	NSString* _currentSearchString;
	WBSCompletionQuery* _currentCompletionQuery;
	NSString* _userAgentString;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	WBSParsecSearchSession* _universalSearchSession;

}

@property (assign,nonatomic,__weak) WBSParsecSearchSession * universalSearchSession;              //@synthesize universalSearchSession=_universalSearchSession - In the implementation block
-(void)_cancelAndReleaseConnectionAndData;
-(id)completionsForQuery:(id)arg1 ;
-(void)setStringToComplete:(id)arg1 ;
-(id)suggestionStrings;
-(unsigned long long)maximumCachedCompletionCount;
-(WBSParsecSearchSession *)universalSearchSession;
-(void)setUniversalSearchSession:(WBSParsecSearchSession *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stop;
@end

