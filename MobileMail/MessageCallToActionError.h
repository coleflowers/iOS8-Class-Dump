/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MessageCallToAction.h>

@class NSString, NSError;

@interface MessageCallToActionError : MessageCallToAction {

	NSString* _title;
	NSError* _error;

}

@property (nonatomic,retain,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)callToActionWithTitle:(id)arg1 forError:(id)arg2 ;
-(id)primaryActionTitle;
-(id)secondaryActionTitle;
-(void)dealloc;
-(id)bundleIdentifier;
-(id)title;
-(id)subtitle;
-(long long)compare:(id)arg1 ;
-(NSError *)error;
@end
