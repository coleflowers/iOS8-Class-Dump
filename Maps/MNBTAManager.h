/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MNBTAManager : NSObject {

	NSMutableArray* _jobs;

}
+(id)sharedManager;
-(void)_jobEvent:(id)arg1 name:(id)arg2 ;
-(id)_jobForName:(id)arg1 ;
-(void)removeJob:(id)arg1 ;
-(void)addJob:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
