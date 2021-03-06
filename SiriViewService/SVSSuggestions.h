/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, SVSSuggestionsDelegate;
@class NSObject, NSString, NSArray;

@interface SVSSuggestions : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _languageCode;
	NSArray* _suggestedUtterances;
	id<SVSSuggestionsDelegate> _delegate;

}

@property (nonatomic,readonly) NSString * languageCode;                               //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSArray * suggestedUtterances;                           //@synthesize suggestedUtterances=_suggestedUtterances - In the implementation block
@property (assign,nonatomic,__weak) id<SVSSuggestionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)getSuggestionsWithCompletion:(/*^block*/id)arg1 ;
-(void)setSuggestedUtterances:(NSArray *)arg1 ;
-(id)initWithLanguageCode:(id)arg1 delegate:(id)arg2 ;
-(id)_suggestionsFilePath;
-(NSArray *)suggestedUtterances;
-(void)setDelegate:(id<SVSSuggestionsDelegate>)arg1 ;
-(id<SVSSuggestionsDelegate>)delegate;
-(NSString *)languageCode;
@end

