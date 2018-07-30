/*
* This header is generated by classdump-dyld 1.0
* on Monday, July 30, 2018 at 9:31:40 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/NSCopying.h>

@class IMItem;

@interface IMChatItem : NSObject <NSCopying> {

	IMItem* _item;

}

@property (nonatomic,readonly) BOOL canDelete; 
-(id)_item;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)canDelete;
-(id)_initWithItem:(id)arg1 ;
-(id)_timeStale;
-(id)_timeAdded;
-(void)_setTimeAdded:(id)arg1 ;
@end

