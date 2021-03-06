/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:09 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/CompletionItem.h>

@class NSString;

@interface FindOnPageCompletionItem : NSObject <CompletionItem> {

	NSString* _string;
	unsigned long long _numberOfMatches;

}

@property (nonatomic,readonly) unsigned long long numberOfMatches;                               //@synthesize numberOfMatches=_numberOfMatches - In the implementation block
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
-(id)initWithString:(id)arg1 numberOfMatches:(unsigned long long)arg2 ;
-(unsigned long long)numberOfMatches;
-(NSString *)parsecDomainIdentifier;
@end

