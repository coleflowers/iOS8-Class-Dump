/*
* This header is generated by classdump-dyld 1.0
* on Monday, July 30, 2018 at 9:31:40 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface IMHandleRegistrarInternal : NSObject {

	NSMutableDictionary* _siblingsMap;
	NSMutableDictionary* _accountSiblingsMap;
	NSMutableDictionary* _existingAccountSiblingsMap;
	NSMutableDictionary* _chatSiblingsMap;
	NSMutableDictionary* _existingChatSiblingsMap;
	NSMutableArray* _allIMHandles;
	BOOL _buildingChatSiblings;

}
-(void)dealloc;
@end

