/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class MessageContentLayer, MFAttachment;

@interface MessageQuicklookImageAttachmentsActivity : UIActivity {

	MessageContentLayer* _contentLayer;
	MFAttachment* _attachment;
	unsigned long long _index;

}
-(id)initWithContentLayer:(id)arg1 attachment:(id)arg2 index:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)_cleanup;
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)activityImage;
-(id)_beforeActivity;
@end

