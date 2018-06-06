/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MessageCallToAction.h>

@class NSString, SGRealtimeEvent;

@interface MessageCallToActionRealtimeEvent : MessageCallToAction {

	NSString* _title;
	NSString* _subtitle;
	NSString* _action;

}

@property (nonatomic,retain,readonly) SGRealtimeEvent * realtimeEvent; 
+(id)callToActionForRealtimeEvent:(id)arg1 ;
-(SGRealtimeEvent *)realtimeEvent;
-(id)primaryActionTitle;
-(id)secondaryActionTitle;
-(id)_eventAbsoluteStartTime;
-(void)dealloc;
-(id)bundleIdentifier;
-(id)title;
-(id)subtitle;
-(long long)compare:(id)arg1 ;
@end

