/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/IMViewControllerTransition.h>

@class CAAnimation;

@interface IMFlipTransition : IMViewControllerTransition {

	BOOL _clockwise;
	CAAnimation* _fromViewRotationAnimation;

}

@property (assign,nonatomic) BOOL clockwise;                                       //@synthesize clockwise=_clockwise - In the implementation block
@property (nonatomic,retain) CAAnimation * fromViewRotationAnimation;              //@synthesize fromViewRotationAnimation=_fromViewRotationAnimation - In the implementation block
+(BOOL)allowsReverseTransition;
-(void)prepareTransition;
-(void)performTransition;
-(void)setClockwise:(BOOL)arg1 ;
-(id)YRotationAnimationFromAngle:(double)arg1 toAngle:(double)arg2 ;
-(void)setFromViewRotationAnimation:(CAAnimation *)arg1 ;
-(CAAnimation *)fromViewRotationAnimation;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)clockwise;
@end

