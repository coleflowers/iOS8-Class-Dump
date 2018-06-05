/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MNMotionContextProviderDelegate.h>

@protocol MNMotionContextProvider;
@class NSString;

@interface MNMotionContext : NSObject <MNMotionContextProviderDelegate> {

	id<MNMotionContextProvider> _provider;
	int _motionType;
	int _exitType;
	int _confidence;

}

@property (nonatomic,readonly) int motionType;                      //@synthesize motionType=_motionType - In the implementation block
@property (nonatomic,readonly) int exitType;                        //@synthesize exitType=_exitType - In the implementation block
@property (nonatomic,readonly) int confidence;                      //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) BOOL isMoving; 
@property (nonatomic,readonly) BOOL isWalking; 
@property (nonatomic,readonly) BOOL isRunning; 
@property (nonatomic,readonly) BOOL isDriving; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)motionType;
-(void)startMotionUpdatesWithProvider:(id)arg1 ;
-(void)stopMotionUpdates;
-(void)motionContextProvider:(id)arg1 didUpdateMotion:(int)arg2 exitType:(int)arg3 confidence:(int)arg4 ;
-(BOOL)isMoving;
-(BOOL)isWalking;
-(BOOL)isDriving;
-(void)dealloc;
-(NSString *)description;
-(BOOL)isRunning;
-(int)confidence;
-(int)exitType;
@end

