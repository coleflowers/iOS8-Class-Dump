/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:04:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdSheet/ADJavaScriptObject.h>
#import <AdSheet/MFMessageComposeViewControllerDelegate.h>
#import <AdSheet/ADSMSComposerJSO_Bindings.h>

@class NSString, NSArray, JSValue, MFMessageComposeViewController;

@interface ADSMSComposerJSO : ADJavaScriptObject <MFMessageComposeViewControllerDelegate, ADSMSComposerJSO_Bindings> {

	NSArray* _messageRecipients;
	NSString* _messageBody;
	long long _attachmentDownloadCount;
	MFMessageComposeViewController* _messageComposeViewController;

}

@property (nonatomic,retain) NSArray * messageRecipients;                                                //@synthesize messageRecipients=_messageRecipients - In the implementation block
@property (nonatomic,copy) NSString * messageBody;                                                       //@synthesize messageBody=_messageBody - In the implementation block
@property (assign,nonatomic) long long attachmentDownloadCount;                                          //@synthesize attachmentDownloadCount=_attachmentDownloadCount - In the implementation block
@property (nonatomic,retain) MFMessageComposeViewController * messageComposeViewController;              //@synthesize messageComposeViewController=_messageComposeViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * body; 
@property (nonatomic,retain) NSArray * recipients; 
@property (nonatomic,retain) JSValue * listener; 
@property (nonatomic,readonly) long long kADSMSComposerMaximumAttachmentBytes; 
+(void)initializeInContext:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 impressionController:(id)arg2 ;
-(void)presentComposer;
-(void)setMessageRecipients:(NSArray *)arg1 ;
-(NSArray *)messageRecipients;
-(void)setAttachmentDownloadCount:(long long)arg1 ;
-(long long)attachmentDownloadCount;
-(BOOL)canAttachMIMEType:(id)arg1 ;
-(void)_presentController;
-(long long)kADSMSComposerMaximumAttachmentBytes;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)dealloc;
-(NSString *)body;
-(void)setAttachments:(id)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(void)setMessageComposeViewController:(MFMessageComposeViewController *)arg1 ;
-(MFMessageComposeViewController *)messageComposeViewController;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(void)setMessageBody:(NSString *)arg1 ;
-(NSString *)messageBody;
@end

