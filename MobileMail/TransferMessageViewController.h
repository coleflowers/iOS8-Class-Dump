/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileMail/MFMessageViewingContextDelegate.h>

@class MFMessageViewingContext, MFMailMessage, MessageContentAreaLayer, NSString;

@interface TransferMessageViewController : UIViewController <MFMessageViewingContextDelegate> {

	MFMessageViewingContext* _messageViewingContext;
	MFMailMessage* _message;

}

@property (nonatomic,retain) MFMailMessage * message;                                          //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) MessageContentAreaLayer * messageContentAreaLayer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MessageContentAreaLayer *)messageContentAreaLayer;
-(void)dealloc;
-(void)loadView;
-(MFMailMessage *)message;
-(void)setMessage:(MFMailMessage *)arg1 ;
@end
