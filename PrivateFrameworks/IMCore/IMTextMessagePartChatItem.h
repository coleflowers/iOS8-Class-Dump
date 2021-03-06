/*
* This header is generated by classdump-dyld 1.0
* on Monday, July 30, 2018 at 9:31:39 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessagePartChatItem.h>

@class NSAttributedString;

@interface IMTextMessagePartChatItem : IMMessagePartChatItem {

	NSAttributedString* _subject;

}

@property (nonatomic,copy,readonly) NSAttributedString * subject;              //@synthesize subject=_subject - In the implementation block
-(Class)__ck_chatItemClass;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSAttributedString *)subject;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 subject:(id)arg4 ;
@end

