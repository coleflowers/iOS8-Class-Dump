/*
* This header is generated by classdump-dyld 1.0
* on Monday, July 30, 2018 at 9:31:39 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTextMessagePartChatItem.h>

@class NSArray;

@interface IMAggregateMessagePartChatItem : IMTextMessagePartChatItem {

	NSArray* _subparts;

}

@property (nonatomic,copy,readonly) NSArray * subparts;              //@synthesize subparts=_subparts - In the implementation block
-(Class)__ck_chatItemClass;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithItem:(id)arg1 subparts:(id)arg2 ;
-(NSArray *)subparts;
@end

