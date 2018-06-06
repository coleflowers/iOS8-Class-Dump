/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTSingleton.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface MTObjectRetainer : MTSingleton {

	NSMutableArray* _objects;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * objects;                        //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)releaseObject:(id)arg1 ;
-(void)retainObject:(id)arg1 ;
-(void)releaseObject:(id)arg1 afterDuration:(double)arg2 ;
-(void)retainObject:(id)arg1 forDuration:(double)arg2 ;
-(NSMutableArray *)objects;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setObjects:(NSMutableArray *)arg1 ;
@end

