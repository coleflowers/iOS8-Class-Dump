/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface SBReverseCountedSemaphore : NSObject {

	NSObject*<OS_dispatch_group> _group;

}
-(void)decrement;
-(void)increment;
-(void)dealloc;
-(id)init;
-(void)wait;
@end

