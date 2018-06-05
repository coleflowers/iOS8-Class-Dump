/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSMapTable;

@interface SBScreenManager : NSObject {

	NSHashTable* _handlers;
	NSMapTable* _screenIDToHandlerMap;
	NSMapTable* _screenIDToObserversMap;
	NSMapTable* _screenIDToScreenMap;
	NSHashTable* _connectedScreenIDs;

}
+(id)sharedInstance;
-(void)_updateHandlerForConnectionToScreen:(id)arg1 ;
-(void)addScreenObserver:(id)arg1 forScreen:(id)arg2 ;
-(void)removeScreenObserver:(id)arg1 forScreen:(id)arg2 ;
-(id)screenWithID:(unsigned)arg1 ;
-(BOOL)isScreenConnected:(id)arg1 ;
-(void)addConnectionHandler:(id)arg1 ;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

