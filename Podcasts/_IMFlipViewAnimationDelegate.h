/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMFlipViewTransition;

@interface _IMFlipViewAnimationDelegate : NSObject {

	long long tag;
	IMFlipViewTransition* _flipView;

}

@property (assign,nonatomic) long long tag; 
@property (nonatomic,retain) IMFlipViewTransition * flipView;              //@synthesize flipView=_flipView - In the implementation block
+(id)delegateWithTag:(long long)arg1 flipView:(id)arg2 ;
-(void)setFlipView:(IMFlipViewTransition *)arg1 ;
-(IMFlipViewTransition *)flipView;
-(void)dealloc;
-(id)init;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
@end
