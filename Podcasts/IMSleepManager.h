/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, NSCountedSet;

@interface IMSleepManager : NSObject {

	double _idleTimerDelay;
	NSTimer* _idleTimerReenableTimer;
	NSTimer* _idleTimerInputCheck;
	NSCountedSet* _objectsHoldingIdleTimerDisabled;

}

@property (assign,nonatomic) double idleTimerDelay;                                         //@synthesize idleTimerDelay=_idleTimerDelay - In the implementation block
@property (nonatomic,readonly) BOOL idleTimerDisabled; 
@property (nonatomic,readonly) unsigned long long idleTimerDisableRefCount; 
@property (nonatomic,readonly) NSCountedSet * objectsHoldingIdleTimerDisabled;              //@synthesize objectsHoldingIdleTimerDisabled=_objectsHoldingIdleTimerDisabled - In the implementation block
+(id)sharedInstance;
-(void)cancelIdleTimer;
-(void)idleTimerInputCheck:(id)arg1 ;
-(double)idleTimerDelay;
-(void)startIdleTimer:(double)arg1 ;
-(void)startInputCheck;
-(void)idleTimerFired:(id)arg1 ;
-(void)retainIdleTimerDisabledForObject:(id)arg1 ;
-(void)releaseIdleTimerDisabledForObject:(id)arg1 ;
-(unsigned long long)idleTimerDisableRefCount;
-(NSCountedSet *)objectsHoldingIdleTimerDisabled;
-(void)reevaluateIdleTimerDisabled;
-(void)setIdleTimerDelay:(double)arg1 ;
-(void)retainIdleTimerDisabled;
-(void)releaseIdleTimerDisabled;
-(BOOL)hasObjectRetainedIdleTimerDisabled:(id)arg1 ;
-(void)dealloc;
-(BOOL)idleTimerDisabled;
@end
