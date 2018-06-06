/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:04:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class JSValue, NSString, NSArray;


@protocol ADMailComposerJSO_Bindings <JSExport>
@property (nonatomic,retain) JSValue * listener; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,retain) NSArray * toRecipients; 
@optional
-(void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2 __JS_EXPORT_AS__setMessageBody:(id)arg3;

@required
-(void)presentComposer;
-(NSArray *)toRecipients;
-(void)setToRecipients:(id)arg1;
-(void)setAttachments:(id)arg1;
-(void)setSubject:(id)arg1;
-(NSString *)subject;
-(JSValue *)listener;
-(void)setListener:(id)arg1;
-(void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;

@end

