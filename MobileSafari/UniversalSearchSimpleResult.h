/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WBSParsecSearchSimpleResult.h>
#import <MobileSafari/CompletionItem.h>
#import <MobileSafari/UniversalSearchDisplayableResult.h>

@class NSString;

@interface UniversalSearchSimpleResult : WBSParsecSearchSimpleResult <CompletionItem, UniversalSearchDisplayableResult>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) NSString * completionTableHeaderViewReuseIdentifier; 
-(id)completionTableViewCellReuseIdentifier;
-(id)completionTableViewCell;
-(void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2 ;
-(id)completionTableHeaderView;
-(void)configureCompletionTableHeaderView:(id)arg1 forCompletionList:(id)arg2 ;
-(NSString *)completionTableHeaderViewReuseIdentifier;
-(id)supportedStyleOverrides;
@end
