/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:04:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary, JSValue;


@protocol ADCalendarJSO_Bindings <JSExport>
@property (nonatomic,retain) NSDictionary * event; 
@property (nonatomic,retain) JSValue * listener; 
@property (assign,nonatomic) JSValue * rect; 
@optional
-(void)presentComposerWithEventProperties:(id)arg1 listener:(id)arg2 popoverRect:(id)arg3 __JS_EXPORT_AS__presentComposer:(id)arg4;

@required
-(void)presentComposerWithEventProperties:(id)arg1 listener:(id)arg2 popoverRect:(id)arg3;
-(JSValue *)rect;
-(void)setRect:(id)arg1;
-(void)setEvent:(id)arg1;
-(NSDictionary *)event;
-(JSValue *)listener;
-(void)setListener:(id)arg1;

@end

