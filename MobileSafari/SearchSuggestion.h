/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/CompletionItem.h>

@class NSString;

@interface SearchSuggestion : NSObject <CompletionItem> {

	BOOL _recentSearch;
	BOOL _searchEngineSuggestion;
	BOOL _goesToURL;
	NSString* _string;

}

@property (nonatomic,readonly) NSString * string;                                                //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) BOOL goesToURL;                                                     //@synthesize goesToURL=_goesToURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) NSString * completionTableHeaderViewReuseIdentifier; 
-(id)completionTableViewCellReuseIdentifier;
-(void)acceptCompletionWithActionHandler:(id)arg1 ;
-(id)completionTableViewCell;
-(void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2 ;
-(void)auditAcceptedCompletionWithRank:(unsigned long long)arg1 ;
-(double)completionTableViewCellCustomHeightForCompletionList:(id)arg1 ;
-(id)initWithRecentSearchString:(id)arg1 ;
-(id)initWithSearchEngineSuggestion:(id)arg1 ;
-(BOOL)goesToURL;
-(void)setGoesToURL:(BOOL)arg1 ;
-(NSString *)description;
-(NSString *)string;
-(NSString *)parsecDomainIdentifier;
-(id)initWithUserTypedString:(id)arg1 ;
@end

