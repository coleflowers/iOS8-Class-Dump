/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:25 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, AVController, NSObject, NSNumber;

@interface PHVoicemailAudioController : NSObject {

	NSString* _category;
	AVController* _avController;
	NSObject*<OS_dispatch_queue> _avControllerQueue;
	NSNumber* _currentTimeOverride;

}

@property (readonly) AVController * avController; 
@property (assign) double currentTime; 
@property (retain) NSNumber * currentTimeOverride;              //@synthesize currentTimeOverride=_currentTimeOverride - In the implementation block
-(id)initForVoicemail;
-(id)initForVoicemailGreeting;
-(id)_initWithCategory:(id)arg1 ;
-(void)_mediaServerDied:(id)arg1 ;
-(NSNumber *)currentTimeOverride;
-(void)_avControllerTimeJumpedAfterReset:(id)arg1 ;
-(void)setCurrentTimeOverride:(NSNumber *)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)dealloc;
-(AVController *)avController;
-(double)currentTime;
@end

