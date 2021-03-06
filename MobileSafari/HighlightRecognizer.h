/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@interface HighlightRecognizer : UIGestureRecognizer {

	unsigned long long _numberOfTouches;
	id _highlightTarget;
	SEL _highlightAction;

}

@property (assign,nonatomic,__weak) id highlightTarget;              //@synthesize highlightTarget=_highlightTarget - In the implementation block
@property (assign,nonatomic) SEL highlightAction;                    //@synthesize highlightAction=_highlightAction - In the implementation block
-(id)highlightTarget;
-(void)setHighlightTarget:(id)arg1 ;
-(SEL)highlightAction;
-(void)setHighlightAction:(SEL)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfTouches;
-(void)reset;
@end

