/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <UIKit/UIControl.h>

@class GKLabel, GKColorPalette;

@interface GKBuyButton : UIControl {

	GKLabel* _titleLabel;
	GKColorPalette* _palette;

}

@property (nonatomic,retain) GKLabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) GKColorPalette * palette;              //@synthesize palette=_palette - In the implementation block
-(void)wasPressed;
-(void)wasDepressed;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(GKLabel *)titleLabel;
-(void)setTitleLabel:(GKLabel *)arg1 ;
-(void)setPalette:(GKColorPalette *)arg1 ;
-(GKColorPalette *)palette;
@end

