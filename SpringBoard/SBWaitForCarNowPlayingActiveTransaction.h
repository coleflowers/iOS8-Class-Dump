/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>

@class SBStarkScreenController;

@interface SBWaitForCarNowPlayingActiveTransaction : BSTransaction {

	SBStarkScreenController* _screenController;
	double _timeout;

}
-(id)initWithScreenController:(id)arg1 timeout:(double)arg2 ;
-(void)dealloc;
-(void)_begin;
@end

