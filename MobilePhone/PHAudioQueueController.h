/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:25 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PHAudioQueueController : NSObject

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> audioEventQueue; 
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)audioEventQueue;
-(void)queueAudioEventBlockIfNecessary:(/*^block*/id)arg1 ;
@end

