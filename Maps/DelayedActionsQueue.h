/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSTimer;

@interface DelayedActionsQueue : NSObject {

	NSMutableArray* _queue;
	long long _delayCount;
	NSTimer* _performDelayedActionsTimer;
	double _intervalBeforeExecutingPendingActions;

}

@property (assign,nonatomic) double intervalBeforeExecutingPendingActions;              //@synthesize intervalBeforeExecutingPendingActions=_intervalBeforeExecutingPendingActions - In the implementation block
-(void)cancelAllDelayedActions;
-(void)performActionWithNonretainedObject:(id)arg1 action:(/*^block*/id)arg2 ;
-(void)beginDelayingActions;
-(void)endDelayingActions;
-(void)setIntervalBeforeExecutingPendingActions:(double)arg1 ;
-(void)cancelPostDelayEndInterval;
-(double)intervalBeforeExecutingPendingActions;
-(void)startPostDelayEndInterval;
-(void)executePendingActions;
-(void)performAction:(/*^block*/id)arg1 ;
-(void)dealloc;
@end
