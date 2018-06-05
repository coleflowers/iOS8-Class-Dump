/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUI/SBAwayViewPluginController.h>

@class NSMutableDictionary;

@interface SBEventObserverRegistry : SBAwayViewPluginController {

	void* _provider;
	NSMutableDictionary* _observers;

}
+(id)sharedInstance;
-(void)postEventToInterestedObservers:(CFStringRef)arg1 ;
-(void)setValue:(BOOL)arg1 forState:(CFStringRef)arg2 ;
-(void)addObserverWithToken:(unsigned long long)arg1 forEvent:(id)arg2 ;
-(void)removeObserverWithToken:(unsigned long long)arg1 forEvent:(id)arg2 ;
-(void)handleEvent:(id)arg1 token:(unsigned long long)arg2 action:(long long)arg3 ;
-(id)init;
@end

