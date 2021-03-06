/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <SiriViewService/NSFastEnumeration.h>

@protocol SVSTranscriptItemGroupDelegate;
@class NSMutableArray, NSMutableIndexSet, NSArray, NSIndexSet;

@interface SVSTranscriptItemGroup : NSObject <NSFastEnumeration> {

	NSMutableArray* _transcriptItems;
	NSMutableIndexSet* _insertionIndexes;
	BOOL _provisional;
	BOOL _waitsForConfirmation;
	double _presentationDelay;
	BOOL _eligibleForPresentation;
	BOOL _presentationDelayElapsed;
	id<SVSTranscriptItemGroupDelegate> _delegate;

}

@property (nonatomic,readonly) NSArray * transcriptItems; 
@property (nonatomic,readonly) NSIndexSet * insertionIndexes; 
@property (getter=isProvisional,nonatomic,readonly) BOOL provisional;                                                                          //@synthesize provisional=_provisional - In the implementation block
@property (assign,getter=isEligibleForPresentation,nonatomic) BOOL eligibleForPresentation;                                                    //@synthesize eligibleForPresentation=_eligibleForPresentation - In the implementation block
@property (nonatomic,readonly) BOOL waitsForConfirmation;                                                                                      //@synthesize waitsForConfirmation=_waitsForConfirmation - In the implementation block
@property (assign,nonatomic,__weak) id<SVSTranscriptItemGroupDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setPresentationDelayElapsed:,getter=_presentationDelayElapsed,nonatomic) BOOL presentationDelayElapsed;              //@synthesize presentationDelayElapsed=_presentationDelayElapsed - In the implementation block
-(id)initWithTranscriptItems:(id)arg1 insertionIndexes:(id)arg2 provisional:(BOOL)arg3 waitsForConfirmation:(BOOL)arg4 presentationDelay:(double)arg5 ;
-(NSArray *)transcriptItems;
-(void)replaceTranscriptItem:(id)arg1 withTranscriptItem:(id)arg2 cancelPresentationDelay:(BOOL)arg3 ;
-(void)shiftInsertionIndexesStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2 ;
-(BOOL)isEligibleForPresentation;
-(NSIndexSet *)insertionIndexes;
-(BOOL)waitsForConfirmation;
-(void)_setPresentationDelayElapsed:(BOOL)arg1 ;
-(void)_presentationEligibilityConditionDidChange;
-(BOOL)_presentationDelayElapsed;
-(unsigned long long)insertionIndexForTranscriptItem:(id)arg1 ;
-(void)setEligibleForPresentation:(BOOL)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SV0*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)setDelegate:(id<SVSTranscriptItemGroupDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<SVSTranscriptItemGroupDelegate>)delegate;
-(BOOL)isProvisional;
-(void)removeElementAtIndex:(long long)arg1 ;
@end

