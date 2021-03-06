/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UITextField, UIView;

@interface AnimatedOverlayView : UIView {

	UITextField* _associatedTextField;
	UIView* _clippingView;
	UITextField* _textField;
	BOOL _isAnimating;

}

@property (nonatomic,retain) UITextField * associatedTextField;              //@synthesize associatedTextField=_associatedTextField - In the implementation block
@property (nonatomic,retain) UIView * clippingView;                          //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) UITextField * textField;                        //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                               //@synthesize isAnimating=_isAnimating - In the implementation block
-(void)setAssociatedTextField:(UITextField *)arg1 ;
-(void)orientationWillChangeToInterfaceOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 associatedTextField:(id)arg2 ;
-(UIView *)clippingView;
-(void)setClippingView:(UIView *)arg1 ;
-(void)setIsAnimating:(BOOL)arg1 ;
-(UITextField *)associatedTextField;
-(BOOL)isAnimating;
-(UITextField *)textField;
-(void)setTextField:(UITextField *)arg1 ;
@end

