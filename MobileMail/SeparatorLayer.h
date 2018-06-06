/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface SeparatorLayer : UIView {

	UIColor* _tintColor;
	unsigned long long _axis;

}

@property (nonatomic,retain) UIColor * tintColor; 
@property (assign,nonatomic) unsigned long long axis;              //@synthesize axis=_axis - In the implementation block
+(double)separatorHeight;
+(id)_defaultSeparatorColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(CGSize)intrinsicContentSize;
-(unsigned long long)axis;
-(void)setAxis:(unsigned long long)arg1 ;
@end
