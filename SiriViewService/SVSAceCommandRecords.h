/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SVSAceCommandRecordDelegate.h>

@protocol SVSAceCommandRecordsDelegate;
@class NSMutableDictionary, NSString;

@interface SVSAceCommandRecords : NSObject <SVSAceCommandRecordDelegate> {

	id<SVSAceCommandRecordsDelegate> _delegate;
	NSMutableDictionary* _recordsByCommandIdentifier;

}

@property (assign,nonatomic,__weak) id<SVSAceCommandRecordsDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=_recordsByCommandIdentifier,nonatomic,readonly) NSMutableDictionary * recordsByCommandIdentifier;              //@synthesize recordsByCommandIdentifier=_recordsByCommandIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)aceCommandRecordDidChangeResult:(id)arg1 ;
-(id)aceCommandWithIdentifier:(id)arg1 ;
-(id)_recordsByCommandIdentifier;
-(void)registerAceCommand:(id)arg1 ;
-(id)_recordForAceCommand:(id)arg1 ;
-(void)recordActionStartedForAceCommand:(id)arg1 ;
-(void)recordActionCompletedSuccessfullyForAceCommand:(id)arg1 ;
-(void)recordActionCompletedUnsuccessfullyForAceCommand:(id)arg1 ;
-(long long)resultForAceCommand:(id)arg1 ;
-(void)setDelegate:(id<SVSAceCommandRecordsDelegate>)arg1 ;
-(id)init;
-(id<SVSAceCommandRecordsDelegate>)delegate;
@end

