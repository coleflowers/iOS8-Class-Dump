/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBDaemonHandler : NSObject
+(id)stateDescription;
+(BOOL)addRequest:(id)arg1 forKey:(id)arg2 forDaemonPid:(int)arg3 ;
+(void)removeRequestForKey:(id)arg1 forDaemonPid:(int)arg2 ;
+(void)noteDaemonCanceled:(id)arg1 ;
+(void)initialize;
@end
