/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:25:15 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DialerLCDFieldProtocol <NSObject>
@optional
-(void)setText:(id)arg1 needsFormat:(BOOL)arg2 name:(id)arg3 label:(id)arg4;
-(void)setName:(id)arg1 numberLabel:(id)arg2;

@required
-(void)setText:(id)arg1 needsFormat:(BOOL)arg2;
-(void)deleteCharacter;
-(id)unformattedText;
-(BOOL)inCallMode;
-(void)setInCallMode:(BOOL)arg1;
-(void)setDelegate:(id)arg1;
-(id)text;
-(void)setHighlighted:(BOOL)arg1;
-(BOOL)highlighted;

@end
