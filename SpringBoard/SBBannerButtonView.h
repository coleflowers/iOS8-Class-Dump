/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface SBBannerButtonView : UIView {

	NSArray* _buttons;

}

@property (nonatomic,retain) NSArray * buttons;              //@synthesize buttons=_buttons - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_buttonHeight;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
@end

