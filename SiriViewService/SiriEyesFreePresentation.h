/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SiriUIPresentation.h>

@protocol SiriUIPresentationDataSource, SiriUIPresentationDelegate;
@class NSString;

@interface SiriEyesFreePresentation : NSObject <SiriUIPresentation> {

	id<SiriUIPresentationDataSource> _dataSource;
	id<SiriUIPresentationDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SiriUIPresentationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIPresentationDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(double)idleTimerInterval;
-(BOOL)shouldDismissForIdling;
-(void)_didPresentItemsAtIndexPaths:(id)arg1 ;
-(void)setDataSource:(id<SiriUIPresentationDataSource>)arg1 ;
-(void)setDelegate:(id<SiriUIPresentationDelegate>)arg1 ;
-(id<SiriUIPresentationDataSource>)dataSource;
-(id<SiriUIPresentationDelegate>)delegate;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(long long)options;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
-(void)siriDidActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
@end

