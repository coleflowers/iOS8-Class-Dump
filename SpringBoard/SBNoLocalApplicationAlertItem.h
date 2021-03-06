/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:55 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSURL;

@interface SBNoLocalApplicationAlertItem : SBAlertItem {

	NSURL* _url;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSURL * url;                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
-(id)initWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(NSURL *)url;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)completion;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
@end

