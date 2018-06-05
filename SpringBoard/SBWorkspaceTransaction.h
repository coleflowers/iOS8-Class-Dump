/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>

@class SBAlertManager;

@interface SBWorkspaceTransaction : FBTransaction {

	SBAlertManager* _alertManager;
	BOOL _clearsCompletionAsynchronously;

}

@property (nonatomic,readonly) SBAlertManager * alertManager;                  //@synthesize alertManager=_alertManager - In the implementation block
@property (assign,nonatomic) BOOL clearsCompletionAsynchronously;              //@synthesize clearsCompletionAsynchronously=_clearsCompletionAsynchronously - In the implementation block
-(SBAlertManager *)alertManager;
-(void)setClearsCompletionAsynchronously:(BOOL)arg1 ;
-(BOOL)clearsCompletionAsynchronously;
-(void)_performDeviceCoherencyCheck;
-(void)keepAliveForAsyncBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)_didComplete;
-(BOOL)_canBeInterrupted;
-(id)initWithAlertManager:(id)arg1 ;
@end

